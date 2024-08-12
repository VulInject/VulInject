static int FUN1(struct VAR1 *VAR2,
u32 VAR3)
{
int VAR4, VAR5 = FUN2(VAR3 & VAR6) - 1;
const struct VAR7 *read;

if (VAR5 < 0)
return -VAR8;

VAR4 = FUN3(FUN4(VAR5));
if (VAR4 < 0)
return -VAR8;

read = &VAR2->VAR9->VAR10[VAR4];
VAR2->VAR11 = read->VAR12;
VAR2->VAR13 = read->VAR14;


VAR2->VAR15 = read->VAR16 + read->VAR17;
return 0;
}