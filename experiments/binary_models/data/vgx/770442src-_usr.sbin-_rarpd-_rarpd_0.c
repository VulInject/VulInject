void
FUN1(char *VAR1, struct VAR2 *VAR3)
{
struct VAR4 *VAR5, *VAR6;
struct VAR7 *VAR8;
VAR9 *VAR10 = VAR3->VAR11;
struct VAR12 *VAR13, **VAR14 = &VAR3->VAR15;
struct in_addr VAR16;
int VAR17 = 0;

if (FUN2(&VAR5) != 0)
FUN3("", strerror(VAR18));

for (VAR6 = VAR5; VAR6; VAR6 = VAR6->VAR19) {
if (strcmp(VAR6->VAR20, VAR1))
continue;
if (VAR6->VAR21 == NULL)
continue;
VAR8 = (struct VAR7 *) VAR6->VAR21;
if (VAR8->VAR22 == VAR23 &&
VAR8->VAR24 == VAR25 && VAR8->VAR26 == 6) {
memcpy((VAR27)VAR10, (VAR27)FUN4(VAR8), 6);
if (VAR28)
fprintf(VAR29, "",
VAR6->VAR20,
VAR10[0], VAR10[1], VAR10[2],
VAR10[3], VAR10[4], VAR10[5]);
VAR17 = 1;
} else if (VAR8->VAR22 == VAR30) {
VAR13 = malloc(sizeof (struct VAR12));
if (VAR13 == NULL)
FUN3("",
strerror(VAR18));
VAR13->VAR31 = NULL;
VAR13->VAR32 =
((struct VAR33 *) VAR6->VAR21)->
VAR34.VAR35;
VAR13->VAR36 =
((struct VAR33 *) VAR6->VAR37)->
VAR34.VAR35;

if (VAR13->VAR36 == 0)
VAR13->VAR36 =
FUN5(VAR13->VAR32);
if (VAR28) {
VAR16.VAR35 = VAR13->VAR32;
fprintf(VAR29, "",
FUN6(VAR16));
}
*VAR14 = VAR13;
VAR14 = &VAR13->VAR31;
}
}
FUN7(VAR5);
if (!VAR17)
FUN3("", VAR1);
}