static int
FUN1(const VAR1 *VAR2, VAR3 *VAR4,
const VAR5 *VAR6, const VAR7 *VAR8, const VAR5 *VAR9)
{
VAR3		*VAR10 = NULL;
VAR3		*argv[4];
struct cbor_pair	 VAR11;
VAR5		*VAR12 = NULL;
uint8_t			 VAR13;
int			 VAR14;

memset(argv, 0, sizeof(argv));
memset(&VAR11, 0, sizeof(VAR11));

if (VAR4 == NULL || VAR6 == NULL || VAR8 == NULL || VAR9->VAR15 == NULL) {
FUN2("", VAR16,
(const void *)VAR6, (const void *)VAR8,
(const void *)VAR9->VAR15);
VAR14 = VAR17;
goto VAR18;
}

if (VAR9->VAR19 != 32 && VAR9->VAR19 != 64) {
FUN2("", VAR16, VAR9->VAR19);
VAR14 = VAR17;
goto VAR18;
}

if ((VAR12 = FUN3()) == NULL ||
FUN4(VAR2, VAR6, VAR9, VAR12) < 0) {
FUN2("", VAR16);
VAR14 = VAR17;
goto VAR18;
}

if ((VAR13 = FUN5(VAR2)) == 0) {
FUN2("", VAR16);
VAR14 = VAR17;
goto VAR18;
}


if ((argv[0] = FUN6(VAR8, 1)) == NULL ||
(argv[1] = FUN7(VAR12)) == NULL ||
(argv[2] = FUN8(VAR2, VAR6, VAR12)) == NULL ||
(VAR13 != 1 && (argv[3] = FUN9(VAR13)) == NULL)) {
FUN2("", VAR16);
VAR14 = VAR17;
goto VAR18;
}

if ((VAR10 = FUN10(argv, FUN11(argv))) == NULL) {
FUN2("", VAR16);
VAR14 = VAR17;
goto VAR18;
}

if ((VAR11.VAR20 = FUN12("")) == NULL) {
FUN2("", VAR16);
VAR14 = VAR17;
goto VAR18;
}

VAR11.VAR21 = VAR10;

if (!FUN13(VAR4, VAR11)) {
FUN2("", VAR16);
VAR14 = VAR17;
goto VAR18;
}

VAR14 = VAR22;

VAR18:
FUN14(argv, FUN11(argv));

if (VAR10 != NULL)
FUN15(&VAR10);
if (VAR11.VAR20 != NULL)
FUN15(&VAR11.VAR20);

FUN16(&VAR12);

return (VAR14);
}