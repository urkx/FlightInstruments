#include <gui/anemometro_screen/anemometroView.hpp>
#include <gui/anemometro_screen/anemometroPresenter.hpp>

anemometroPresenter::anemometroPresenter(anemometroView& v)
    : view(v)
{
}

void anemometroPresenter::activate()
{

}

void anemometroPresenter::deactivate()
{

}

void anemometroPresenter::updateWidget()
{
	view.updateGauge(model->getWind());
}
