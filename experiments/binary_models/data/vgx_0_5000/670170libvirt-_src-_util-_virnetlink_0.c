int
virNetlinkEventAddClient(virNetlinkEventHandleCallback handleCB,
virNetlinkEventRemoveCallback removeCB,
void *opaque, const virMacAddr *macaddr,
unsigned int protocol)
{
size_t i;
int r = -1;
int ret = -1;
virNetlinkEventSrvPrivate *srv = NULL;

if (protocol >= MAX_LINKS)
return -EINVAL;

srv = server[protocol];

if (handleCB == NULL) {
virReportError(VIR_ERR_INTERNAL_ERROR, "%s",
_("Invalid NULL callback provided"));
return -1;
}

VIR_WITH_MUTEX_LOCK_GUARD(&srv->lock) {
VIR_DEBUG("adding client: %d.", nextWatch);


for (i = 0; i < srv->handlesCount; i++) {
if (srv->handles[i].deleted == VIR_NETLINK_HANDLE_DELETED) {
r = i;
break;
}
}

if (r < 0) {

if (srv->handlesCount == srv->handlesAlloc) {
VIR_DEBUG("Used %zu handle slots, adding at least %d more",
srv->handlesAlloc, NETLINK_EVENT_ALLOC_EXTENT);
VIR_RESIZE_N(srv->handles, srv->handlesAlloc,
srv->handlesCount, NETLINK_EVENT_ALLOC_EXTENT);
}
r = srv->handlesCount++;
}

srv->handles[r].watch    = nextWatch;
srv->handles[r].handleCB = handleCB;
srv->handles[r].removeCB = removeCB;
srv->handles[r].opaque   = opaque;
srv->handles[r].deleted  = VIR_NETLINK_HANDLE_VALID;
if (macaddr)
virMacAddrSet(&srv->handles[r].macaddr, macaddr);
else
virMacAddrSetRaw(&srv->handles[r].macaddr,
(unsigned char[VIR_MAC_BUFLEN]){0, 0, 0, 0, 0, 0});

ret = nextWatch++;

VIR_DEBUG("added client to loop slot: %d. with macaddr ptr=%p", r, macaddr);
}

return ret;
}