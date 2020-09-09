#include <gui/direccion_screen/direccionView.hpp>
#include <gui/direccion_screen/direccionPresenter.hpp>

direccionPresenter::direccionPresenter(direccionView& v)
    : view(v)
{
}

void direccionPresenter::activate()
{

}

void direccionPresenter::deactivate()
{

}

void direccionPresenter::updateWidget()
{
	view.updateIndicador(model->getDegree());
}
