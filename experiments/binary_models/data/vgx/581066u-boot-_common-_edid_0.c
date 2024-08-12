int FUN1(VAR1 *VAR2, int VAR3,
struct VAR4 *VAR5,
int *VAR6,
bool (*VAR7)(void *VAR8,
const struct VAR4 *VAR5),
void *VAR9)
{
struct VAR10 *VAR11 = (struct VAR10 *)VAR2;
bool VAR12;

if (VAR3 < sizeof(*VAR11) || FUN2(VAR11)) {
FUN3("", VAR13);
return -VAR14;
}

if (!FUN4(*VAR11)) {
FUN3("", VAR13);
return -VAR15;
}

if (!FUN5(*VAR11)) {
FUN3("", VAR13);
return -VAR16;
}


VAR12 = FUN6(VAR11->VAR17.VAR18, 4,
VAR5, VAR7, VAR9);


if (!VAR12 && VAR11->VAR19 && VAR3 >= VAR20) {
struct VAR21 *VAR22 =
(struct VAR21 *)(VAR2 + sizeof(*VAR11));

if (VAR22->VAR23 == VAR24) {
int VAR25 = FUN7(*VAR22);
int VAR26 = VAR22->VAR27;
int VAR28 = VAR25 * sizeof(struct VAR29);

if (VAR26 >= 4 && VAR26 + VAR28 < VAR30)
VAR12 = FUN6(
(VAR1 *)VAR22 + VAR26, VAR25, VAR5,
VAR7, VAR9);
}
}

if (!VAR12)
return -VAR14;

if (VAR11->VAR31 != 1 || VAR11->VAR32 < 4) {
FUN3("",
VAR13, VAR11->VAR31, VAR11->VAR32);
*VAR6 = -1;
} else  {
*VAR6 =
((VAR11->VAR33 & 0x70) >> 3) + 4;
}

VAR5->VAR34 = false;
if (VAR11->VAR19 && (VAR3 >= VAR20)) {
struct VAR21 *VAR22 =
(struct VAR21 *)(VAR2 + sizeof(*VAR11));

if (VAR22->VAR23 == VAR24)
VAR5->VAR34 = FUN8(VAR22);
}

return 0;
}