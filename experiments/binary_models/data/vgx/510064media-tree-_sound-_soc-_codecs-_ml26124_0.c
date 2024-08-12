static int FUN1(struct VAR1 *VAR2,
enum snd_soc_bias_level VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);

switch (VAR3) {
case VAR6:
FUN3(VAR2, VAR7,
VAR8, VAR9);
FUN4(100);
FUN3(VAR2, VAR7,
VAR8,
VAR10 | VAR11);
break;
case VAR12:
break;
case VAR13:

if (FUN5(VAR2) == VAR14) {
FUN3(VAR2, VAR15,
VAR16, VAR16);
FUN4(500);
FUN6(VAR5->VAR17);
}
break;
case VAR14:

FUN3(VAR2, VAR15,
VAR16, 0);
break;
}
return 0;
}