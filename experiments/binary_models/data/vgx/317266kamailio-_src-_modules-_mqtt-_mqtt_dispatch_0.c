int FUN1(VAR1* VAR2)
{
int VAR3, VAR4;
struct ev_io VAR5;


FUN2("");
if (FUN3() != VAR6) {
FUN4("");
return -1;
}

VAR7 = FUN5(VAR2->VAR8, true, 0);
if (VAR7 == 0) {
FUN4("");
return -1;
}

if (VAR2->VAR9 != NULL && VAR2->VAR10 != NULL) {
FUN2("", VAR2->VAR10, VAR2->VAR9);
VAR3 = FUN6(VAR7, VAR2->VAR10, strlen(VAR2->VAR9), VAR2->VAR9, 0, false);
if (VAR3 != VAR6) {
FUN2("", VAR3);
return -1;
}
}

if (VAR2->VAR11 != NULL && VAR2->VAR12 != NULL) {
VAR3 = FUN7(VAR7, VAR2->VAR11, VAR2->VAR12);
if (VAR3 != VAR6) {
FUN2("", VAR3);
return -1;
}
}


FUN8(VAR7, VAR13);

FUN9(VAR7, VAR14);

FUN10(VAR7, VAR15);


VAR16 = FUN11(0);
if(VAR16==NULL) {
FUN4("");
return -1;
}


FUN12(&VAR5, VAR17, VAR18[0], VAR19);
FUN13(VAR16, &VAR5);


FUN14(&VAR20, VAR21, VAR22, 0.);
FUN15(VAR16, &VAR20);



if (VAR2->VAR23 != NULL || VAR2->VAR24 != NULL) {
FUN2("");
if (VAR2->VAR25 == 0) {
VAR4 = 0;
} else if (VAR2->VAR25 == 1) {
VAR4 = 1;
} else {
FUN4("");
return -1;
}
VAR3 = FUN16(VAR7, VAR4, VAR2->VAR26, VAR2->VAR27);
if (VAR3 != VAR6) {
FUN4("");
FUN4("",VAR28, strerror(VAR28));
return -1;
}
VAR3 = FUN17(VAR7, VAR2->VAR23, VAR2->VAR24, VAR2->VAR29, VAR2->VAR30, NULL);
if (VAR3 != VAR6) {
FUN4("");
FUN4("",VAR28, strerror(VAR28));
return -1;
}
if (VAR2->VAR31 != NULL) {
VAR3 = FUN18(VAR7, VAR32, VAR2->VAR31);
if (VAR3 != VAR6) {
FUN4("",VAR28, strerror(VAR28));
return -1;
}
FUN19("");
}
}

VAR3 = FUN20(VAR7, VAR2->VAR33, VAR2->VAR34, VAR2->VAR35);
if (VAR3 == VAR36) {
FUN4("");
return -1;
}
if (VAR3 == VAR37) {


FUN2("",VAR28, strerror(VAR28));
}


while(1) {
FUN21 (VAR16, 0);
}

return 0;
}