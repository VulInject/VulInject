static void FUN1(struct VAR1 *VAR1)
{
efi_guid_t VAR2 = VAR3;
struct VAR4 *VAR5;
efi_guid_t VAR6 = VAR7;
efi_status_t VAR8;
unsigned long VAR9;
void **VAR10 = NULL;
void **VAR11 = NULL;

VAR5 = &VAR1->VAR4;
memset(VAR5, 0, sizeof(*VAR5));

VAR9 = 0;
VAR8 = FUN2(VAR12, VAR13,
&VAR2, NULL, &VAR9, VAR10);
if (VAR8 == VAR14)
VAR8 = FUN3(VAR5, &VAR2, VAR9);

if (VAR8 != VAR15) {
VAR9 = 0;
VAR8 = FUN2(VAR12, VAR13,
&VAR6, NULL, &VAR9, VAR11);
if (VAR8 == VAR14)
FUN4(VAR5, &VAR6, VAR9);
}
}