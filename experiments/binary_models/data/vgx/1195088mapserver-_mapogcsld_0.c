int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4,
const char *VAR5,  char **VAR6)
{


char *VAR7 = NULL;
int VAR8 = 0;
char *VAR9=NULL;
VAR10 *VAR11 = NULL;
int VAR12 = VAR13;

if (VAR2 && VAR3) {
VAR2->VAR14 = (char*)VAR3;
VAR7 = FUN2(VAR2, VAR2->VAR15, NULL, "");
if (VAR7 == NULL) {
VAR7 = FUN2(VAR2, NULL, NULL, "" );
}
if (VAR7 == NULL) {
FUN3(VAR16, "", "");
} else {
int VAR17;
const char *VAR18 = FUN4(&(VAR2->VAR19.VAR20), "", "");
if(!VAR18) {
VAR17 = 1024*1024; 
} else {
VAR17 = FUN5(VAR18);
}
if (FUN6(VAR3, VAR7, &VAR8,-1, 0, 0, VAR17) ==  VAR21) {
if ((VAR11 = fopen(VAR7, "")) != NULL) {
int   VAR22=0;
FUN7(VAR11, 0, VAR23);
VAR22 = FUN8(VAR11);
if(VAR22 > 0) {
FUN9(VAR11);
VAR9 = (char*)malloc((VAR22+1)*sizeof(char));
FUN10(fread(VAR9, 1, VAR22, VAR11));
VAR9[VAR22] = '';
} else {
FUN3(VAR16, "", "", VAR3);
}
fclose(VAR11);
unlink(VAR7);
}
} else {
unlink(VAR7);
FUN3(VAR16, "", "", VAR3);
}
FUN11(VAR7);
if (VAR9)
VAR12 = FUN12(VAR2, VAR9, VAR4, VAR5, VAR6);
}
VAR2->VAR14 = NULL;
}

FUN11(VAR9);

return VAR12;

FUN3(VAR24, "", "");
return(VAR13);
}