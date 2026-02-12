void
sr_hotplug_unregister(struct sr_discipline *sd, void *func)
{
struct sr_hotplug_list	*mhe;

DNPRINTF(SR_D_MISC, "%s: sr_hotplug_unregister: %s %p\n",
DEVNAME(sd->sd_sc), sd->sd_meta->ssd_devname, func);


SLIST_FOREACH(mhe, &sr_hotplug_callbacks, shl_link) {
if (mhe->sh_hotplug == func)
break;
}
if (mhe != NULL) {
SLIST_REMOVE(&sr_hotplug_callbacks, mhe,
sr_hotplug_list, shl_link);
free(mhe, M_DEVBUF, sizeof(*mhe));
}
}