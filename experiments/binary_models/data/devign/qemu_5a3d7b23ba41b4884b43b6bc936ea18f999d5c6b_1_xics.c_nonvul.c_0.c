static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR3 *VAR7 = NULL;
    int VAR8;
    if (!VAR6->VAR9)
    {
        FUN3(VAR4, "");
        return;
    }
    FUN4("", VAR10);
    FUN4("", VAR11);
    FUN4("", VAR12);
    FUN4("", VAR13);
    FUN5(VAR14, VAR15);
    FUN5(VAR16, VAR17);
    FUN5(VAR18, VAR19);
    FUN5(VAR20, VAR21);
    FUN6(FUN7(VAR6->VAR22), true, "", &VAR7);
    if (VAR7)
    {
        FUN8(VAR4, VAR7);
        return;
    }
    for (VAR8 = 0; VAR8 < VAR6->VAR9; VAR8++)
    {
        FUN6(FUN7(&VAR6->VAR23[VAR8]), true, "", &VAR7);
        if (VAR7)
        {
            FUN8(VAR4, VAR7);
            return;
        }
    }
}