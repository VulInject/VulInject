void
efx_tx_fini(
__in	efx_nic_t *enp)
{
const efx_tx_ops_t *etxop = enp->en_etxop;

EFSYS_ASSERT3U(enp->en_magic, ==, EFX_NIC_MAGIC);
EFSYS_ASSERT3U(enp->en_mod_flags, &, EFX_MOD_NIC);
EFSYS_ASSERT3U(enp->en_mod_flags, &, EFX_MOD_TX);
EFSYS_ASSERT3U(enp->en_tx_qcount, ==, 0);

etxop->etxo_fini(enp);

enp->en_etxop = NULL;
enp->en_mod_flags &= ~EFX_MOD_TX;
}