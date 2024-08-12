static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6;
struct VAR7 *VAR8;

if (!VAR4)
return;

VAR6 = VAR4->VAR6;
VAR8 = (struct VAR7 *)VAR6->VAR9;


if (VAR8->VAR10.VAR11 == VAR12 ||
VAR8->VAR10.VAR11 == VAR13) {
memcpy(VAR6->VAR14, VAR8, VAR15);
FUN3(&VAR6->VAR16);
return;
}


if (VAR8->VAR10.VAR11 == VAR17) {
if (VAR6->VAR18) {
FUN4(VAR2);
FUN5(VAR2);
}

VAR6->update = VAR8->VAR19.VAR20;
if (VAR6->update)
FUN6(&VAR6->VAR21, VAR22);
}
}