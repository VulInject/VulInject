int FUN1(
VAR1 *VAR2, int VAR3)
{
natsStatus VAR4 = VAR5;

FUN2();
VAR2->VAR3 = VAR3;
VAR2->VAR6 = FUN3();
if(VAR2->VAR6 != NULL) {
FUN4(VAR2->VAR6);
} else {
VAR4 = VAR7;
}
if(VAR4 != VAR5) {
FUN5("", FUN6(VAR4));
}

if((VAR4 = FUN7(&VAR2->VAR8->VAR9, VAR2->VAR8->VAR10))
!= VAR5) {
FUN5("",
FUN6(VAR4));
} else {
FUN8(VAR2->VAR8->VAR9, NULL);
}

VAR4 = FUN9(VAR2->VAR8->VAR10, (void *)VAR2->VAR6,
VAR11, VAR12, VAR13,
VAR14);
if(VAR4 != VAR5) {
FUN5("", FUN6(VAR4));
}

FUN10(VAR2->VAR6, &VAR2->VAR15, 0);
FUN11(&VAR2->VAR15, VAR2->VAR3);
if(FUN12(VAR2->VAR6, &VAR2->VAR16, VAR2->VAR3) < 0) {
FUN5("");
return 0;
}
FUN13((VAR17 *)&VAR2->VAR16, (VAR1 *)VAR2);
if(FUN14(&VAR2->VAR16, VAR18 | VAR19, VAR20)
< 0) {
FUN5("");
return 0;
}
return FUN15(VAR2->VAR6, VAR21);
}