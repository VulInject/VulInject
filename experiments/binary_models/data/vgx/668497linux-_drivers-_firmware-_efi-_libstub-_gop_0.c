static VAR1 *
FUN1(VAR2 *VAR3, unsigned long VAR4, void **VAR5)
{
VAR1 *VAR6;
efi_handle_t VAR7;
int VAR8;

VAR6 = NULL;

FUN2(VAR7, VAR5, VAR4, VAR8) {
efi_status_t VAR9;

VAR1 *VAR10;
VAR11 *VAR12;
VAR13 *VAR14;

efi_guid_t VAR15 = VAR16;
void *VAR17 = NULL;

VAR9 = FUN3(VAR18, VAR7, VAR3, (void **)&VAR10);
if (VAR9 != VAR19)
continue;

VAR12 = FUN4(VAR10, VAR12);
VAR14 = FUN4(VAR12, VAR14);
if (VAR14->VAR20 == VAR21 ||
VAR14->VAR20 >= VAR22)
continue;


VAR9 = FUN3(VAR18, VAR7, &VAR15, &VAR17);
if (VAR9 == VAR19)
return VAR10;

if (!VAR6)
VAR6 = VAR10;
}

return VAR6;
}