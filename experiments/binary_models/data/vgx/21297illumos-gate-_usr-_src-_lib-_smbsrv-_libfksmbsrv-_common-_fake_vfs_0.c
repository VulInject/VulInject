int
FUN1(void)
{
struct stat VAR1;
int VAR2, VAR3;
VAR4 *VAR5;
char *VAR6 = "";

if (VAR7 == NULL) {
VAR7 = &VAR8;
VAR7->VAR9 = FUN2(VAR6);
VAR7->VAR10.VAR11[0] = 1;
VAR7->VAR12 = &VAR13;
}

if (VAR14 == NULL) {
if (FUN3(VAR6, &VAR1) == -1)
return (VAR15);
VAR3 = open(VAR6, VAR16, 0);
if (VAR3 < 0) {
return (VAR15);
}
if (FUN4(VAR3, &VAR1) == -1) {
VAR2 = VAR15;
(void) close(VAR3);
return (VAR2);
}
VAR5 = FUN5(&VAR1, NULL, "", VAR3);

FUN6(VAR5);
VAR14 = VAR5;


VAR17.VAR18 = VAR14;
VAR17.VAR19 = "";
}

return (0);

}