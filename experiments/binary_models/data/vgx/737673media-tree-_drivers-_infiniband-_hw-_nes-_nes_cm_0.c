static int FUN1(struct VAR1 *VAR2, VAR3 **VAR4,
VAR5 *VAR6, VAR3 *VAR7, u8 VAR8)
{
int VAR9 = 0;

*VAR4 = (VAR7) ? VAR7 : &VAR2->VAR10[0];

switch (VAR2->VAR11) {
case VAR12:
*VAR4 = (VAR3 *)*VAR4 + sizeof(struct VAR13);
*VAR6 = sizeof(struct VAR14) + VAR2->VAR15;
FUN2(VAR2, *VAR4, VAR8);
break;
case VAR16:
*VAR6 = sizeof(struct VAR17) + VAR2->VAR15;
FUN3(VAR2, *VAR4, VAR8);
break;
default:
VAR9 = -VAR18;
}
return VAR9;
}