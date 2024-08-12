static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    FUN3(&VAR4->VAR5, false);
    FUN3(&VAR4->VAR6, false);
    FUN3(&VAR4->VAR7, false);
    if (VAR4->VAR8)
    {
        FUN4(VAR4);
    }
    FUN5(&VAR4->VAR9, VAR10, VAR4);
    FUN6(&VAR4->VAR9);
    if (VAR4->VAR11)
    {
        FUN7(VAR4->VAR11);
    }
    if (VAR4->VAR8)
    {
        FUN8(FUN9(VAR4->VAR8));
    }
    FUN10(VAR4->VAR12);
    FUN10(VAR4->VAR13);
    FUN10(VAR4->VAR14);
}