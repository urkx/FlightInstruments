#ifndef ACTITUDVIEW_HPP
#define ACTITUDVIEW_HPP

#include <gui_generated/actitud_screen/actitudViewBase.hpp>
#include <gui/actitud_screen/actitudPresenter.hpp>

class actitudView : public actitudViewBase
{
public:
    actitudView();
    virtual ~actitudView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void updateHorizonte(float pitch, float roll);
protected:
};

#endif // ACTITUDVIEW_HPP
