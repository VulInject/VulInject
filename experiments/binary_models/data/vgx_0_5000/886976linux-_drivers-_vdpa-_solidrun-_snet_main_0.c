static int snet_build_vqs(struct snet *snet)
{
u32 i;

snet->vqs = kcalloc(snet->cfg->vq_num, sizeof(void *), GFP_KERNEL);
if (!snet->vqs)
return -ENOMEM;


for (i = 0; i < snet->cfg->vq_num; i++) {
snet->vqs[i] = kzalloc(sizeof(*snet->vqs[i]), GFP_KERNEL);
if (!snet->vqs[i]) {
snet_free_vqs(snet);
return -ENOMEM;
}

snet->vqs[i]->irq = -1;

snet->vqs[i]->sid = i;

snet->vqs[i]->kick_ptr = snet->bar + snet->psnet->cfg.kick_off +
snet->vqs[i]->sid * 4;

iowrite32(0, snet->vqs[i]->kick_ptr);
}
return 0;
}