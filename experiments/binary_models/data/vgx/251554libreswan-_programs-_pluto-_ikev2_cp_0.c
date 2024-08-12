bool FUN1(const struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct pbs_out VAR5;
struct ikev2_cp VAR6 = {
.VAR7 = VAR8,
.VAR9 = VAR10,
};

FUN2("", FUN3(&VAR11, VAR6.VAR9));

if (!FUN4(&VAR6, &VAR12, VAR4, &VAR5))
return false;

struct VAR13 *VAR14 = VAR2->VAR15.VAR16;
bool VAR17[VAR18] = {0};
bool VAR19 = false;

FUN5(VAR20, VAR21) {
if (VAR14->VAR22[VAR20->VAR23] != NULL) {
FUN2("", VAR20->VAR24);
VAR17[VAR20->VAR23] = true;
}
const VAR25 *VAR26 = &VAR14->VAR27->VAR2.VAR26.VAR28;
if (VAR26->VAR29[VAR20->VAR23].VAR30 > 0) {
FUN2("", VAR20->VAR24);
VAR17[VAR20->VAR23] = true;
}
VAR19 |= VAR17[VAR20->VAR23];
}

if (!VAR19) {
FUN6(VAR2->VAR15.VAR31, VAR32,
"");
return false;
}

FUN5(VAR20, VAR21) {
if (VAR17[VAR20->VAR23]) {
if (!FUN7(VAR20->VAR33,
NULL, "", &VAR5) ||
!FUN7(VAR20->VAR34,
NULL, "", &VAR5)) {
return false;
}
}
}
if (!FUN7(VAR35, NULL, "", &VAR5)) {
return false;
}

FUN8(&VAR5);
return true;
}