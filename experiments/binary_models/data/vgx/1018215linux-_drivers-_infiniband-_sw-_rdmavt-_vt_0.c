static int FUN1(struct VAR1 *VAR2, u32 VAR3, u16 VAR4,
VAR5 *VAR6)
{

struct VAR7 *VAR8 = FUN2(VAR2);
u32 VAR9;

VAR9 = FUN3(VAR2, VAR3);

if (VAR4 >= FUN4(VAR8))
return -VAR10;

*VAR6 = FUN5(VAR8, VAR9, VAR4);
return 0;
}