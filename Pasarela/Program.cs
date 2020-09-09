using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Net;
using System.Net.Sockets;
using System.IO.Ports;
using System.Threading;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            /* IP -> 192.168.56.1 (usar 127.0.0.1 ? )
             * Puerto en el que recibe el sim -> 49010, 49000
             * Puerto desde donde envia el sim -> 49001
             */

            int listenPort = 49001;
            //          string listenIP = "192.168.56.1";
            byte[] receive_byte_array;
            byte[] buff = new byte[17];

            SerialPort _serialPort = new SerialPort();
            _serialPort.PortName = "COM4";
            _serialPort.BaudRate = 115200;
            _serialPort.Parity = Parity.None;
            _serialPort.DataBits = 8;
            _serialPort.StopBits = StopBits.One;
            _serialPort.Handshake = Handshake.None;

            IPEndPoint groupEP = new IPEndPoint(IPAddress.Parse("127.0.0.1"), listenPort);
            UdpClient listener = new UdpClient();

            Console.WriteLine("Esperando cliente...");

            listener.Client.Bind(groupEP);
            IPEndPoint sender = new IPEndPoint(IPAddress.Any, 0);

            _serialPort.Open();
            while (true)
            {
                receive_byte_array = listener.Receive(ref sender);

                Console.Write("DataSet utilizado:\n");
                Console.Write("{0}, {1}\n", receive_byte_array[5], receive_byte_array[41]);

                Console.Write("Valor leido:\n");

                /*
                 * Velocidad del viento (kias) dataset 3
                 */
                Console.Write("{0},\n", (int)BitConverter.ToSingle(receive_byte_array, 9));

                /*
                 * Orientacion del avion (grados respecto al norte magnetico) dataset 17
                 */
                Console.Write("{0},\n", (int)BitConverter.ToSingle(receive_byte_array, 57));

                /*
                 * Pitch (grados) dataset 17
                 */
                Console.Write("{0},\n", (int)BitConverter.ToSingle(receive_byte_array, 45));

                /*
                 * Roll (grados) dataset 17
                 */
                Console.Write("{0},\n", (int)BitConverter.ToSingle(receive_byte_array, 49));


                buff[0] = receive_byte_array[9];
                buff[1] = receive_byte_array[10];
                buff[2] = receive_byte_array[11];   /*Velocidad del viento*/
                buff[3] = receive_byte_array[12];

                buff[4] = receive_byte_array[45];
                buff[5] = receive_byte_array[46];
                buff[6] = receive_byte_array[47];  /*Pitch*/
                buff[7] = receive_byte_array[48];

                buff[8] = receive_byte_array[49];
                buff[9] = receive_byte_array[50];
                buff[10] = receive_byte_array[51]; /*Roll*/
                buff[11] = receive_byte_array[52];

                buff[12] = receive_byte_array[57];
                buff[13] = receive_byte_array[58];
                buff[14] = receive_byte_array[59]; /*Orientacion*/
                buff[15] = receive_byte_array[60];

                buff[16] = (byte)13;


                _serialPort.Write(buff, 0, 17);
            }

        }

    }
}
