FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    if (VAR4->VAR8)
    {
        FUN2(VAR4->VAR8);
        FUN3(VAR4->VAR8);
    }
    if (VAR4->VAR9)
        FUN4(VAR4->VAR9);
    if (VAR4->VAR10)
    {
        VAR11 *VAR12;
        int VAR13;
        VAR13 = FUN5(VAR4->VAR10, &VAR12);
        if (VAR13 == VAR14)
        {
            VAR15 *VAR16;
            FUN6(VAR12);
            while (FUN7(VAR12, 1, &VAR16, NULL) == VAR14)
            {
                if (FUN8(VAR4->VAR10, VAR16) == VAR14)
                    FUN6(VAR12);
                FUN9(VAR16);
            }
            FUN10(VAR12);
        }
        FUN11(VAR4->VAR10);
    }
    if (VAR4->VAR17[VAR18])
        FUN12(VAR4->VAR17[VAR18]);
    if (VAR4->VAR17[VAR19])
        FUN12(VAR4->VAR17[VAR19]);
    if (VAR4->VAR20[VAR18])
        FUN13(VAR4->VAR20[VAR18]);
    if (VAR4->VAR20[VAR19])
        FUN13(VAR4->VAR20[VAR19]);
    if (VAR4->VAR21[VAR18])
        FUN14(VAR4->VAR21[VAR18]);
    if (VAR4->VAR21[VAR19])
        FUN14(VAR4->VAR21[VAR19]);
    if (VAR4->VAR22[VAR18])
        FUN9(VAR4->VAR22[VAR18]);
    if (VAR4->VAR22[VAR19])
        FUN9(VAR4->VAR22[VAR19]);
    if (VAR4->VAR23[0])
        FUN15(VAR4->VAR23[0]);
    if (VAR4->VAR23[1])
        FUN15(VAR4->VAR23[1]);
    if (VAR4->mutex)
        FUN16(VAR4->mutex);
    if (VAR4->VAR24[0])
        FUN16(VAR4->VAR24[0]);
    if (VAR4->VAR24[1])
        FUN16(VAR4->VAR24[1]);
    VAR7 = VAR4->VAR7;
    while (VAR7)
    {
        VAR6 *VAR25 = VAR7->VAR25;
        FUN17(&VAR7->VAR26);
        FUN15(VAR7);
        VAR7 = VAR25;
    }
    return 0;
}