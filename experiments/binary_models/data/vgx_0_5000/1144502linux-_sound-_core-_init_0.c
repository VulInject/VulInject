int snd_devm_card_new(struct device *parent, int idx, const char *xid,
struct module *module, size_t extra_size,
struct snd_card **card_ret)
{
struct snd_card *card;
int err;

*card_ret = NULL;
card = devres_alloc(__snd_card_release, sizeof(*card) + extra_size,
GFP_KERNEL);
if (!card)
return -ENOMEM;
card->managed = true;
err = snd_card_init(card, parent, idx, xid, module, extra_size);
if (err < 0) {
devres_free(card); 
return err;
}

devres_add(parent, card);
*card_ret = card;
return 0;
}