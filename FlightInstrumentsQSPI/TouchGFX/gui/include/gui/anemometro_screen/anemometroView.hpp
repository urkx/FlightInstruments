#ifndef ANEMOMETROVIEW_HPP
#define ANEMOMETROVIEW_HPP

#include <gui_generated/anemometro_screen/anemometroViewBase.hpp>
#include <gui/anemometro_screen/anemometroPresenter.hpp>

class anemometroView : public anemometroViewBase
{
public:
    anemometroView();
    virtual ~anemometroView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void updateGauge(float wind);
protected:
};

#endif // ANEMOMETROVIEW_HPP
