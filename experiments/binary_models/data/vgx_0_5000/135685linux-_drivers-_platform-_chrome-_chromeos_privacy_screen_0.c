static int
chromeos_privacy_screen_set_sw_state(struct drm_privacy_screen
*drm_privacy_screen,
enum drm_privacy_screen_status state)
{
union acpi_object *obj = NULL;
acpi_handle handle;
struct device *privacy_screen =
drm_privacy_screen_get_drvdata(drm_privacy_screen);

handle = acpi_device_handle(to_acpi_device(privacy_screen));

if (state == PRIVACY_SCREEN_DISABLED) {
obj = acpi_evaluate_dsm(handle,
&chromeos_privacy_screen_dsm_guid,
PRIV_SCRN_DSM_REVID,
PRIV_SCRN_DSM_FN_DISABLE, NULL);
} else if (state == PRIVACY_SCREEN_ENABLED) {
obj = acpi_evaluate_dsm(handle,
&chromeos_privacy_screen_dsm_guid,
PRIV_SCRN_DSM_REVID,
PRIV_SCRN_DSM_FN_ENABLE, NULL);
} else {
dev_err(privacy_screen,
"Bad attempt to set privacy-screen status to %u\n",
state);
return -EINVAL;
}

if (!obj) {
dev_err(privacy_screen,
"_DSM failed to set privacy-screen state\n");
return -EIO;
}

drm_privacy_screen->hw_state = drm_privacy_screen->sw_state = state;
ACPI_FREE(obj);
return 0;
}