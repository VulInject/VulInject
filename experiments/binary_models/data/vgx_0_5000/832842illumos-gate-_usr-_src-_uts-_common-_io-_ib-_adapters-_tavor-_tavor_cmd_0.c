static void
tavor_impl_mboxlist_fini(tavor_state_t *state, tavor_mboxlist_t *mblist)
{
tavor_rsrc_t	*rsrc;
int		i, status;


for (i = 0; i < mblist->mbl_num_alloc; i++) {
rsrc = mblist->mbl_mbox[i].mb_rsrcptr;


status = ddi_dma_unbind_handle(rsrc->tr_dmahdl);
if (status != DDI_SUCCESS) {
TAVOR_WARNING(state, "failed to unbind DMA mapping");
return;
}


tavor_rsrc_free(state, &rsrc);
}


mutex_destroy(&mblist->mbl_lock);
cv_destroy(&mblist->mbl_cv);


kmem_free(mblist->mbl_mbox, mblist->mbl_list_sz *
sizeof (tavor_mbox_t));
}