#include <gui/direccion_screen/direccionView.hpp>

direccionView::direccionView()
{

}

void direccionView::setupScreen()
{
    direccionViewBase::setupScreen();
}

void direccionView::tearDownScreen()
{
    direccionViewBase::tearDownScreen();
}

void direccionView::updateIndicador(float degree)
{
	direccionViewBase::textureMapper1.updateZAngle(((-1.0f)*degree * 3.14f)/180.0f);
	direccionViewBase::textureMapper1.handleTickEvent();
}
