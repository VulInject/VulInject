int ef4_mdio_test_alive(struct ef4_nic *efx)
{
int rc;
int devad = __ffs(efx->mdio.mmds);
u16 physid1, physid2;

mutex_lock(&efx->mac_lock);

physid1 = ef4_mdio_read(efx, devad, MDIO_DEVID1);
physid2 = ef4_mdio_read(efx, devad, MDIO_DEVID2);

if ((physid1 == 0x0000) || (physid1 == 0xffff) ||
(physid2 == 0x0000) || (physid2 == 0xffff)) {
netif_err(efx, hw, efx->net_dev,
"no MDIO PHY present with ID %d\n", efx->mdio.prtad);
rc = -EINVAL;
} else {
rc = ef4_mdio_check_mmds(efx, efx->mdio.mmds);
}

mutex_unlock(&efx->mac_lock);
return rc;
}