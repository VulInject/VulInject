static void FUN1(struct VAR1 *VAR2,
u32 VAR3, void *VAR4)
{
struct VAR5 *VAR6 = (struct VAR5 *)VAR4;
struct VAR7 *VAR8;

VAR8  = (struct VAR7 *)VAR6->VAR9;

VAR2 = FUN2(VAR8->VAR10);
if (VAR3)
FUN3(&VAR2->VAR11->VAR12, "",
FUN4(VAR3));
FUN5(VAR8->VAR13, 1);


FUN6();

FUN7(&VAR8->VAR14);
}