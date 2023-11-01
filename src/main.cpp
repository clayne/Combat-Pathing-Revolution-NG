#include "REL/Relocation.h"
#include "SKSE/SKSE.h"
#include "LoadGame.h"
#include "DKUtil/Logger.hpp"



SKSEPluginLoad(const SKSE::LoadInterface* skse) {
#ifndef NDEBUG
    while (!IsDebuggerPresent()) {
        Sleep(100);
    }
#endif

    DKUtil::Logger::Init(name , REL::Module::get().version().string());
    //not necessary I guess,that's why commented out
    //REL::Module::reset();
    SKSE::Init(skse);

    INFO("{} v{} loaded", name, version);

    // do something
    auto g_message = SKSE::GetMessagingInterface();
    if (!g_message) {
        ERROR("Messaging Interface Not Found!");
        return false;
    }

    g_message->RegisterListener(CombatPathing::EventCallback);

    return true;
}