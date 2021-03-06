/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/direccion_screen/direccionViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"

direccionViewBase::direccionViewBase() :
    buttonCallback(this, &direccionViewBase::buttonCallbackHandler)
{
    box1.setPosition(0, 0, 480, 272);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(54, 54, 54));

    button1.setXY(0, 106);
    button1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    button1.setAction(buttonCallback);

    button2.setXY(420, 106);
    button2.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    button2.setAction(buttonCallback);

    image1.setXY(167, 63);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_DG_SYN_ID));

    textureMapper1.setXY(150, 46);
    textureMapper1.setBitmap(touchgfx::Bitmap(BITMAP_DG_SYN_1_ID));
    textureMapper1.setWidth(180);
    textureMapper1.setHeight(180);
    textureMapper1.setBitmapPosition(32.000f, 32.000f);
    textureMapper1.setScale(1.000f);
    textureMapper1.setCameraDistance(1000.000f);
    textureMapper1.setOrigo(90.000f, 90.000f, 1000.000f);
    textureMapper1.setCamera(90.000f, 90.000f);
    textureMapper1.updateAngles(0.000f, 0.000f, 0.000f);
    textureMapper1.setRenderingAlgorithm(touchgfx::TextureMapper::NEAREST_NEIGHBOR);

    image2.setXY(180, 76);
    image2.setBitmap(touchgfx::Bitmap(BITMAP_DG_SYN_3_ID));

    add(box1);
    add(button1);
    add(button2);
    add(image1);
    add(textureMapper1);
    add(image2);
}

void direccionViewBase::setupScreen()
{

}

void direccionViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &button1)
    {
        //Interaction1
        //When button1 clicked change screen to anemometro
        //Go to anemometro with screen transition towards West
        application().gotoanemometroScreenSlideTransitionWest();
    }
    else if (&src == &button2)
    {
        //Interaction2
        //When button2 clicked change screen to actitud
        //Go to actitud with screen transition towards East
        application().gotoactitudScreenSlideTransitionEast();
    }
}
