// add includes
#ifdef ENABLE_EVENT_CONTROLLER
	#include "lwt_eventcontroller.h"
#endif

// find

+ CreateQuestDropItem(pkChr, pkKiller, vec_item, iDeltaPercent, iRandRange);

// add

#ifdef ENABLE_EVENT_CONTROLLER
	{
		DWORD itemVnum = 0; BYTE chance = 0;
		BYTE random = number(1, 100);

		if (pkChr->IsMonster() && pkKiller)
		{
			if (CEventController::instance().CheckCurrentlyEventItem(itemVnum, chance))
			{
				if (random <= chance)
				{
					if ((item = CreateItem(itemVnum, 1, 0, true)))
						vec_item.push_back(item);
				}
			}
		}
	}
#endif

