static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
int VAR7 = VAR4->VAR8.VAR9 ?: 1;
int VAR10;


VAR6->VAR11 = 0;
VAR6->VAR12 &= ~FUN2(VAR13);

if (FUN3(VAR4))
return;

if (VAR7 >= 10)
return;

if (!FUN4(VAR14, &VAR2->VAR15)) {
if (VAR16.VAR17 != VAR18)
return;
VAR10 = 2;
} else {
int VAR19 = VAR7 * VAR4->VAR8.VAR20;

if (FUN5(!VAR19))
return;

VAR10 = FUN6(VAR21, 1, 306 / VAR19);
}


VAR6->VAR11 = 1 + VAR10;
VAR6->VAR12 |= FUN2(VAR13);
}