
MODULE_DEVICE_TABLE(pci, snd_cs5535audio_ids);

static void wait_till_cmd_acked(struct cs5535audio *cs5535au, unsigned long timeout)
{
unsigned int tmp;
do {
tmp = cs_readl(cs5535au, ACC_CODEC_CNTL);
if (!(tmp & CMD_NEW))
break;
udelay(1);
} while (--timeout);
if (!timeout)
dev_err(cs5535au->card->dev,
"Failure writing to cs5535 codec\n");
}