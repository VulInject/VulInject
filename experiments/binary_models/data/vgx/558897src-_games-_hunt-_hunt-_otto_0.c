static	int		FUN1(struct VAR1 *, char, int, int);
static	void		FUN2(void);
static	void		FUN3(const char *, int, const char *);

int
FUN4(int VAR2, int VAR3, char VAR4, char *VAR5, size_t VAR6)
{
int		VAR7;

if (FUN5(VAR8) < 0)
FUN6("");


switch (VAR4) {
case '':	VAR9 = VAR10; break;
case '':	VAR9 = VAR11; break;
case '':	VAR9 = VAR12; break;
case '':	VAR9 = VAR13; break;
default:	FUN6("");
}
VAR14 = VAR2; VAR15 = VAR3;
VAR16[VAR14][VAR15] |= 1 << VAR9;


VAR17 = 0;


FUN7();
for (VAR7 = 0; VAR7 < VAR18; VAR7++) {
if (strchr(VAR19, VAR20[VAR7].VAR21) != NULL) {
FUN8(VAR7, &VAR20[VAR7]);
memset(VAR16, 0, sizeof VAR16);
goto VAR22;
}
}

if (strchr(VAR23, VAR24.VAR21) != NULL && !(VAR24.VAR21 & VAR25)) {
FUN9(VAR26);
memset(VAR16, 0, sizeof VAR16);
} else if (FUN10(VAR27)) {
memset(VAR16, 0, sizeof VAR16);
} else if (FUN10(VAR28)) {
memset(VAR16, 0, sizeof VAR16);
} else if (FUN10(VAR29))
memset(VAR16, 0, sizeof VAR16);
else if (FUN10(VAR30))
memset(VAR16, 0, sizeof VAR16);
else
FUN2();

VAR22:
if (VAR17) {
if (VAR17 > VAR6)
FUN6("");
memcpy(VAR5, VAR31, VAR17);
}
return VAR17;
}