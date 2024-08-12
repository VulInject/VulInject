static void
FUN1(hrtime_t VAR1, VAR2 *VAR3)
{
boolean_t VAR4;

boolean_t VAR5;

boolean_t VAR6;
sample_col_arg_t VAR7;
soft_scan_arg_t VAR8;
uint_t VAR9 = 0;


FUN2(VAR10, &VAR9);
FUN3("", VAR9);


if (VAR9 == 0)
return;


VAR5 = FUN4();


VAR6 = FUN5();


FUN6(VAR11, VAR9);

VAR7.VAR12 = VAR11;
VAR7.VAR13 = VAR11;
FUN2(VAR14, &VAR7);
FUN2(VAR15, NULL);
FUN3("",
VAR7.VAR12, VAR7.VAR13);

if (VAR5)
FUN3("", VAR16);


VAR4 = !VAR6 && VAR7.VAR12 &&
(VAR17.VAR18 == 0 ||
VAR5);

FUN3("", VAR4 ? "" : "");


if (VAR4 && VAR5)
FUN7(&VAR8);


if (VAR4 && (!VAR5 ||
(VAR8.VAR19 > 0 && VAR8.VAR20 > 0))) {


if (FUN8(VAR1, *VAR3)) {
FUN3("");
FUN9(VAR21);		 
FUN10(VAR22); 
*VAR3 = FUN11(VAR1,
VAR17.VAR23);
}

VAR24 = NULL;
if (VAR5) {
FUN3("",
(long long)VAR8.VAR19);
FUN2(VAR25, &VAR8);
if (VAR26 && VAR24 != NULL) {

VAR8.VAR27 =
VAR7.VAR13;
FUN12(VAR24, &VAR8);
}
} else {
FUN2(VAR28, NULL);
if (VAR26 && VAR24 != NULL) {

FUN13(VAR24, VAR7.VAR13);
}
}
} else if (VAR7.VAR12) {
FUN2(VAR29, NULL);
}
}