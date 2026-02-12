s32 ixgbe_init_eeprom_params_X550(struct ixgbe_hw *hw)
{
struct ixgbe_eeprom_info *eeprom = &hw->eeprom;
u32 eec;
u16 eeprom_size;

DEBUGFUNC("ixgbe_init_eeprom_params_X550");

if (eeprom->type == ixgbe_eeprom_uninitialized) {
eeprom->semaphore_delay = 10;
eeprom->type = ixgbe_flash;

eec = IXGBE_READ_REG(hw, IXGBE_EEC);
eeprom_size = (u16)((eec & IXGBE_EEC_SIZE) >>
IXGBE_EEC_SIZE_SHIFT);
eeprom->word_size = 1 << (eeprom_size +
IXGBE_EEPROM_WORD_SIZE_SHIFT);

DEBUGOUT2("Eeprom params: type = %d, size = %d\n",
eeprom->type, eeprom->word_size);
}

return IXGBE_SUCCESS;
}