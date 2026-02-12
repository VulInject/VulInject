static void
mac_srs_ring_free(mac_soft_ring_set_t *mac_srs)
{
mac_client_impl_t	*mcip;
mac_ring_t		*ring;
flow_entry_t		*flent;

ring = mac_srs->srs_ring;
if (mac_srs->srs_type & SRST_TX) {
ASSERT(ring == NULL);
return;
}

if (ring == NULL)
return;


flent = mac_srs->srs_flent;
mcip = flent->fe_mcip;
ASSERT(mcip != NULL);

ring->mr_classify_type = MAC_NO_CLASSIFIER;
ring->mr_srs = NULL;
}