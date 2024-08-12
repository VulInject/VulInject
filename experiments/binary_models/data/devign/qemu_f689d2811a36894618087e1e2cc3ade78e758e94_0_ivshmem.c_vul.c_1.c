static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    int VAR5;
    FUN3(&VAR4->VAR6);
    if (VAR4->VAR7)
    {
        FUN4(VAR4->VAR7);
        FUN5(VAR4->VAR7);
    }
    if (VAR4->VAR8 >= 0)
    {
        void *VAR9 = FUN6(&VAR4->VAR10);
        FUN7(&VAR4->VAR10, FUN8(VAR2));
        FUN9(&VAR4->VAR11, &VAR4->VAR10);
        if (FUN10(VAR9, VAR4->VAR12) == -1)
        {
            FUN11("", strerror(VAR13));
        }
    }
    if (VAR4->VAR14)
    {
        for (VAR5 = 0; VAR5 < VAR4->VAR15; VAR5++)
        {
            if (VAR4->VAR14[VAR5])
            {
                FUN12(VAR4->VAR14[VAR5]);
            }
        }
        FUN13(VAR4->VAR14);
    }
    if (VAR4->VAR16)
    {
        for (VAR5 = 0; VAR5 < VAR4->VAR17; VAR5++)
        {
            FUN14(VAR4, VAR5);
        }
        FUN13(VAR4->VAR16);
    }
    if (FUN15(VAR4, VAR18))
    {
        FUN16(VAR2);
    }
    FUN13(VAR4->VAR19);
}