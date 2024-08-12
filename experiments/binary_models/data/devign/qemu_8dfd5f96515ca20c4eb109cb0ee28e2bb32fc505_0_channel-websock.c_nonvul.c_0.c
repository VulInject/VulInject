static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    FUN3(&VAR4->VAR5);
    FUN3(&VAR4->VAR6);
    FUN3(&VAR4->VAR7);
    FUN4(FUN5(VAR4->VAR8));
    if (VAR4->VAR9)
    {
        FUN6(VAR4->VAR9);
    }
    if (VAR4->VAR10)
    {
        FUN7(VAR4->VAR10);
    }
}