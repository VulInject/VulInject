void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
unsigned int VAR7;
int VAR8;

if (VAR4->VAR9 & VAR10)
return;


if (!(VAR4->VAR9 & VAR11) && VAR4->VAR12) {
if (VAR4->VAR13 && !FUN2(&VAR4->VAR13->VAR14))
FUN3(VAR2, VAR4, 0);
return;
}

VAR6 = &VAR4->VAR6;

for (VAR7 = 1; VAR7 < VAR6->VAR15; VAR7++) {
struct VAR16 *VAR17, *VAR18;
struct VAR19 *VAR20;

if (VAR6->VAR21 >= 2)
return;

VAR20 = FUN4(VAR2, VAR4, VAR7);
if (!VAR20)
continue;

if (!VAR20->VAR22 || VAR20->VAR23)
continue;

FUN5(VAR17, VAR18, &VAR20->VAR14,
VAR14) {
if (VAR17->VAR24)
continue;

VAR8 = FUN3(VAR2, VAR4, VAR7);
if (VAR8)
VAR17->VAR24 = 1;
}
}
}