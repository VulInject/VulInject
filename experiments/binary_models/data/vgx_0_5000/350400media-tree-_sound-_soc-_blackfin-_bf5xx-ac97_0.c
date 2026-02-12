static unsigned short bf5xx_ac97_read(struct snd_ac97 *ac97,
unsigned short reg)
{
struct sport_device *sport_handle = ac97_sport_handle;
struct ac97_frame out_frame[2], in_frame[2];

pr_debug("%s enter 0x%x\n", __func__, reg);


if (sport_handle->tx_run || sport_handle->rx_run) {
pr_err("Could you send a mail to cliff.cai@analog.com "
"to report this?\n");
return -EFAULT;
}

memset(&out_frame, 0, 2 * sizeof(struct ac97_frame));
memset(&in_frame, 0, 2 * sizeof(struct ac97_frame));
out_frame[0].ac97_tag = TAG_VALID | TAG_CMD;
out_frame[0].ac97_addr = ((reg << 8) | 0x8000);
sport_send_and_recv(sport_handle, (unsigned char *)&out_frame,
(unsigned char *)&in_frame,
2 * sizeof(struct ac97_frame));
return in_frame[1].ac97_data;
}