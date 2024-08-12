static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    FUN3(&VAR4->VAR5);
    FUN3(&VAR4->VAR6);
    FUN3(&VAR4->VAR7);
    FUN4(&VAR4->VAR8);
    if (FUN5(&VAR4->VAR9))
    {
        FUN6(&VAR4->VAR8, VAR10, VAR4);
        FUN7(&VAR4->VAR9);
    }
    FUN8(VAR4->VAR11);
    FUN8(VAR4->VAR12);
    FUN8(VAR4->VAR13);
}