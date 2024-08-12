static int FUN1(VAR1 *, int, VAR2 *);
static char *FUN2(VAR3);
void FUN3(VAR3 *, int, struct VAR4 *);
VAR5 FUN4(VAR3, VAR3);
void FUN5(int, struct VAR6 *, struct VAR7 *, int, int,
struct VAR8 *, int);
void FUN6(struct VAR6 *, int, union VAR9 *, int, VAR10);
struct VAR7 *FUN7(int);
static VAR5 FUN8(struct VAR6 *, int);


struct VAR7 *
FUN7(int VAR11)
{
struct VAR7 *VAR12;
VAR3 *VAR13;
struct VAR14 *VAR15;
struct VAR16 *VAR17;
int VAR18 = 0;

VAR12 = (struct VAR7 *)malloc((VAR19)VAR11);
if (VAR12 == NULL) {
FUN9(VAR20, "", VAR21, strerror(VAR22));
FUN10(VAR23);
}

if (VAR24 > 0) {

VAR18 = sizeof (struct VAR25) +
VAR24 * sizeof (struct VAR26);
}

(void) memset((char *)VAR12, 0, (VAR19)VAR11);
VAR13 = (VAR3 *)(VAR12 + 1);

if (VAR27) {

VAR17 = (struct VAR16 *)VAR13;
VAR17->VAR28 = VAR29;
VAR17->VAR30 = FUN11(VAR31);
} else {

VAR15 = (struct VAR14 *)VAR13;

VAR15->VAR32 = FUN11((VAR33)(VAR11 -
(sizeof (struct VAR34) + VAR18)));
}

return (VAR12);
}