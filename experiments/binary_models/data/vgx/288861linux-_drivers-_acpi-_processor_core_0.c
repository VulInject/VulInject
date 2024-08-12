static int FUN1(struct VAR1 *VAR2,
u32 VAR3, VAR4 *VAR5)
{
struct VAR6 *VAR7 =
FUN2(VAR2, struct VAR6, VAR8);

if (!(VAR7->VAR9 & VAR10))
return -VAR11;

if (VAR7->VAR12 != VAR3)
return -VAR13;

*VAR5 = VAR7->VAR14;
return 0;
}