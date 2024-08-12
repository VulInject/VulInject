int
FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3)
{
char **VAR4;
char **VAR5;
int VAR6;
char **VAR7;
struct pid VAR8;

if (FUN2(VAR9, (VAR10)VAR1->VAR11, &VAR8,
sizeof (VAR8)) != sizeof (VAR8)) {
FUN3("");
return (-1);
}

FUN3("", VAR8.VAR12);
if ((VAR6 = FUN4(VAR9, VAR1, VAR3, &VAR4, &VAR5)) != 0) {
FUN3("", VAR6);
return (VAR6);
}

FUN3("");
for (VAR7 = VAR4; *VAR7 != NULL; VAR7++)
FUN5(*VAR7);
FUN3("");
for (VAR7 = VAR5; *VAR7 != NULL; VAR7++)
FUN5(*VAR7);

(void) free(VAR4);
(void) free(VAR5);

return (0);
}