static UINT rdpei_add_contact(RdpeiClientContext* context, const RDPINPUT_CONTACT_DATA* contact)
{
RDPINPUT_CONTACT_POINT* contactPoint;
RDPEI_PLUGIN* rdpei;
if (!context || !contact || !context->handle)
return ERROR_INTERNAL_ERROR;

rdpei = (RDPEI_PLUGIN*)context->handle;

EnterCriticalSection(&rdpei->lock);
contactPoint = &rdpei->contactPoints[contact->contactId];
contactPoint->data = *contact;
contactPoint->dirty = TRUE;
SetEvent(rdpei->event);
LeaveCriticalSection(&rdpei->lock);

return CHANNEL_RC_OK;
}