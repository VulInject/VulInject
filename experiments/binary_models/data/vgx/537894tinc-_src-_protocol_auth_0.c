bool FUN1(VAR1 *VAR2, const char *VAR3) {
if(!VAR4->VAR5->VAR6 || !VAR2->VAR6) {
return false;
}

char VAR7[VAR8];
int VAR9, VAR10;
const size_t VAR11 = FUN2(VAR4->VAR5->VAR6->VAR12);
char *VAR13 = alloca(VAR11);
char *VAR14 = alloca(VAR11);

if(sscanf(VAR3, "" VAR15, &VAR9, &VAR10, VAR7) != 3) {
FUN3(VAR16, VAR17, "", "", VAR2->VAR18, VAR2->VAR19);
return false;
}

if(!VAR9 || !VAR10) {
FUN3(VAR16, VAR17, "", VAR2->VAR18, VAR2->VAR19, VAR9, VAR10);
return false;
}



size_t VAR20 = FUN4(VAR7, VAR13, VAR11);



if(VAR20 != VAR11) {
FUN3(VAR16, VAR17, "", VAR2->VAR18, VAR2->VAR19, "");
return false;
}



if(!FUN5(VAR4->VAR5->VAR6->VAR12, VAR13, VAR11, VAR14)) {
FUN3(VAR16, VAR17, "", VAR2->VAR18, VAR2->VAR19);
return false;
}

if(VAR21 >= VAR22) {
FUN6(VAR14, VAR7, VAR11);
FUN3(VAR22, VAR23, "", VAR7);

FUN7(VAR7, FUN8(VAR11));
}



if(!FUN9(&VAR2->VAR6->VAR24, VAR9, VAR10)) {
FUN7(VAR14, VAR11);
FUN3(VAR16, VAR17, "", VAR2->VAR18, VAR2->VAR19);
return false;
}

bool VAR25 = FUN10(&VAR2->VAR6->VAR24.VAR9, VAR14, VAR11, false);
FUN7(VAR14, VAR11);

if(!VAR25) {
FUN3(VAR16, VAR17, "", VAR2->VAR18, VAR2->VAR19);
return false;
}

VAR2->VAR26.VAR27 = true;

VAR2->VAR28 = VAR29;

return FUN11(VAR2);
}