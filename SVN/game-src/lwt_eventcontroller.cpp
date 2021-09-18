/**************************
* Author: Larry Watterson * 
***************************/
#include "stdafx.h"
#ifdef ENABLE_EVENT_CONTROLLER
#include "lwt_eventcontroller.h"
#include "questmanager.h"

std::map<const char*, std::pair<DWORD, BYTE> > emng_info = {
    { "ayisigi_event" , { 19, 100 } },
};


bool CEventController::CheckCurrentlyEventItem(DWORD &itemVnum, BYTE &chance)
{
    for (const auto& it : emng_info)
    {
        if (quest::CQuestManager::instance().GetEventFlag(it.first) == 1)
        {
            itemVnum = it.second.first;
            chance = it.second.second;
            return true;
        }
    }
    return false;
}
#endif