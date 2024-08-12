VAR1
FUN1(krb5_context VAR2, VAR3 **VAR4,
const char *VAR5)
{
*VAR4 = calloc(1, sizeof(**VAR4));
if (*VAR4 == NULL) {
FUN2(VAR2, VAR6, "");
return VAR6;
}

(*VAR4)->VAR7 = calloc(1, sizeof(VAR8));
if ((*VAR4)->VAR7 == NULL) {
free(*VAR4);
*VAR4 = NULL;
FUN2(VAR2, VAR6, "");
return VAR6;
}
(*VAR4)->VAR9 = strdup(VAR5);
if ((*VAR4)->VAR9 == NULL) {
free((*VAR4)->VAR7);
free(*VAR4);
*VAR4 = NULL;
FUN2(VAR2, VAR6, "");
return VAR6;
}
(*VAR4)->VAR10 = 0;
(*VAR4)->VAR11 = 0;
(*VAR4)->VAR12 = VAR13;
(*VAR4)->VAR14  = VAR15;
(*VAR4)->VAR16 = VAR17;
(*VAR4)->VAR18 = VAR19;
(*VAR4)->VAR20 = VAR21;
(*VAR4)->VAR22 = VAR23;
(*VAR4)->VAR24 = VAR25;
(*VAR4)->VAR26= VAR27;
(*VAR4)->VAR28 = VAR29;
(*VAR4)->VAR30 = VAR31;
(*VAR4)->VAR32 = VAR33;
(*VAR4)->VAR34 = VAR35;
(*VAR4)->VAR36 = VAR37;
(*VAR4)->VAR38 = VAR39;
(*VAR4)->VAR40 = VAR41;
(*VAR4)->VAR42 = VAR43;
return 0;
}