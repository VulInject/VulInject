int enable_card_clock(struct rtsx_chip *chip, u8 card)
{
int retval;
u8 clk_en = 0;

if (card & XD_CARD)
clk_en |= XD_CLK_EN;
if (card & SD_CARD)
clk_en |= SD_CLK_EN;
if (card & MS_CARD)
clk_en |= MS_CLK_EN;

retval = rtsx_write_register(chip, CARD_CLK_EN, clk_en, clk_en);
if (retval) {
rtsx_trace(chip);
return retval;
}

return STATUS_SUCCESS;
}