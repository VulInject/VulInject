static int arizona_hpdet_wait(struct arizona_extcon_info *info)
{
struct arizona *arizona = info->arizona;
unsigned int val;
int i, ret;

for (i = 0; i < ARIZONA_HPDET_WAIT_COUNT; i++) {
ret = regmap_read(arizona->regmap, ARIZONA_HEADPHONE_DETECT_2,
&val);
if (ret) {
dev_err(arizona->dev,
"Failed to read HPDET state: %d\n", ret);
return ret;
}

switch (info->hpdet_ip_version) {
case 0:
if (val & ARIZONA_HP_DONE)
return 0;
break;
default:
if (val & ARIZONA_HP_DONE_B)
return 0;
break;
}

msleep(ARIZONA_HPDET_WAIT_DELAY_MS);
}

dev_warn(arizona->dev, "HPDET did not appear to complete\n");

return -ETIMEDOUT;
}