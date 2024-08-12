static int FUN1(VAR1 *VAR2, VAR3 *VAR4) {
if ( VAR4->VAR5==VAR6 && VAR4->VAR7.VAR8.VAR9 == VAR10 ) {
struct VAR11 *VAR12 = FUN2(FUN3(VAR2));
VAR1 *VAR13;
FUN4(VAR12->VAR14,NULL,NULL,&VAR13);
if ( *FUN5(VAR13)!='' ) {
VAR15 *VAR16 = FUN6(VAR12->VAR14);
char *VAR17 = FUN7(VAR16);
bool export = true;

if (FUN8(VAR17)) {

char *VAR18[3];

VAR18[2]=NULL;
VAR18[0] =  FUN9("");
VAR18[1] =  FUN9("");
export = FUN10(
FUN9(""), (const char **) VAR18, 0, 1,
FUN9(""),
FUN11(VAR17)) == 0;
}

if (export) {
FUN12(VAR12, VAR16);
}

free(VAR17);
free(VAR16);
}
}
return true;
}