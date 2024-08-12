static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR2->VAR7;
    VAR8 *VAR9, *VAR10;
    int VAR11, VAR12;
    VAR10 = NULL;
    for (VAR12 = 0; VAR12 < VAR2->VAR13; VAR12++)
    {
        VAR9 = &VAR2->VAR14[VAR12]->VAR15;
        if (VAR9->VAR16 == VAR17)
            VAR10 = VAR9;
    }
    FUN2(VAR2, VAR18);
    FUN3(VAR2);
    FUN4(&VAR2->VAR7);
    if (!FUN5(&VAR2->VAR7) && VAR10)
    {
        VAR11 = FUN6(VAR7);
        FUN7(VAR7, 4, VAR19);
        FUN8(VAR7, VAR11);
        FUN7(VAR7, VAR4->VAR20, VAR19);
        FUN9(VAR7, VAR10->VAR21);
    }
    FUN10(VAR4);
    return 0;
}