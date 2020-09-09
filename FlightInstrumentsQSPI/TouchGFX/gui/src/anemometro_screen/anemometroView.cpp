#include <gui/anemometro_screen/anemometroView.hpp>

anemometroView::anemometroView()
{

}

void anemometroView::setupScreen()
{
    anemometroViewBase::setupScreen();
}

void anemometroView::tearDownScreen()
{
    anemometroViewBase::tearDownScreen();
}

void anemometroView::updateGauge(float degree)
{
	anemometroViewBase::gauge1.setValue((int)degree);
	anemometroViewBase::gauge1.handleTickEvent();
}
