static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR5 = VAR2->VAR5;
u16 VAR6 = FUN2(VAR5->VAR7, VAR8, VAR9);
u8 VAR10[VAR11];
u8 VAR12;
int VAR13;

VAR13 = FUN3(VAR5, VAR2->VAR14,
VAR6, &VAR12, sizeof(VAR12));
if (VAR13)
return VAR13;

if (VAR12 & VAR15)
return -VAR16;

VAR13 = FUN3(VAR5, VAR2->VAR14,
VAR17, VAR10, sizeof(VAR10));
if (VAR13)
return VAR13;

return FUN4(VAR10, sizeof(VAR10), VAR4);
}