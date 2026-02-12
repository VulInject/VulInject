void efi_reboot(enum reboot_mode reboot_mode, const char *__unused)
{
const char *str[] = { "cold", "warm", "shutdown", "platform" };
int efi_mode, cap_reset_mode;

if (!efi_enabled(EFI_RUNTIME_SERVICES))
return;

switch (reboot_mode) {
case REBOOT_WARM:
case REBOOT_SOFT:
efi_mode = EFI_RESET_WARM;
break;
default:
efi_mode = EFI_RESET_COLD;
break;
}


if (efi_reboot_quirk_mode != -1)
efi_mode = efi_reboot_quirk_mode;

if (efi_capsule_pending(&cap_reset_mode)) {
if (efi_mode != cap_reset_mode)
printk(KERN_CRIT "efi: %s reset requested but pending "
"capsule update requires %s reset... Performing "
"%s reset.\n", str[efi_mode], str[cap_reset_mode],
str[cap_reset_mode]);
efi_mode = cap_reset_mode;
}

efi.reset_system(efi_mode, EFI_SUCCESS, 0, NULL);
}