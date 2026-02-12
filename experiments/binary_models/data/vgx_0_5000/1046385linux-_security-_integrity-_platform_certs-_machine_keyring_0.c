}
device_initcall(machine_keyring_init);

void __init add_to_machine_keyring(const char *source, const void *data, size_t len)
{
key_perm_t perm;
int rc;

perm = (KEY_POS_ALL & ~KEY_POS_SETATTR) | KEY_USR_VIEW;
rc = integrity_load_cert(INTEGRITY_KEYRING_MACHINE, source, data, len, perm);


if (rc && IS_ENABLED(CONFIG_INTEGRITY_PLATFORM_KEYRING))
rc = integrity_load_cert(INTEGRITY_KEYRING_PLATFORM, source,
data, len, perm);

if (rc)
pr_info("Error adding keys to machine keyring %s\n", source);
}