static int wm8983_spi_probe(struct spi_device *spi)
{
struct wm8983_priv *wm8983;
int ret;

wm8983 = devm_kzalloc(&spi->dev, sizeof *wm8983, GFP_KERNEL);
if (!wm8983)
return -ENOMEM;

wm8983->regmap = devm_regmap_init_spi(spi, &wm8983_regmap);
if (IS_ERR(wm8983->regmap)) {
ret = PTR_ERR(wm8983->regmap);
dev_err(&spi->dev, "Failed to init regmap: %d\n", ret);
return ret;
}

spi_set_drvdata(spi, wm8983);

ret = snd_soc_register_codec(&spi->dev,
&soc_codec_dev_wm8983, &wm8983_dai, 1);
return ret;
}