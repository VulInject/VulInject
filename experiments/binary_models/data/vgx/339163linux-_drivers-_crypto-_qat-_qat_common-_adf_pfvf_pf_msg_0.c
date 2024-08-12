int FUN1(struct VAR1 *VAR2,
VAR3 *VAR4, u8 VAR5)
{
struct VAR6 *VAR7 = VAR2->VAR8;
struct capabilities_v2 VAR9;

VAR9.VAR10 = VAR7->VAR11;
VAR9.VAR12 = VAR7->VAR13;

VAR9.VAR14.VAR15 = VAR16;
VAR9.VAR14.VAR17 =
FUN2(struct VAR18);

memcpy(VAR4, &VAR9, sizeof(VAR9));

return 0;
}