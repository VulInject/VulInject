static int
ics951601_resume(dev_info_t *dip)
{
int		instance = ddi_get_instance(dip);
ics951601_unit_t	*icsp;
int		err = DDI_SUCCESS;

icsp = (ics951601_unit_t *)
ddi_get_soft_state(ics951601_soft_statep, instance);

if (icsp == NULL) {
return (ENXIO);
}


icsp->ics951601_transfer->i2c_flags = I2C_WR;
icsp->ics951601_transfer->i2c_rlen = 0;
icsp->ics951601_transfer->i2c_wlen = ICS951601_I2C_WRITE_TRANS_SIZE;

icsp->ics951601_transfer->i2c_wbuf = icsp->ics951601_cpr_state;

if (i2c_transfer(icsp->ics951601_hdl, icsp->ics951601_transfer)
!= I2C_SUCCESS) {
err = EIO;
cmn_err(CE_WARN, " %s Unable to restore registers",
icsp->ics951601_name);
}


mutex_enter(&icsp->ics951601_mutex);
icsp->ics951601_flags = icsp->ics951601_flags & ~ICS951601_BUSYFLAG;
cv_signal(&icsp->ics951601_cv);
mutex_exit(&icsp->ics951601_mutex);
return (err);
}