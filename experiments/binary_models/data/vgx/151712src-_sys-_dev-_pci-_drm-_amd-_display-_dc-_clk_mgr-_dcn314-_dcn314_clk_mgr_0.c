static int FUN1(
struct VAR1 *VAR1,
struct VAR2 *VAR3)
{
int VAR4, VAR5;
bool VAR6 = false;

VAR5 = 0;
for (VAR4 = 0; VAR4 < VAR3->VAR7; VAR4++) {
const struct VAR8 *VAR9 = VAR3->VAR10[VAR4];

if (VAR9->signal == VAR11 ||
VAR9->signal == VAR12 ||
VAR9->signal == VAR13)
VAR6 = true;
}

for (VAR4 = 0; VAR4 < VAR1->VAR14; VAR4++) {
const struct VAR15 *VAR16 = VAR1->VAR17[VAR4];


if (VAR16->VAR18 && VAR16->VAR18->VAR19->VAR20 &&
VAR16->VAR18->VAR19->FUN2(VAR16->VAR18))
VAR5++;
}


if (VAR5 == 0 && VAR6)
VAR5 = 1;

return VAR5;
}