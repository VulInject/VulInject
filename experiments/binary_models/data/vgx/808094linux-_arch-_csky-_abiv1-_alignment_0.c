void FUN1(struct VAR1 *VAR2)
{
int VAR3;
uint16_t VAR4;
uint32_t VAR5 = 0;
uint32_t VAR6     = 0;
uint32_t VAR7     = 0;
uint32_t VAR8    = 0;
uint32_t VAR9   = 0;

if (!FUN2(VAR2))
goto VAR10;

if (!VAR11) {
FUN3("", VAR12);
goto VAR13;
}

VAR14++;

VAR3 = FUN4(VAR4, (VAR15 *)FUN5(VAR2));
if (VAR3) {
FUN3("", VAR12);
goto VAR13;
}

goto VAR16;

VAR10:
if (!VAR17) {
FUN3("", VAR12);
goto VAR13;
}

VAR18++;

VAR4 = *(VAR15 *)FUN5(VAR2);

VAR16:
VAR5 = (VAR19)VAR4;

VAR6  = VAR5 & 0xf;
VAR8 = (VAR5 >> 4) & 0xf;
VAR7  = (VAR5 >> 8) & 0xf;
VAR5 &= 0xf000;

if (VAR6 == 0 || VAR6 == 1 || VAR7 == 0 || VAR7 == 1)
goto VAR13;

switch (VAR5) {
case VAR20:
VAR9 = FUN6(VAR2, VAR6) + (VAR8 << 1);
VAR3 = FUN7(VAR2, VAR7, VAR9);
break;
case VAR21:
VAR9 = FUN6(VAR2, VAR6) + (VAR8 << 2);
VAR3 = FUN8(VAR2, VAR7, VAR9);
break;
case VAR22:
VAR9 = FUN6(VAR2, VAR6) + (VAR8 << 1);
VAR3 = FUN9(VAR2, VAR7, VAR9);
break;
case VAR23:
VAR9 = FUN6(VAR2, VAR6) + (VAR8 << 2);
VAR3 = FUN10(VAR2, VAR7, VAR9);
break;
}

if (VAR3)
goto VAR13;

VAR2->VAR24 += 2;

return;

VAR13:
if (!FUN2(VAR2)) {
if (FUN11(VAR2))
return;

FUN12(1);
FUN13("",
VAR12, VAR5, VAR7, VAR6, VAR8, VAR9);
FUN14(VAR2);
FUN12(0);
FUN15(VAR25);
}

FUN16(VAR26, VAR27, (void VAR28 *)VAR9);
}