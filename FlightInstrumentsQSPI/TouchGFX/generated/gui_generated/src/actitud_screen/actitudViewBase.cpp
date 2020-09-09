/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/actitud_screen/actitudViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"

actitudViewBase::actitudViewBase() :
    buttonCallback(this, &actitudViewBase::buttonCallbackHandler)
{
    box1.setPosition(0, 0, 480, 272);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(54, 54, 54));

    button1.setXY(0, 106);
    button1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));
    button1.setAction(buttonCallback);

    textureMapper1.setXY(170, 71);
    textureMapper1.setBitmap(touchgfx::Bitmap(BITMAP_HORIZON_GA_VAC_1_ID));
    textureMapper1.setWidth(140);
    textureMapper1.setHeight(132);
    textureMapper1.setBitmapPosition(6.000f, -62.000f);
    textureMapper1.setScale(1.000f);
    textureMapper1.setCameraDistance(1000.000f);
    textureMapper1.setOrigo(70.000f, 66.000f, 1000.000f);
    textureMapper1.setCamera(70.000f, 66.000f);
    textureMapper1.updateAngles(0.000f, 0.000f, 0.000f);
    textureMapper1.setRenderingAlgorithm(touchgfx::TextureMapper::NEAREST_NEIGHBOR);

    textureMapper2.setXY(150, 46);
    textureMapper2.setBitmap(touchgfx::Bitmap(BITMAP_HORIZON_GA_VAC_3_ID));
    textureMapper2.setWidth(180);
    textureMapper2.setHeight(180);
    textureMapper2.setBitmapPosition(22.000f, 22.000f);
    textureMapper2.setScale(1.000f);
    textureMapper2.setCameraDistance(1000.000f);
    textureMapper2.setOrigo(90.000f, 90.000f, 1000.000f);
    textureMapper2.setCamera(90.000f, 90.000f);
    textureMapper2.updateAngles(0.000f, 0.000f, 0.000f);
    textureMapper2.setRenderingAlgorithm(touchgfx::TextureMapper::NEAREST_NEIGHBOR);

    image1.setXY(156, 53);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_HORIZON_GA_VAC_4_ID));

    add(box1);
    add(button1);
    add(textureMapper1);
    add(textureMapper2);
    add(image1);
}

void actitudViewBase::setupScreen()
{

}

void actitudViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &button1)
    {
        //Interaction1
        //When button1 clicked change screen to direccion
        //Go to direccion with screen transition towards West
        application().gotodireccionScreenSlideTransitionWest();
    }
}
