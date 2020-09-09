#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "main.h"
#include "cmsis_os.h"


Model::Model() : modelListener(0)
{
}

struct Message *xRedMessagePointer;
extern osMessageQId msgQueueHandle;

void Model::tick()
{
	if(msgQueueHandle != NULL)
	{
		if(xQueueReceive(msgQueueHandle, &(xRedMessagePointer), (TickType_t) 10) == pdPASS)
		{
			Model::setWind(xRedMessagePointer->wind);
			Model::setPitch(xRedMessagePointer->pitch);
			Model::setRoll(xRedMessagePointer->roll);
			Model::setDegree(xRedMessagePointer->degree);
			modelListener->updateWidget();
		}
	}
}
