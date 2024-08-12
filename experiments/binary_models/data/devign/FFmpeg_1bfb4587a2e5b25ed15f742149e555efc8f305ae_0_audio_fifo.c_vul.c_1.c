static void FUN1(const TestStruct VAR1)
{
    int VAR2, VAR3;
    void **VAR4 = NULL;
    VAR5 *VAR6 = FUN2(VAR1.VAR7, VAR1.VAR8, VAR1.VAR9);
    if (!VAR6)
    {
        FUN3("");
    }
    VAR2 = FUN4(VAR6, VAR1, VAR1.VAR9, 0);
    if (VAR2 < 0)
    {
        FUN3("");
    }
    FUN5("", VAR2);
    VAR2 = FUN4(VAR6, VAR1, VAR1.VAR9, 0);
    if (VAR2 < 0)
    {
        FUN3("");
    }
    FUN5("", VAR2);
    FUN5("", FUN6(VAR6));
    VAR2 = FUN7(VAR6, &VAR4, VAR1.VAR9);
    if (VAR2 < 0)
    {
        FUN3("");
    }
    FUN5("", VAR2);
    FUN8(&VAR1, VAR4, VAR2);
    FUN5("", FUN6(VAR6));
    VAR2 = FUN9(VAR6, VAR4, VAR6->VAR10);
    if (VAR2 < 0)
    {
        FUN3("");
    }
    FUN5("");
    FUN8(&VAR1, VAR4, VAR2);
    FUN5("");
    FUN5("");
    for (VAR3 = 0; VAR3 < VAR6->VAR10; ++VAR3)
    {
        VAR2 = FUN10(VAR6, VAR4, 1, VAR3);
        if (VAR2 < 0)
        {
            FUN3("");
        }
        FUN5("", VAR3);
        FUN8(&VAR1, VAR4, VAR2);
    }
    FUN5("");
    VAR2 = FUN11(VAR6, VAR6->VAR10);
    if (VAR2 < 0)
    {
        FUN3("");
    }
    if (VAR6->VAR10)
    {
        FUN3("");
    }
    for (VAR3 = 0; VAR3 < VAR6->VAR11; ++VAR3)
    {
        FUN12(&VAR4[VAR3]);
    }
    FUN12(&VAR4);
    FUN13(VAR6);
}