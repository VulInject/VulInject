void
vgen_destroy_tx_dring(vgen_ldc_t *ldcp)
{
int 			i;
int			tbufsize = sizeof (vgen_private_desc_t);
vgen_private_desc_t	*tbufp = ldcp->tbufp;


if (ldcp->tx_dring_ncookies != 0) {
(void) ldc_mem_dring_unbind(ldcp->tx_dring_handle);
ldcp->tx_dring_ncookies = 0;
}


if (ldcp->tbufp != NULL) {

for (i = 0; i < ldcp->num_txds; i++) {

tbufp = &(ldcp->tbufp[i]);

if (tbufp->datap) { 
(void) ldc_mem_unbind_handle(tbufp->memhandle);
tbufp->datap = NULL;
}
if (tbufp->memhandle) {
(void) ldc_mem_free_handle(tbufp->memhandle);
tbufp->memhandle = 0;
}
}
}


if (ldcp->tx_datap != NULL) {
kmem_free(ldcp->tx_datap, ldcp->tx_data_sz);
ldcp->tx_datap = NULL;
ldcp->tx_data_sz = 0;
}


if (ldcp->tx_dring_handle != 0) {
(void) ldc_mem_dring_destroy(ldcp->tx_dring_handle);
ldcp->tx_dring_handle = 0;
ldcp->txdp = NULL;
}


if (ldcp->tbufp != NULL) {
kmem_free(ldcp->tbufp, ldcp->num_txds * tbufsize);
ldcp->tbufp = ldcp->tbufendp = NULL;
}
}