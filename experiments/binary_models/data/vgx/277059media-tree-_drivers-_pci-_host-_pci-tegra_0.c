static bool FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR5->VAR4;
unsigned int VAR6 = 3;
unsigned long VAR7;


VAR7 = FUN2(VAR2->VAR8 + VAR9);
VAR7 &= ~VAR10;
VAR7 |= VAR11;
FUN3(VAR7, VAR2->VAR8 + VAR9);

do {
unsigned int VAR12 = VAR13;

do {
VAR7 = FUN2(VAR2->VAR8 + VAR14);

if (VAR7 & VAR15)
break;

FUN4(1000, 2000);
} while (--VAR12);

if (!VAR12) {
FUN5(VAR4, "", VAR2->VAR16);
goto VAR17;
}

VAR12 = VAR13;

do {
VAR7 = FUN2(VAR2->VAR8 + VAR18);

if (VAR7 & VAR19)
return true;

FUN4(1000, 2000);
} while (--VAR12);

VAR17:
FUN6(VAR2);
} while (--VAR6);

return false;
}