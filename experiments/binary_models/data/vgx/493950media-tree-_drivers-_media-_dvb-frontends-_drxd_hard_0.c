static int FUN1(struct VAR1 *VAR2)
{
int VAR3;
enum app_env VAR4 = VAR2->VAR5;

do {
VAR3 = FUN2(VAR2, VAR2->VAR6);
if (VAR3 < 0)
break;

if (VAR2->VAR7 == VAR8 ||
VAR2->VAR7 == VAR9) {
VAR4 = VAR2->VAR10;
}
if (VAR4 == VAR11) {
VAR3 = FUN3(VAR2, VAR12, 0x0000, 0);
if (VAR3 < 0)
break;
} else if (VAR4 == VAR13) {
VAR3 = FUN3(VAR2, VAR12, 0x0001, 0);
if (VAR3 < 0)
break;
} else if (VAR4 == VAR14 && VAR2->VAR15) {
VAR3 = FUN3(VAR2, VAR12, 0x0002, 0);
if (VAR3 < 0)
break;
} else if (VAR4 == VAR14 && !VAR2->VAR15) {
VAR3 = FUN3(VAR2, VAR12, 0x0006, 0);
if (VAR3 < 0)
break;
}


VAR3 = FUN3(VAR2, VAR16, 0x0001, 0);
if (VAR3 < 0)
break;
} while (0);
return VAR3;
}