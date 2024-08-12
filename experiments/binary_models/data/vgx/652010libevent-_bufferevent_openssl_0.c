static void
FUN1(struct VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
int VAR6 = VAR7;
int VAR8 = 0;
unsigned long VAR9;

switch (VAR4) {
case VAR10:

if (FUN2(VAR2->VAR11) & VAR12)
VAR6 = VAR13;
else
VAR8 = 1;
break;
case VAR14:

if ((VAR5 == 0 || VAR5 == -1) && FUN3() == 0)
VAR8 = 1;
FUN4(VAR2, VAR4);
break;
case VAR15:

if (VAR5 == 0 && FUN5(VAR2->VAR11) == 0)
VAR8 = 1;
FUN4(VAR2, VAR4);
break;
case VAR16:

FUN4(VAR2, VAR4);
break;
case VAR17:
case VAR18:
case VAR19:
case VAR20:
case VAR21:
default:

FUN6("", VAR4);
break;
}

while ((VAR9 = FUN7())) {
FUN4(VAR2, VAR9);
}

if (VAR8 && VAR2->VAR22 & VAR23)
VAR6 = VAR13;

FUN8(VAR2);
FUN9(VAR2);


VAR6 = VAR3 | VAR6;
FUN10(&VAR2->VAR24.VAR24, VAR6, 0);
}