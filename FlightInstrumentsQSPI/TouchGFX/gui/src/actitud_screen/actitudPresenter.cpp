#include <gui/actitud_screen/actitudView.hpp>
#include <gui/actitud_screen/actitudPresenter.hpp>

actitudPresenter::actitudPresenter(actitudView& v)
    : view(v)
{
}

void actitudPresenter::activate()
{

}

void actitudPresenter::deactivate()
{

}

void actitudPresenter::updateWidget(){
	view.updateHorizonte(model->getPitch(), model->getRoll());
}
