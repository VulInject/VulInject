static int FUN1(VAR1 *VAR2)
{
bool delete;
u32 VAR3;
efi_status_t VAR4;
efi_uintn_t VAR5;

delete = !VAR2 ? true : false;
VAR5 = !VAR2 ? 0 : (VAR6)sizeof(*VAR2);
VAR3 = !VAR2 ? 0 : VAR7 |
VAR8;
VAR4 = FUN2(VAR9"",
&VAR10,
VAR3,
VAR5, VAR2, false);

if ((delete && (VAR4 != VAR11 &&
VAR4 != VAR12)) ||
(!delete && VAR4 != VAR12))
return -1;

return 0;
}