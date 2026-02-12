static int rzn1_rtc_set_offset(struct device *dev, long offset)
{
struct rzn1_rtc *rtc = dev_get_drvdata(dev);
int stepsh, stepsl, steps;
u32 subu = 0, ctl2;
int ret;


stepsh = DIV_ROUND_CLOSEST(offset, 1017);
stepsl = DIV_ROUND_CLOSEST(offset, 3051);

if (stepsh >= -0x3E && stepsh <= 0x3E) {

steps = stepsh;
subu |= RZN1_RTC_SUBU_DEV;
} else if (stepsl >= -0x3E && stepsl <= 0x3E) {

steps = stepsl;
} else {
return -ERANGE;
}

if (!steps)
return 0;

if (steps > 0) {
subu |= steps + 1;
} else {
subu |= RZN1_RTC_SUBU_DECR;
subu |= (~(-steps - 1)) & 0x3F;
}

ret = readl_poll_timeout(rtc->base + RZN1_RTC_CTL2, ctl2,
!(ctl2 & RZN1_RTC_CTL2_WUST), 100, 2000000);
if (ret)
return ret;

writel(subu, rtc->base + RZN1_RTC_SUBU);

return 0;
}