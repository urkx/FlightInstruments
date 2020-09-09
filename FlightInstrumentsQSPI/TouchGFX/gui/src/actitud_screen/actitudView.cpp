#include <gui/actitud_screen/actitudView.hpp>

actitudView::actitudView()
{

}

void actitudView::setupScreen()
{
    actitudViewBase::setupScreen();
}

void actitudView::tearDownScreen()
{
    actitudViewBase::tearDownScreen();
}

void actitudView::updateHorizonte(float pitch, float roll)
{
	if(roll <= 90.0f && roll >= -90.0f)
		{
			actitudViewBase::textureMapper2.updateZAngle(roll * (-1.0f) * (3.14f / 180.0f));
			actitudViewBase::textureMapper1.updateZAngle(roll * (-1.0f) * (3.14f / 180.0f));
		}
		if(pitch <= 20.0f && pitch >= -20.0f )
		{
			actitudViewBase::textureMapper1.setBitmapPosition(actitudViewBase::textureMapper1.getBitmapPositionX(), (-62.000f +((pitch*11.000f)/10.000f)) );
		}
		actitudViewBase::textureMapper2.handleTickEvent();
		actitudViewBase::textureMapper1.handleTickEvent();
}
