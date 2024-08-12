VAR1 FUN1(u32 VAR2)
{
efi_status_t VAR3;
struct VAR4 *VAR5;
u32 VAR6 = FUN2(VAR2);
efi_guid_t VAR7 = VAR8;


VAR3 = FUN3(VAR9, VAR6,
(void **)&VAR5);

if (VAR3 != VAR10) {
FUN4("",
VAR2, VAR6);

return VAR3;
}

VAR5->VAR11 = VAR2;
VAR5->VAR12 = 0;
VAR5->VAR13 = VAR14;


VAR3 = FUN5(&VAR7, (void *)VAR5);
if (VAR3 != VAR10) {
FUN4("");
return VAR3;
}


if (VAR15)
VAR3 = FUN6(VAR15);

VAR15 = VAR5;

return VAR10;
}