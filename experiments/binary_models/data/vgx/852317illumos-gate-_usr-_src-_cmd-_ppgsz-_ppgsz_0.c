static VAR1
FUN1(struct VAR2 *VAR3, uint_t VAR4, pid_t VAR5)
{
size_t			VAR6 = 0;
size_t			VAR7 = VAR8[VAR9 - 1];
prxmap_t		VAR10;
caddr_t			VAR11;
void			*VAR12;
int			VAR13 = -1;
char			VAR14[VAR15];

(void) snprintf(VAR14, VAR15, "", (int)VAR5);
if ((VAR13 = open(VAR14, VAR16)) < 0)
return (VAR6);

if ((VAR12 = FUN2(VAR3, (void *)VAR7, VAR7, VAR17 | VAR18,
VAR19 | VAR20 | VAR21, -1, 0)) == VAR22) {
goto VAR23;
}

VAR11 = FUN3(VAR24, 0, VAR4);
if (FUN4(VAR3, VAR12, VAR7, VAR25, VAR11, 0, 0) < 0) {
goto VAR23;
}


(void) FUN5(VAR3, &VAR7, sizeof (VAR7), (VAR26)VAR12);



while (read(VAR13, &VAR10, sizeof (VAR10)) == sizeof (VAR10)) {
if (VAR10.VAR27 == (VAR26)VAR12)
break;
}
if (VAR10.VAR27 != (VAR26)VAR12)
goto VAR23;

VAR6 = VAR10.VAR28;

VAR23:
if (VAR12 != VAR22) {
if (FUN6(VAR3, VAR12, VAR7) == -1) {
(void) fprintf(VAR29,
"",
VAR30, VAR12);
}
}
if (VAR13 != -1)
(void) close(VAR13);

return (VAR6);
}