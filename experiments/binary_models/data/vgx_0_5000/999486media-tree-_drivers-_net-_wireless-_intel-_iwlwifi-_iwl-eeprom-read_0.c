







static int iwl_eeprom_acquire_semaphore(struct iwl_trans *trans)
{
u16 count;
int ret;

for (count = 0; count < EEPROM_SEM_RETRY_LIMIT; count++) {

iwl_set_bit(trans, CSR_HW_IF_CONFIG_REG,
CSR_HW_IF_CONFIG_REG_BIT_EEPROM_OWN_SEM);


ret = iwl_poll_bit(trans, CSR_HW_IF_CONFIG_REG,
CSR_HW_IF_CONFIG_REG_BIT_EEPROM_OWN_SEM,
CSR_HW_IF_CONFIG_REG_BIT_EEPROM_OWN_SEM,
EEPROM_SEM_TIMEOUT);
if (ret >= 0) {
IWL_DEBUG_EEPROM(trans->dev,
"Acquired semaphore after %d tries.\n",
count+1);
return ret;
}
}

return ret;
}