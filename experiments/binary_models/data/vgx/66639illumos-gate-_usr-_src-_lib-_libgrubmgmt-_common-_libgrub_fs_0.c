int
FUN1(VAR1 *VAR2, const char *VAR3)
{
const char *VAR4;
void *VAR5 = NULL;
int VAR6 = 0;
struct ufs_args VAR7 = {VAR8};
char VAR9[VAR10] = "";
int VAR11 = 0;

assert(VAR2);
assert(!VAR2->VAR12);

VAR2->VAR13[0] = 0;

if (strcmp(VAR3, VAR14) == 0) {
(void) FUN2(VAR9, VAR15, sizeof (VAR9));
VAR5 = &VAR7;
VAR6 = sizeof (VAR7);
} else if (strcmp(VAR3, VAR16) != 0) {
return (VAR17);
}


VAR4 = strrchr(VAR2->VAR18, '');
VAR4 = (VAR4 == NULL) ? VAR2->VAR18 : VAR4 + 1;

(void) snprintf(VAR2->VAR13, sizeof (VAR2->VAR13),
VAR19, VAR4);
if (FUN3(VAR2->VAR13) != NULL) {
if ((VAR11 = FUN4(VAR2->VAR18, VAR2->VAR13,
VAR20 | VAR21 | VAR22,
VAR3, VAR5, VAR6, VAR9, sizeof (VAR9))) != 0) {

VAR11 = VAR23;
(void) FUN5(VAR2->VAR13);
}
} else {
VAR11 = VAR23;
}

if (VAR11 != 0)
VAR2->VAR13[0] = 0;


VAR2->VAR12 += (VAR11 == 0);
return (VAR11);
}