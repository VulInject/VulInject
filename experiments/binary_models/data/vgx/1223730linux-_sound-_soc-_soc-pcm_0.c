static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = VAR2->VAR6;
struct VAR7 *VAR8 = &VAR6->VAR8;
struct VAR9 *VAR10;
int VAR11 = VAR2->VAR11;

if (!VAR4->VAR12->VAR13)
return;



FUN3(VAR4, VAR11, VAR10) {
struct VAR3 *VAR14 = VAR10->VAR14;
struct VAR15 *VAR16;
struct VAR17 *VAR18;
int VAR19;

FUN4(VAR14, VAR19, VAR18) {

if (!FUN5(VAR18, VAR11))
continue;

VAR16 = FUN6(VAR18, VAR11);

FUN7(VAR8, VAR16);
}


if (VAR14->VAR12->VAR20 == 1) {
struct VAR15 *VAR21 = FUN6(
FUN8(VAR14, 0), VAR11);

FUN7(VAR8, VAR21);
}
}
}