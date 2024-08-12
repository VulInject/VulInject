static void
FUN1(VAR1 *VAR2, uint64_t VAR3[])
{
uint_t		VAR4, VAR5;
const char	*VAR6;
VAR7		*VAR8;
VAR9	*VAR10;
VAR11	*VAR12 = FUN2(VAR2);
zoneid_t	VAR13;

FUN3(VAR3, sizeof (VAR3[0]) * VAR14);
VAR13 = FUN4(VAR12->VAR15->VAR16);
VAR8 = FUN5("", 0, VAR2->VAR17, VAR13);
if (VAR8 == NULL)
return;

FUN6(VAR8);

if (VAR8->VAR18 != NULL && VAR8->VAR19 == VAR20) {

(void) FUN7(VAR8, VAR21);

VAR10 = FUN8(VAR8);
for (VAR4 = 0; VAR4 < VAR14; VAR4++) {
VAR6 = VAR22[VAR4].VAR6;
VAR3[VAR4] = 0;
for (VAR5 = 0; VAR5 < VAR8->VAR23; VAR5++) {
if (strcmp(VAR10[VAR5].VAR6, VAR6) != 0)
continue;

switch (VAR10[VAR5].VAR24) {
case VAR25:
case VAR26:
VAR3[VAR4] = VAR10[VAR5].VAR27.VAR28;
break;
case VAR29:
case VAR30:
VAR3[VAR4] = VAR10[VAR5].VAR27.VAR31;
break;
case VAR32:
case VAR33:
VAR3[VAR4] = VAR10[VAR5].VAR27.VAR34;
break;
}
break;
}
}
}

FUN9(VAR8);
FUN10(VAR8);
}