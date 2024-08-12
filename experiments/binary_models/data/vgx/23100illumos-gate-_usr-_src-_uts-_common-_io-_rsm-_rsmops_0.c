int
FUN1(const char *VAR1, uint_t VAR2,
VAR3 *VAR4, uint_t VAR5)
{
VAR6 *VAR7;
VAR8 *VAR9;
VAR10 *VAR11;
int VAR12;
int (*VAR13)
(const char *VAR1, uint_t VAR2,
VAR3 *VAR14, uint_t VAR5);

FUN2(&VAR15);


if ((VAR7 = FUN3(VAR1, VAR2)) == NULL) {

if ((VAR9 = FUN4(VAR1)) == NULL) {

FUN5(&VAR15);
if ((VAR12 = FUN6("", (char *)VAR1)) == -1) {
return (VAR16);
}
FUN2(&VAR15);
if ((VAR9 = FUN4(VAR1)) == NULL) {
FUN5(&VAR15);

return (VAR16);
}
}
FUN7(VAR9);
VAR7 = FUN3(VAR1, VAR2);
if (VAR7 == NULL) {

FUN5(&VAR15);
VAR11 = FUN8(VAR1, VAR2);
FUN2(&VAR15);
if (VAR11 != NULL) {
(void) FUN9(VAR11, VAR17|VAR18, 0, 0,
FUN10(), NULL);
FUN11(VAR11);
}
VAR7 = FUN3(VAR1, VAR2);
if (VAR7 == NULL) {
FUN5(&VAR15);
return (VAR16);
}
}
FUN7(VAR7);
} else {
VAR9 = VAR7->VAR9;
}
FUN7(VAR9);
FUN7(VAR9 == VAR7->VAR9);

VAR13 = VAR9->VAR19.VAR13;

VAR7->VAR20++;
FUN5(&VAR15);

VAR12 = (*VAR13)(VAR1, VAR2, VAR4,
VAR5);
if (VAR12 != VAR21) {

FUN2(&VAR15);

VAR7->VAR20--;
FUN5(&VAR15);
} else {

FUN2(&VAR15);
if ((VAR7 = FUN3(VAR1, VAR2)) == NULL) {
FUN5(&VAR15);
return (VAR16);
}

VAR7->VAR22 = VAR4->VAR22;
FUN5(&VAR15);
}
return (VAR12);
}