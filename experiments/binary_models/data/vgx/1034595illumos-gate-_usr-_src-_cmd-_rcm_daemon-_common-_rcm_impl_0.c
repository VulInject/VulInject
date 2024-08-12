int
FUN1(char *VAR1, char *VAR2, pid_t VAR3, uint_t VAR4,
VAR5 **VAR6)
{
int VAR7 = VAR8;
VAR9 *VAR10 = NULL;
VAR11 *VAR12 = NULL;
VAR5 *VAR13 = NULL;

FUN2(VAR14,
"",
VAR1, VAR2, VAR3, VAR4);

if (strcmp(VAR2, "") == 0) {

FUN2(VAR15, FUN3(
""),
VAR1);
return (VAR8);
}


(void) FUN4(&VAR16);


VAR7 = FUN5(VAR2, VAR17, &VAR12);
if ((VAR7 != VAR8) || (VAR12 == NULL)) {
(void) FUN6(&VAR16);
return (VAR18);
}

VAR10 = FUN7(VAR1, VAR3, &VAR12->VAR19);
if ((VAR10 != NULL) &&
((VAR10->VAR4 & (VAR4 & VAR20)) != 0)) {
(void) FUN6(&VAR16);
if ((VAR4 & VAR21) &&
(VAR10->VAR22 == VAR23)) {
VAR10->VAR22 = VAR24;
return (VAR8);
}
return (VAR25);
}


if (VAR4 & VAR21) {

if (FUN8(VAR2, VAR4, VAR26,
&VAR13) != VAR8) {

(void) FUN6(&VAR16);


if (VAR6)
*VAR6 = VAR13;
else
FUN9(VAR13);

return (VAR27);
}
}


VAR7 = FUN10(VAR12, VAR2, VAR1, VAR3, VAR4);
(void) FUN6(&VAR16);

return (VAR7);
}