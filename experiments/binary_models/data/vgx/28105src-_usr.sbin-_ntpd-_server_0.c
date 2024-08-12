int
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, VAR5 *VAR6)
{
struct VAR7	*VAR8, *VAR9, *VAR10;
struct VAR11		*VAR12, *VAR13;
struct VAR14		*VAR15;
struct VAR16		*VAR17;
VAR18		*VAR19;
size_t			 VAR20 = sizeof(struct VAR21);
u_int			 VAR22 = 0;
int			 VAR23 = VAR24, VAR25 = 0;

FUN2(VAR10, &VAR4->VAR26, VAR27) {
switch (VAR10->VAR15.VAR28) {
case VAR29:
if (FUN3(&VAR12) == -1)
FUN4("");

for (VAR13 = VAR12; VAR13 != NULL; VAR13 = VAR13->VAR30) {
VAR15 = VAR13->VAR31;
if (VAR15 == NULL || FUN5(VAR15) == 0)
continue;
if (VAR15->VAR32 == VAR33) {
VAR17 = VAR13->VAR34;
VAR25 = VAR17->VAR35;
}
if (VAR15->VAR32 != VAR36 &&
VAR15->VAR32 != VAR37)
continue;
if (VAR10->VAR38 != -1 && VAR25 != VAR10->VAR38)
continue;

if (VAR15->VAR32 == VAR36 &&
((struct VAR39 *)VAR15)->VAR40.VAR41 ==
VAR42)
continue;

if (VAR15->VAR32 == VAR37) {
VAR19 = ((struct VAR43 *)VAR15)->
VAR44.VAR45;
if (memcmp(VAR19, &VAR46, VAR20) == 0)
continue;
}

if ((VAR8 = calloc(1, sizeof(struct VAR7))) ==
NULL)
FUN4("");

memcpy(&VAR8->VAR15, VAR15, FUN5(VAR15));
VAR8->VAR38 = VAR25;

FUN6(&VAR4->VAR26, VAR8, VAR27);
}

FUN7(VAR12);
default:
continue;
}
}


for (VAR8 = FUN8(&VAR4->VAR26); VAR8; ) {
switch (VAR8->VAR15.VAR28) {
case VAR36:
if (((struct VAR39 *)&VAR8->VAR15)->VAR47 == 0)
((struct VAR39 *)&VAR8->VAR15)->VAR47 =
VAR2->VAR48;
break;
case VAR37:
if (((struct VAR43 *)&VAR8->VAR15)->VAR49 == 0)
((struct VAR43 *)&VAR8->VAR15)->VAR49 =
VAR2->VAR48;
break;
case VAR29:
VAR9 = FUN9(VAR8, VAR27);
FUN10(&VAR4->VAR26, VAR8, VAR27);
free(VAR8);
VAR8 = VAR9;
continue;
default:
FUN11("");
}

FUN12("",
FUN13((struct VAR14 *)&VAR8->VAR15),
FUN14(VAR8->VAR38));

if ((VAR8->VAR50 = socket(VAR8->VAR15.VAR28, VAR51, 0)) == -1)
FUN4("");

if (VAR8->VAR15.VAR28 == VAR36 && FUN15(VAR8->VAR50,
VAR52, VAR53, &VAR23, sizeof(VAR23)) == -1)
FUN16("");

if (VAR8->VAR38 != -1 &&
FUN15(VAR8->VAR50, VAR54, VAR55, &VAR8->VAR38,
sizeof(VAR8->VAR38)) == -1)
FUN4("");

if (FUN17(VAR8->VAR50, (struct VAR14 *)&VAR8->VAR15,
FUN5((struct VAR14 *)&VAR8->VAR15)) == -1) {
FUN16("",
FUN13((struct VAR14 *)&VAR8->VAR15));
close(VAR8->VAR50);
VAR9 = FUN9(VAR8, VAR27);
FUN10(&VAR4->VAR26, VAR8, VAR27);
free(VAR8);
VAR8 = VAR9;
continue;
}
VAR22++;
VAR8 = FUN9(VAR8, VAR27);
}

*VAR6 = VAR22;

return (0);
}