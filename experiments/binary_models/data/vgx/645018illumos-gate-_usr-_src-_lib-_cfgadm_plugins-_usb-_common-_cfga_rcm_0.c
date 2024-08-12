VAR1		FUN1(const char *, char **, char *,
VAR2);
VAR1		FUN2(const char *, char **, char *,
VAR2);
VAR1		FUN3(const char *, char **, char *,
VAR2);
static VAR1 	FUN4(VAR3 *, char **);
static VAR1 	FUN5(const char *, VAR2, char **,
VAR4 *);


static VAR5 *VAR6 = NULL;
static mutex_t VAR7 = VAR8;



VAR1
FUN1(const char *VAR9, char **VAR10, char *VAR11,
cfga_flags_t VAR12)
{
int		VAR13;
uint_t		VAR14 = 0;
VAR3	*VAR15 = NULL;
cfga_usb_ret_t	VAR16 = VAR17;

FUN6("");

if ((VAR16 = FUN5(VAR9, VAR12, VAR10, &VAR14)) !=
VAR17) {

return (VAR16);
}

FUN6("", VAR11);

if ((VAR13 = FUN7(VAR6, VAR11, VAR14, &VAR15))
!= VAR18) {
FUN6("");

if (VAR15) {
(void) FUN4(VAR15, VAR10);
FUN8(VAR15);
VAR15 = NULL;
}

FUN6("", *VAR10);

if (VAR13 == VAR19) {
(void) FUN2(VAR9, VAR10,
VAR11, VAR12);
}
VAR16 = VAR20;
}

return (VAR16);
}