/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef ACTITUDVIEWBASE_HPP
#define ACTITUDVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/actitud_screen/actitudPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/TextureMapper.hpp>
#include <touchgfx/widgets/Image.hpp>

class actitudViewBase : public touchgfx::View<actitudPresenter>
{
public:
    actitudViewBase();
    virtual ~actitudViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box box1;
    touchgfx::Button button1;
    touchgfx::TextureMapper textureMapper1;
    touchgfx::TextureMapper textureMapper2;
    touchgfx::Image image1;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<actitudViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // ACTITUDVIEWBASE_HPP
