static bool FUN1(const struct VAR1 *VAR2,
const struct VAR3 *VAR4,
const struct VAR3 *VAR5)
{
struct VAR1 *VAR6 = VAR2->VAR7.VAR8.VAR9;
struct VAR10 *VAR11;
struct VAR12 *VAR13;


if (FUN2(&VAR2->VAR7.VAR14, VAR5->VAR15.VAR16))
return true;


for (FUN3(VAR4->VAR17, VAR13, VAR11)) {
struct VAR18 *VAR19 = VAR11->VAR19;
struct VAR20 *VAR21;

VAR21 =
FUN2(&VAR6->VAR22, VAR19->VAR16);
if (!VAR21)
continue;

if (FUN2(&VAR21->VAR7.VAR14, VAR5->VAR15.VAR16))
return true;
}

return false;
}