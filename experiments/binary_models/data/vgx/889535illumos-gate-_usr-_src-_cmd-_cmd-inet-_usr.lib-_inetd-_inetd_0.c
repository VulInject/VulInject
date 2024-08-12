static VAR1
FUN1(VAR2 *VAR3)
{
boolean_t		VAR4 = VAR5;
char			*VAR6;
VAR7		*VAR8 = VAR3->VAR9->VAR10;
struct request_info	VAR11;


if (VAR8->VAR12 && !VAR8->VAR13 && !VAR8->VAR14) {

VAR6 = VAR3->VAR9->VAR15[
VAR16]->VAR17.VAR18[0];
if (*VAR6 == '')
VAR6 = strrchr(VAR6, '') + 1;


FUN2(VAR6);

(void) FUN3(&VAR11, VAR19, VAR6, VAR20,
VAR3->VAR21, NULL);
FUN4(&VAR11);

if (FUN5(FUN6(VAR11.VAR22), VAR23) == 0) {
syslog(VAR24,
"",
FUN7(&VAR11));
if (VAR11.VAR25 != NULL)
VAR11.FUN8(VAR3->VAR21);
VAR4 = VAR26;
} else if (!FUN9(&VAR11)) {
syslog(VAR24,
"",
FUN7(&VAR11));
if (VAR11.VAR25 != NULL)
VAR11.FUN8(VAR3->VAR21);
VAR4 = VAR26;
} else {
syslog(VAR27, "",
FUN7(&VAR11));
}


FUN2(VAR28);
}
return (VAR4);
}