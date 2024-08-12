static void
FUN1(struct VAR1 *VAR2, int VAR3)
{
int VAR4 = 0;

if (VAR2->VAR5 & VAR6) {
VAR7--;
VAR2->VAR5 &= ~VAR6;
}

if (VAR3 & VAR8) {
FUN2('');
FUN3(VAR2->VAR9);
FUN2('');
VAR4 = 1;
}

if (VAR3 & VAR10) {
while (VAR4-- > 0)
FUN2(VAR11);
VAR4 = 1;
if (VAR12 == VAR2)
FUN2('');
else if (VAR12 != 0 && VAR12->VAR13 == VAR2)
FUN2('');
else
VAR4++;
}

if (VAR3 & VAR14) {
while (VAR4-- > 0)
FUN2(VAR11);
FUN3(VAR2->VAR15);
VAR4 = 1;
}

if (VAR3 & VAR16) {
char	*VAR17;
while (VAR4-- > 0)
FUN2(VAR11);
VAR4 = 28;
if (VAR2->VAR5 & VAR18) {
char *VAR19, *FUN4();
if ((VAR19 = FUN4(VAR2->VAR20)) != NULL) {
VAR4 -= strlen(VAR19);
FUN5(VAR19);
} else {
FUN6(VAR2->VAR20);
VAR17 = FUN7(VAR21);
VAR4 -= strlen(VAR22) + strlen(VAR17);
FUN5((unsigned char *)VAR17);
FUN5(VAR22);
}
if (VAR2->VAR5 & VAR23) {
VAR17 = FUN7(VAR24);
VAR4 -= strlen(VAR17);
FUN5((unsigned char *)VAR17);
}
} else if (VAR2->VAR5 & VAR25) {
FUN6(VAR2->VAR20);
VAR17 = FUN7(VAR26);
VAR4 -= strlen(VAR17) + strlen(VAR22) + 2;
FUN5((unsigned char *)VAR17);
FUN2('');
FUN6(VAR2->VAR20);
FUN5(VAR22);
FUN2('');
} else {
VAR17 = FUN7(VAR27);
VAR4 -= strlen(VAR17);
FUN5((unsigned char *)VAR17);
}
if (VAR4 < 1)
VAR4 = 1;
}

if (VAR3 & VAR28) {
while (VAR4-- > 0)
FUN2(VAR11);
FUN5(VAR2->VAR29);
VAR4 = 1;
}

if (VAR3 & VAR30) {
while (VAR4-- > 0)
FUN2(VAR11);
FUN2('');
VAR4 = 1;
}

if (VAR3 & VAR31) {
while (VAR4-- > 0)
FUN2(VAR11);
FUN5("");
FUN5(VAR2->VAR32);
FUN2('');
}

FUN2(VAR33);
FUN8();

}