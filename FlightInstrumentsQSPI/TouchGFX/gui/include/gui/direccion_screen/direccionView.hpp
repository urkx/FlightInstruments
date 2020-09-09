#ifndef DIRECCIONVIEW_HPP
#define DIRECCIONVIEW_HPP

#include <gui_generated/direccion_screen/direccionViewBase.hpp>
#include <gui/direccion_screen/direccionPresenter.hpp>

class direccionView : public direccionViewBase
{
public:
    direccionView();
    virtual ~direccionView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void updateIndicador(float degree);
protected:
};

#endif // DIRECCIONVIEW_HPP
