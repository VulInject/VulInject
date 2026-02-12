dev_info_t *
mdi_phci_path2devinfo(dev_info_t *vdip, caddr_t pathname)
{
char		*temp_pathname;
mdi_vhci_t	*vh;
mdi_phci_t	*ph;
dev_info_t 	*pdip = NULL;

vh = i_devi_get_vhci(vdip);
ASSERT(vh != NULL);

if (vh == NULL) {

return (NULL);
}

temp_pathname = kmem_zalloc(MAXPATHLEN, KM_SLEEP);
MDI_VHCI_PHCI_LOCK(vh);
ph = vh->vh_phci_head;
while (ph != NULL) {
pdip = ph->ph_dip;
ASSERT(pdip != NULL);
*temp_pathname = '\0';
(void) ddi_pathname(pdip, temp_pathname);
if (strcmp(temp_pathname, pathname) == 0) {
break;
}
ph = ph->ph_next;
}
if (ph == NULL) {
pdip = NULL;
}
MDI_VHCI_PHCI_UNLOCK(vh);
kmem_free(temp_pathname, MAXPATHLEN);
return (pdip);
}