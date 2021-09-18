#pragma once
class CEventController : public singleton<CEventController>
{
    public:
        bool CheckCurrentlyEventItem(DWORD &itemVnum, BYTE &chance);
};