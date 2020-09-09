#ifndef ANEMOMETROPRESENTER_HPP
#define ANEMOMETROPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class anemometroView;

class anemometroPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    anemometroPresenter(anemometroView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~anemometroPresenter() {};

    void updateWidget();

private:
    anemometroPresenter();

    anemometroView& view;
};


#endif // ANEMOMETROPRESENTER_HPP
