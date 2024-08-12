static VAR1 FUN1(VAR2 *VAR3, const char *VAR4, const char *VAR5,
const char *VAR6, apr_time_t VAR7) {
VAR8 *VAR9 = NULL;
apr_status_t VAR10 = VAR11;
char VAR12[128];
char *VAR13 = NULL;

FUN2(VAR3, &VAR13, 12);


const char *VAR14 = FUN3(VAR3, VAR4, VAR5);
const char *VAR15 = FUN4(VAR3->VAR16, "", VAR14, VAR13);


FUN5(VAR3);


if (VAR6 == NULL) {
if ((VAR10 = FUN6(VAR14, VAR3->VAR16)) != VAR11) {
FUN7(VAR3, ""%VAR17\"", VAR15, FUN8(VAR10, VAR12, sizeof(VAR12)));
}
return VAR18;
}


if ((VAR10 = FUN9(&VAR9, VAR15, (VAR19 | VAR20),
VAR21, VAR3->VAR16)) != VAR11) {
FUN7(VAR3, ""%VAR17\"", VAR15, FUN8(VAR10, VAR12, sizeof(VAR12)));
return VAR22;
}


FUN10(VAR9, VAR23);
apr_off_t VAR24 = 0;
FUN11(VAR9, VAR24);
FUN12(VAR9, VAR25, &VAR24);


oidc_cache_file_info_t VAR26;
VAR26.VAR27 = VAR7;
VAR26.VAR28 = strlen(VAR6) + 1;


if ((VAR10 = FUN13(VAR3, VAR15, VAR9, &VAR26, sizeof(VAR29)))
!= VAR11)
return VAR22;


VAR10 = FUN13(VAR3, VAR15, VAR9, (void*) VAR6, VAR26.VAR28);


FUN14(VAR9);
FUN15(VAR9);

if (FUN16(VAR15, VAR14) != 0) {
FUN7(VAR3, "", VAR15, VAR14);
return VAR22;
}


FUN17(VAR3, ""%VAR17\"" VAR30 "", (VAR10 == VAR11) ? "" : "", VAR5, VAR26.VAR28);

return (VAR10 == VAR11);
}