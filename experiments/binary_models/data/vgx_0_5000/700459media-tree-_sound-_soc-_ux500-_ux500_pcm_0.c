int ux500_pcm_register_platform(struct platform_device *pdev)
{
const struct snd_dmaengine_pcm_config *pcm_config;
struct device_node *np = pdev->dev.of_node;
int ret;

if (np)
pcm_config = &ux500_dmaengine_of_pcm_config;
else
pcm_config = &ux500_dmaengine_pcm_config;

ret = snd_dmaengine_pcm_register(&pdev->dev, pcm_config,
SND_DMAENGINE_PCM_FLAG_COMPAT);
if (ret < 0) {
dev_err(&pdev->dev,
"%s: ERROR: Failed to register platform '%s' (%d)!\n",
__func__, pdev->name, ret);
return ret;
}

return 0;
}