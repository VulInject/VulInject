int card_power_off(struct rtsx_chip *chip, u8 card)
{
int retval;
u8 mask, val;

if (CHECK_LUN_MODE(chip, SD_MS_2LUN) && (card == MS_CARD)) {
mask = MS_POWER_MASK;
val = MS_POWER_OFF;
} else {
mask = SD_POWER_MASK;
val = SD_POWER_OFF;
}

retval = rtsx_write_register(chip, CARD_PWR_CTL, mask, val);
if (retval) {
rtsx_trace(chip);
return retval;
}

return STATUS_SUCCESS;
}