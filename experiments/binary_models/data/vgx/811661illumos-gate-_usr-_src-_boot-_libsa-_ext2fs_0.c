static int
FUN1(ino_t VAR1, struct VAR2 *VAR3)
{
struct VAR4 *VAR5 = (struct VAR4 *)VAR3->VAR6;
struct VAR7 *VAR8 = VAR5->VAR9;
struct VAR10 *VAR11;
char *VAR12;
size_t VAR13;
int VAR14, VAR15 = 0;


VAR12 = malloc(VAR8->VAR16);
FUN2(1);
VAR15 = (VAR3->VAR17->VAR18)(VAR3->VAR19, VAR20,
FUN3(VAR8, VAR5->VAR21, VAR1), VAR8->VAR16, VAR12, &VAR13);
if (VAR15)
goto VAR22;
if (VAR13 != VAR8->VAR16) {
VAR15 = VAR23;
goto VAR22;
}

VAR11 = (struct VAR10 *)VAR12;
VAR5->VAR24 = VAR11[FUN4(VAR8, VAR1)];


for (VAR14 = 0; VAR14 < VAR25; VAR14++)
VAR5->VAR26[VAR14] = -1;
VAR5->VAR27 = -1;
VAR5->VAR28 = 0;

VAR22:
free(VAR12);
return (VAR15);	 
}