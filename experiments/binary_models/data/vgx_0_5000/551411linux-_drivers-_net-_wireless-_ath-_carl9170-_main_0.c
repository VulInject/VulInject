static int carl9170_register_hwrng(struct ar9170 *ar)
{
int err;

snprintf(ar->rng.name, ARRAY_SIZE(ar->rng.name),
"%s_%s", KBUILD_MODNAME, wiphy_name(ar->hw->wiphy));
ar->rng.rng.name = ar->rng.name;
ar->rng.rng.data_read = carl9170_rng_read;
ar->rng.rng.priv = (unsigned long)ar;

err = devm_hwrng_register(&ar->udev->dev, &ar->rng.rng);
if (err) {
dev_err(&ar->udev->dev, "Failed to register the random "
"number generator (%d)\n", err);
return err;
}

return carl9170_rng_get(ar);
}