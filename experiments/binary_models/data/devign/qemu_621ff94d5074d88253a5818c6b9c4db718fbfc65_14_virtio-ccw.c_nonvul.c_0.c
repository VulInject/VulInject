static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(&VAR6->VAR8);
    VAR3 *VAR9 = NULL;
    FUN4(VAR8, FUN5(&VAR2->VAR10));
    FUN6(FUN7(VAR8), true, "", &VAR9);
    FUN8(VAR4, VAR9);
}