static void FUN1(void *VAR1, struct VAR2 *VAR3, int VAR4,
struct VAR5 *VAR6)
{
struct VAR7 *VAR8 = (struct VAR7 *)VAR1;
FUN2(VAR8);


VAR8->VAR9 =
FUN3((VAR10)sizeof(struct VAR7));
VAR8->VAR11 = FUN3(VAR6->VAR12 -
sizeof(struct VAR7));
VAR8->VAR13 = VAR8->VAR11;
VAR8->VAR14 = 0xfffc0000;
if (VAR6->VAR15)
VAR8->VAR14 = FUN3((VAR10)VAR6->VAR16);


if (VAR17)
FUN4(VAR8, VAR6->VAR18);


if (strlen(VAR6->VAR19))
FUN5(VAR8, VAR6->VAR19);

VAR8->VAR20 = FUN6(VAR8);
}