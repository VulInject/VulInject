void
FUN1(struct VAR1 *VAR2)
{
static int	 VAR3 = -1;
struct VAR4	*VAR5 = (struct VAR4 *)((char *)VAR2 + VAR2->VAR6);
struct VAR4	*VAR7, *VAR8[VAR9];
char		 VAR10[VAR11];
char		*VAR12;

if (VAR5->VAR13 == VAR14)
return;

FUN2(VAR2->VAR15, VAR5, VAR8);

if (VAR16 && VAR8[VAR17]->VAR13 != VAR5->VAR13) {
return;
}

if (strlen(VAR18.VAR19.VAR20)) {
if (!VAR8[VAR21])
return;
VAR12 = ((struct VAR22 *)VAR8[VAR21])->
VAR20;
if (strcmp(VAR12, VAR18.VAR19.VAR20))
return;
}

if (VAR3 != VAR5->VAR13) {
VAR3 = VAR5->VAR13;
FUN3(VAR5->VAR13);
FUN4(VAR5->VAR13);
}

VAR7 = VAR8[VAR23];
if ((VAR5 = VAR8[VAR24]) == NULL)
return;

FUN5(VAR5, VAR7, VAR2->VAR25, FUN6(VAR5->VAR13));
FUN7(VAR5, VAR8[VAR26], VAR2->VAR27,
FUN6(VAR5->VAR13));

FUN5(VAR8[VAR17], NULL, VAR28,
FUN8(VAR5->VAR13));

FUN9(VAR2->VAR25, "");
FUN10("", VAR2->VAR29.VAR30,
VAR2->VAR29.VAR31);
if (VAR2->VAR29.VAR32)
FUN10("", VAR2->VAR29.VAR32);
else
FUN10("", "");
FUN11((VAR2->VAR29.VAR33 & VAR34) ? '' : '');
FUN10("", VAR2->VAR35,
FUN12(VAR2->VAR36, VAR10));
if (VAR37 && VAR8[VAR21])
FUN10("", FUN13(VAR8[VAR21]));
FUN11('');
}