static int fsl_asrc_request_pair(int channels, struct fsl_asrc_pair *pair)
{
enum asrc_pair_index index = ASRC_INVALID_PAIR;
struct fsl_asrc *asrc = pair->asrc;
struct device *dev = &asrc->pdev->dev;
unsigned long lock_flags;
int i, ret = 0;

spin_lock_irqsave(&asrc->lock, lock_flags);

for (i = ASRC_PAIR_A; i < ASRC_PAIR_MAX_NUM; i++) {
if (asrc->pair[i] != NULL)
continue;

index = i;

if (i != ASRC_PAIR_B)
break;
}

if (index == ASRC_INVALID_PAIR) {
dev_err(dev, "all pairs are busy now\n");
ret = -EBUSY;
} else if (asrc->channel_avail < channels) {
dev_err(dev, "can't afford required channels: %d\n", channels);
ret = -EINVAL;
} else {
asrc->channel_avail -= channels;
asrc->pair[index] = pair;
pair->channels = channels;
pair->index = index;
}

spin_unlock_irqrestore(&asrc->lock, lock_flags);

return ret;
}