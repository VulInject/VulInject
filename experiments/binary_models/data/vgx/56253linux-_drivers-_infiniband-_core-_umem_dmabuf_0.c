int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
struct VAR5 *VAR6;
unsigned long VAR7, VAR8, VAR9 = 0;
unsigned int VAR10 = 0;
long VAR11;
int VAR12;

FUN2(VAR2->VAR13->VAR14->VAR15);

if (VAR2->VAR4)
goto VAR16;

VAR4 = FUN3(VAR2->VAR13,
VAR17);
if (FUN4(VAR4))
return FUN5(VAR4);



VAR7 = FUN6(VAR2->VAR18.VAR19, VAR20);
VAR8 = FUN7(VAR2->VAR18.VAR19 + VAR2->VAR18.VAR21,
VAR20);
FUN8(VAR4, VAR6, VAR12) {
if (VAR7 < VAR9 + FUN9(VAR6) && VAR9 < VAR8)
VAR10++;
if (VAR9 <= VAR7 && VAR7 < VAR9 + FUN9(VAR6)) {
unsigned long VAR22 = VAR7 - VAR9;

VAR2->VAR23 = VAR6;
VAR2->VAR24 = VAR22;
FUN10(VAR6) += VAR22;
FUN9(VAR6) -= VAR22;
VAR9 += VAR22;
}
if (VAR9 < VAR8 && VAR8 <= VAR9 + FUN9(VAR6)) {
unsigned long VAR25 = VAR9 + FUN9(VAR6) - VAR8;

VAR2->VAR26 = VAR6;
VAR2->VAR27 = VAR25;
FUN9(VAR6) -= VAR25;
break;
}
VAR9 += FUN9(VAR6);
}

VAR2->VAR18.VAR28.VAR4.VAR29 = VAR2->VAR23;
VAR2->VAR18.VAR28.VAR4.VAR30 = VAR10;
VAR2->VAR4 = VAR4;

VAR16:

VAR11 = FUN11(VAR2->VAR13->VAR14->VAR15,
VAR31,
false, VAR32);
if (VAR11 < 0)
return VAR11;
if (VAR11 == 0)
return -VAR33;
return 0;
}