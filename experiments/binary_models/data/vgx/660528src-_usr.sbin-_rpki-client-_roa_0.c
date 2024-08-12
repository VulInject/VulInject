struct VAR1 *
FUN1(VAR2 **VAR3, const char *VAR4, const unsigned char *VAR5, size_t VAR6)
{
struct parse	 VAR7;
size_t		 VAR8;
unsigned char	*VAR9;
const VAR10	*VAR11;
struct VAR12	*VAR12 = NULL;
int		 VAR13 = 0;

memset(&VAR7, 0, sizeof(struct VAR14));
VAR7.VAR4 = VAR4;

VAR9 = FUN2(VAR3, VAR4, VAR5, VAR6, VAR15, &VAR8);
if (VAR9 == NULL)
return NULL;

if ((VAR7.VAR16 = calloc(1, sizeof(struct VAR1))) == NULL)
FUN3(1, NULL);

if (!FUN4(*VAR3, VAR4, &VAR7.VAR16->VAR17))
goto VAR18;
if (!FUN5(*VAR3, VAR4, &VAR7.VAR16->VAR19))
goto VAR18;
if (!FUN6(*VAR3, VAR4, &VAR7.VAR16->VAR20))
goto VAR18;
if (!FUN7(*VAR3, VAR4, &VAR7.VAR16->VAR21))
goto VAR18;
if (VAR7.VAR16->VAR17 == NULL || VAR7.VAR16->VAR19 == NULL || VAR7.VAR16->VAR20 == NULL ||
VAR7.VAR16->VAR21 == NULL) {
FUN8(""
"", VAR4);
goto VAR18;
}

VAR11 = FUN9(*VAR3);
if (VAR11 == NULL) {
FUN8("", VAR4);
goto VAR18;
}
if (!FUN10(VAR11, &VAR7.VAR16->VAR22)) {
FUN8("", VAR4);
goto VAR18;
}

if (!FUN11(VAR9, VAR8, &VAR7))
goto VAR18;

if (FUN12(*VAR3)) {
FUN8("", VAR4);
goto VAR18;
}

if ((VAR12 = FUN13(VAR4, *VAR3)) == NULL)
goto VAR18;

if (VAR12->VAR23 > 0) {
FUN8("", VAR4);
goto VAR18;
}


VAR7.VAR16->VAR24 = FUN14(VAR4, VAR12, VAR7.VAR16);

VAR13 = 1;
VAR18:
if (VAR13 == 0) {
FUN15(VAR7.VAR16);
VAR7.VAR16 = NULL;
FUN16(*VAR3);
*VAR3 = NULL;
}
FUN17(VAR12);
free(VAR9);
return VAR7.VAR16;
}