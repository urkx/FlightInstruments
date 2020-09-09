#ifndef DIRECCIONPRESENTER_HPP
#define DIRECCIONPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class direccionView;

class direccionPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    direccionPresenter(direccionView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();
    void updateWidget();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~direccionPresenter() {};

private:
    direccionPresenter();

    direccionView& view;
};


#endif // DIRECCIONPRESENTER_HPP
