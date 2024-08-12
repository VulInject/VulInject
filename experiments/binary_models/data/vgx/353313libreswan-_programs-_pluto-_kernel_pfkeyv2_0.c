static bool FUN1(VAR1 *VAR2, const struct VAR3 *VAR4,
struct VAR5 *VAR5)
{
const struct VAR6 *VAR7 =
FUN2(VAR2, const struct VAR6);
if (VAR7 == NULL) {
FUN3(VAR5, VAR8, "");
return false;
}
if (FUN4(VAR9)) {
FUN5(VAR10, VAR5, VAR7, "");
}

unsigned VAR11 = ((VAR7->VAR12 * sizeof(VAR13) -
sizeof(struct VAR6)) / sizeof(struct VAR14));
for (unsigned VAR15 = 0; VAR15 < VAR11; VAR15++) {

const struct VAR14 *VAR16 =
FUN2(VAR2, const struct VAR14);
if (VAR16 == NULL) {
FUN3(VAR5, VAR8, "");
return false;
}

enum sadb_exttype VAR17 = VAR7->VAR18;
if (FUN4(VAR9)) {
FUN6(VAR10, VAR5, VAR17, VAR16, "");
}

const struct VAR19 *VAR19 = FUN7(VAR4, VAR20,
VAR16->VAR21);
if (VAR19 != NULL) {
FUN8(VAR19);
}
}
return true;
}