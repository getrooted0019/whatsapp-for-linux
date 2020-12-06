#pragma once

#include <gtkmm/application.h>

class Application
    : public Gtk::Application
{
    public:
        static Application& instance();

    public:
        Application(int argc, char** argv, Glib::ustring const& id);
        ~Application() override = default;

    public:
        void keepAlive();
        void endKeepAlive();

    private:
        static Application* m_instance;
        bool                m_onHold;
};
