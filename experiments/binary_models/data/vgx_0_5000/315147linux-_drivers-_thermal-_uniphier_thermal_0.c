static void uniphier_tm_enable_sensor(struct uniphier_tm_dev *tdev)
{
struct regmap *map = tdev->regmap;
int i;
u32 bits = 0;

for (i = 0; i < ALERT_CH_NUM; i++)
if (tdev->alert_en[i])
bits |= PMALERTINTCTL_EN(i);


regmap_write_bits(map, tdev->data->map_base + PMALERTINTCTL,
PMALERTINTCTL_MASK, bits);


regmap_write_bits(map, tdev->data->block_base + PVTCTLEN,
PVTCTLEN_EN, PVTCTLEN_EN);

usleep_range(700, 1500);	
}