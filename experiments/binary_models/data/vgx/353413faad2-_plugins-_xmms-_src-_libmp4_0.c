static void	FUN1(char *VAR1, char **VAR2, int *VAR3) {
VAR4* VAR5;

(*VAR2) = NULL;
(*VAR3) = -1;

if((VAR5 = fopen(VAR1, ""))){
FUN2(VAR5);
FUN3(VAR5, 0, VAR6);
if(VAR7.VAR8 == VAR9){
VAR10*	VAR11;
VAR12*		VAR13;
gint		VAR14;

VAR11 = FUN4(VAR5);
if ((VAR13 = FUN5(VAR11)) &&
((VAR14 = FUN6(VAR13)) >= 0)){
(*VAR2) = FUN7(VAR13, VAR1);

double VAR15 = FUN8(VAR13, VAR14);
unsigned long VAR16 = FUN9(VAR13, VAR14);
unsigned long VAR17 = (VAR15 * 1000 / VAR16);
(*VAR3) = VAR17;
}
if(VAR13) FUN10(VAR13);
if(VAR11) FUN11(VAR11);
}
else{

}
fclose(VAR5);
}
}