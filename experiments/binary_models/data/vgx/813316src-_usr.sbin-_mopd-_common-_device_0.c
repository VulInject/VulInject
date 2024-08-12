extern struct VAR1	*VAR2;		



void
FUN1(char *VAR3, VAR4 *VAR5)
{
struct VAR6	*VAR7;
struct VAR8		*VAR9, *VAR10;

if (FUN2(&VAR9) != 0) {
syslog(VAR11, "");
FUN3(1);
}

for (VAR10 = VAR9; VAR10; VAR10 = VAR10->VAR12) {
VAR7 = (struct VAR6 *)VAR10->VAR13;
if (VAR7->VAR14 != VAR15 || VAR7->VAR16 != VAR17 ||
VAR7->VAR18 != 6)
continue;
if (!strcmp(VAR10->VAR19, VAR3)) {
bcopy(FUN4(VAR7), VAR5, 6);
FUN5(VAR9);
return;
}
}

syslog(VAR11, "", VAR3);
FUN3(1);
}