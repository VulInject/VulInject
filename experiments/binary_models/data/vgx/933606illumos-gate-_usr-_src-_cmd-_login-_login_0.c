static void
FUN1(int VAR1)
{
int	VAR2;
char	*VAR3;
static char	*VAR4	= ""
""VAR5\""VAR6\"";
int	VAR7;
struct VAR8  *VAR9 = (struct VAR8 *)0;
struct utmpx  VAR8;
char	*VAR10;



if ((VAR2 = FUN2(VAR11, 0)) != VAR12) {
VAR13 = VAR14 + VAR2;
FUN3(1);
}

if ((VAR2 = FUN4(VAR11, VAR15, (void **) &VAR3)) !=
VAR12) {
VAR13 = VAR14 + VAR2;
FUN3(1);
}

(void) memset((void *)&VAR8, 0, sizeof (VAR8));
(void) FUN5(&VAR8.VAR16.VAR17);
VAR8.VAR18 = FUN6();

if (VAR19 || VAR20) {
FUN7(VAR8.VAR21, VAR22);
VAR7 = strlen(VAR22) + 1;
if (VAR7 < sizeof (VAR8.VAR21))
VAR8.VAR23 = VAR7;
else
VAR8.VAR23 = sizeof (VAR8.VAR21);
} else if (VAR24) {

FUN7(VAR8.VAR21, VAR25);
VAR7 = strlen(VAR25) + 1;
if (VAR7 < sizeof (VAR8.VAR21))
VAR8.VAR23 = VAR7;
else
VAR8.VAR23 = sizeof (VAR8.VAR21);
} else {
VAR8.VAR23 = 0;
}

FUN7(VAR8.VAR26, VAR3);


VAR10 = FUN8(VAR27);

while ((VAR9 = FUN9()) != NULL) {
if ((VAR9->VAR28 == VAR29 ||
VAR9->VAR28 == VAR30 ||
VAR9->VAR28 == VAR31) &&
((VAR1 && FUN10(VAR9->VAR32, VAR10,
sizeof (VAR9->VAR32)) == 0) ||
VAR9->VAR18 == VAR33)) {
FUN7(VAR8.VAR32, (VAR27+sizeof ("")-1));
(void) memcpy(VAR8.VAR34, VAR9->VAR34,
sizeof (VAR8.VAR34));
VAR8.VAR35.VAR36 = VAR9->VAR35.VAR36;
VAR8.VAR28 = VAR31;
(void) FUN11(&VAR8);
break;
}
}
FUN12();

if (VAR9 == (struct VAR8 *)NULL) {
if (!VAR1) {

(void) FUN13(VAR4);

VAR13 = VAR37;
FUN3(1);
}
} else {



FUN14(VAR38, &VAR8);
}
}