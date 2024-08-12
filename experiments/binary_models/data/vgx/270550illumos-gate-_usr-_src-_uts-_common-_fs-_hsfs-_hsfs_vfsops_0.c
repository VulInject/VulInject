static int
FUN1(
struct VAR1 *VAR2,
int VAR3,
struct VAR4 *VAR5)
{
struct VAR6 **VAR7;
struct VAR6 *VAR8;

if (FUN2(VAR5, VAR2) != 0)
return (VAR9);


if (VAR3 & VAR10)
return (VAR11);

VAR8 = FUN3(VAR2);

if (VAR8->VAR12->VAR13 != 1)
return (VAR14);


if (FUN4(VAR2))
return (VAR14);

FUN5(&VAR15);
for (VAR7 = &VAR16; *VAR7 != NULL; VAR7 = &(*VAR7)->VAR17) {
if (*VAR7 == VAR8)
break;
}
if (*VAR7 == NULL) {
FUN6(&VAR15);
FUN7("");

}

*VAR7 = VAR8->VAR17;

FUN6(&VAR15);

FUN8(VAR8);
(void) FUN9(VAR8->VAR18, VAR19, 1, (VAR20)0, VAR5, NULL);
FUN10(VAR8->VAR18);

if (VAR8->VAR21 != NULL)
FUN11(VAR8->VAR21, (VAR22)VAR8->VAR23.VAR24);

if (VAR8->VAR25 != NULL)
FUN11(VAR8->VAR25, (VAR22)
(VAR8->VAR26 * sizeof (struct VAR27)));


if (VAR8->VAR28 != NULL)
FUN11(VAR8->VAR28, strlen(VAR8->VAR28) + 1);

FUN12(VAR8->VAR29);
FUN11(VAR8->VAR29, sizeof (struct VAR30));

FUN13(&VAR8->VAR31);
FUN14(&VAR8->VAR32);

FUN11(VAR8, sizeof (*VAR8));
return (0);
}