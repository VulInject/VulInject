int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR5 = &VAR2->VAR6.VAR5;
struct VAR7 *VAR8 = FUN2(VAR5->VAR9);

FUN3(VAR4->VAR10);
VAR4->VAR11 = FUN4(VAR5);
VAR4->VAR12 = VAR5->VAR13;
VAR4->VAR14 = VAR5->VAR15;
VAR4->VAR16 = VAR5->VAR17;
VAR4->VAR18 = VAR2->VAR19;
VAR4->VAR20 = FUN5(VAR5);
VAR4->VAR21 = VAR2->VAR22;
VAR4->VAR23 = VAR2->VAR24;
VAR4->VAR25 = VAR2->VAR26;
if (VAR4->VAR27) {
FUN6(""
"", VAR28, VAR5,
FUN7(VAR5), VAR4, VAR4->VAR29,
VAR4->VAR29->VAR30, FUN8(VAR4->VAR31),
VAR4->VAR11, VAR4->VAR27);
return 0;
}


if (VAR2->VAR32) {
FUN6(""
"", VAR28, VAR5,
FUN7(VAR5), VAR4, VAR4->VAR29,
VAR4->VAR29->VAR30, FUN8(VAR4->VAR31),
VAR4->VAR11);
VAR4->VAR10 = 1;
return 0;
}

VAR2->VAR33 |= VAR34;
FUN6("",
VAR28, VAR5, FUN7(VAR5), VAR4, VAR4->VAR29,
VAR4->VAR29->VAR30, FUN8(VAR4->VAR31),
VAR4->VAR11);

FUN9(&VAR8->VAR35);
if (FUN10(&VAR2->VAR36))
FUN11(&VAR2->VAR36, &VAR8->VAR37);
FUN12(&VAR8->VAR35);
return 1;  
}