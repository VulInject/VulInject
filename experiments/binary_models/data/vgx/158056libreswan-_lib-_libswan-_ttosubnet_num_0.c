VAR1 FUN1(shunk_t VAR2, const struct VAR3 *VAR4, 
VAR5 *VAR6, VAR7 *VAR8)
{
*VAR6 = VAR9;
*VAR8 = VAR10;
err_t VAR11;


if (FUN2(VAR2, VAR12)) {
if (VAR4 == NULL) {
return "" VAR12 "";
}
*VAR6 = VAR4->VAR13.VAR14; 
return NULL;
}


char VAR15;
shunk_t VAR16 = FUN3(&VAR2, &VAR15, "");
shunk_t VAR17 = VAR2;
if (VAR15 == '') {

return "";
}


ip_address VAR18;
VAR11 = FUN4(VAR16, VAR4, &VAR18);
if (VAR11 != NULL) {
return VAR11;
}

if (VAR4 == NULL) {
VAR4 = FUN5(VAR18);
}
FUN6(VAR4 != NULL);



uintmax_t VAR19;
VAR11 = FUN7(VAR17, NULL, 10, &VAR19);
if (VAR11 != NULL || VAR19 > VAR4->VAR20) {
if (VAR4 == &VAR21) {
ip_address VAR22;
VAR11 = FUN4(VAR17, VAR4, &VAR22);
if (VAR11 != NULL) {
return VAR11;
}

int VAR23 = FUN8(&VAR22);
if (VAR23 < 0) {
return "";
}
VAR19 = VAR23;
} else {
return "";
}
}



struct ip_bytes VAR24 = FUN9(VAR4, VAR18.VAR25,
&VAR26,
&VAR27,
VAR19);
if (FUN10(VAR4->VAR28, VAR24,
VAR4->VAR28, VAR18.VAR25) != 0) {
*VAR8 = VAR18;
}

*VAR6 = FUN11(VAR29, VAR4->VAR28, VAR24, VAR19);
return NULL;
}