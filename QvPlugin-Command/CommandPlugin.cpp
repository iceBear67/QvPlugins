#include "CommandPlugin.hpp"

#include "ui/CommandPluginSettings.hpp"
#include "ui/GUIInterface.hpp"

bool CommandPlugin::InitializePlugin(const QString &, const QJsonObject &conf)
{
    settings = conf;
    CommandPluginInstance = this;
    eventHandler = std::make_shared<SimpleEventHandler>();
    guiInterface = new CommandGUIInterface();
    return true;
}