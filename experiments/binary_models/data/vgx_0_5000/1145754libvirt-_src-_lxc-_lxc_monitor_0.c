static void virLXCMonitorEOFNotify(virNetClient *client G_GNUC_UNUSED,
int reason G_GNUC_UNUSED,
void *opaque)
{
virLXCMonitor *mon = opaque;
virLXCMonitorCallbackEOFNotify eofNotify;
virDomainObj *vm;

VIR_DEBUG("EOF notify mon=%p", mon);
virObjectLock(mon);
eofNotify = mon->cb.eofNotify;
vm = mon->vm;
virObjectUnlock(mon);

if (eofNotify) {
VIR_DEBUG("EOF callback mon=%p vm=%p", mon, vm);
eofNotify(mon, vm);
} else {
VIR_DEBUG("No EOF callback");
}
}