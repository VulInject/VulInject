int
FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, int *VAR5)
{
const char	*VAR6;
int		VAR7;
acl_t		VAR8;
struct VAR9 *VAR9;
mode_t		VAR10;

VAR6 = NULL;
VAR7 = VAR11;


if (*VAR5 < 0 || FUN2(FUN3(VAR4))) {
VAR6 = FUN4(VAR2, VAR4, VAR5);
if (VAR6 == NULL)
return (VAR12);
}

FUN5(VAR4);

VAR8 = NULL;
VAR9 = NULL;


if (*VAR5 >= 0)
VAR9 = FUN6(*VAR5);
else if ((!VAR2->VAR13)
&& (FUN7(VAR4) == VAR14))

VAR9 = NULL;
else
VAR9 = FUN8(VAR6);


if (VAR9 != NULL) {
VAR10 = FUN3(VAR4);
if (FUN9(VAR9, &VAR10) == 0) {
FUN10(VAR9);
VAR9 = NULL;
return (VAR11);
}
}

if (VAR9 != NULL) {
VAR7 = FUN11(VAR2, VAR4, VAR9);
FUN10(VAR9);
VAR9 = NULL;

if (VAR7 != VAR11) {
FUN12(&VAR2->VAR15, VAR16,
"");
}

return (VAR7);
}


if (*VAR5 >= 0)
VAR8 = FUN13(*VAR5);
else if ((!VAR2->VAR13)
&& (FUN7(VAR4) == VAR14))

VAR8 = NULL;
else
VAR8 = FUN14(VAR6, VAR17);

if (VAR8 != NULL) {
VAR7 = FUN15(VAR2, VAR4, VAR8, VAR18);
FUN16(VAR8);
VAR8 = NULL;

if (VAR7 != VAR11) {
FUN12(&VAR2->VAR15, VAR16,
"");
return (VAR7);
}
}


if (FUN2(FUN3(VAR4))) {
VAR8 = FUN14(VAR6, VAR19);
if (VAR8 != NULL) {
VAR7 = FUN15(VAR2, VAR4, VAR8,
VAR20);
FUN16(VAR8);
if (VAR7 != VAR11) {
FUN12(&VAR2->VAR15, VAR16,
"");
return (VAR7);
}
}
}
return (VAR7);
}