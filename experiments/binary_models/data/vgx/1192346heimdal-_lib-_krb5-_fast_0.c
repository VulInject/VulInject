VAR1
FUN1(krb5_context VAR2, int32_t VAR3,
VAR4 *VAR5,
struct VAR6 *VAR7, VAR8 *VAR9)
{
KrbFastResponse VAR10;
krb5_error_code VAR11;
VAR12 *VAR13 = NULL;
int VAR14 = 0;

if (VAR7 == NULL || VAR7->VAR15 == NULL || VAR9->VAR16 == NULL)
return FUN2(VAR2, VAR7);



VAR13 = FUN3(VAR9->VAR16->VAR17, VAR9->VAR16->VAR18,
VAR19, &VAR14);
if (VAR13 == NULL)
return FUN2(VAR2, VAR7);

memset(&VAR10, 0, sizeof(VAR10));

VAR11 = FUN4(VAR2, VAR7, VAR13, &VAR10);
if (VAR11)
goto VAR20;

FUN5(VAR9->VAR16);
VAR11 = FUN6(&VAR10.VAR16, VAR9->VAR16);
if (VAR11)
goto VAR20;

if (VAR10.VAR21) {
if (VAR7->VAR21)
FUN7(VAR2, VAR7->VAR21);

VAR11 = FUN8(VAR2, VAR10.VAR21, &VAR7->VAR21);
if (VAR11)
goto VAR20;
}

if (VAR3 != (VAR22)VAR10.VAR3) {
VAR11 = VAR23;
goto VAR20;
}
if (VAR10.VAR24) {
PrincipalName VAR25;
krb5_realm VAR26 = NULL;

if (VAR5 == NULL) {
VAR11 = VAR23;
goto VAR20;
}

VAR11 = FUN9(VAR2, VAR7->VAR15,
VAR27,
VAR5->VAR28, VAR5->VAR29,
&VAR10.VAR24->VAR30);
if (VAR11)
goto VAR20;


VAR11 = FUN10(&VAR10.VAR24->VAR26, &VAR26);
if (VAR11)
goto VAR20;
FUN11(&VAR9->VAR26);
VAR9->VAR26 = VAR26;

VAR11 = FUN12(&VAR10.VAR24->VAR25, &VAR25);
if (VAR11)
goto VAR20;
FUN13(&VAR9->VAR25);
VAR9->VAR25 = VAR25;
} else if (VAR5) {

VAR11 = VAR23;
}

VAR20:
FUN14(&VAR10);
return VAR11;
}