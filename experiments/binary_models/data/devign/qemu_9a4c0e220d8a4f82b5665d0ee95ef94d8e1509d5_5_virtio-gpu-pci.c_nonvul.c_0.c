static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = &VAR6->VAR9;
    VAR10 *VAR9 = FUN3(&VAR6->VAR9);
    int VAR11;
    FUN4(VAR9, FUN5(&VAR2->VAR12));
    FUN6(VAR2);
    FUN7(FUN8(VAR9), true, "", VAR4);
    for (VAR11 = 0; VAR11 < VAR8->VAR13.VAR14; VAR11++)
    {
        FUN9(FUN8(VAR8->VAR15[VAR11].VAR16), FUN8(VAR2), "", VAR4);
    }
}