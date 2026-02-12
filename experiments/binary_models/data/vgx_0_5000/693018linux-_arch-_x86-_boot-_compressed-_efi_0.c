enum efi_type efi_get_type(struct boot_params *bp)
{
struct efi_info *ei;
enum efi_type et;
const char *sig;

ei = &bp->efi_info;
sig = (char *)&ei->efi_loader_signature;

if (!strncmp(sig, EFI64_LOADER_SIGNATURE, 4)) {
et = EFI_TYPE_64;
} else if (!strncmp(sig, EFI32_LOADER_SIGNATURE, 4)) {
et = EFI_TYPE_32;
} else {
debug_putstr("No EFI environment detected.\n");
et = EFI_TYPE_NONE;
}


if (ei->efi_systab_hi || ei->efi_memmap_hi) {
debug_putstr("EFI system table is located above 4GB and cannot be accessed.\n");
et = EFI_TYPE_NONE;
}

return et;
}