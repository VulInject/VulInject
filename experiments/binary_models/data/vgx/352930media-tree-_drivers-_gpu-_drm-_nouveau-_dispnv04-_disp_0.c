void
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = FUN3(VAR2);
struct VAR7 *VAR8;
struct VAR9 *VAR10;


FUN4(VAR8, &VAR2->VAR11.VAR12, VAR13.VAR13.VAR14)
VAR8->FUN5(&VAR8->VAR13.VAR13);

FUN4(VAR10, &VAR2->VAR11.VAR15, VAR13.VAR14)
VAR10->FUN6(&VAR10->VAR13);

FUN7(VAR2, 0);

FUN8(VAR2)->VAR16 = NULL;
FUN9(VAR4);

FUN10(&VAR6->VAR17.VAR18.VAR19);
}