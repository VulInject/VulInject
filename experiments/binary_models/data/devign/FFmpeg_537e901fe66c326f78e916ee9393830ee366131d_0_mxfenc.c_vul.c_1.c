static void FUN1(VAR1 *VAR2, enum MXFMetadataSetType VAR3, const char *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    int VAR10, VAR11 = VAR2->VAR12 + 1;
    int VAR13 = FUN2(VAR4);
    int VAR14 = 0;
    if (VAR3 == VAR15)
    {
        if (VAR6->VAR16)
            VAR14 = FUN3(VAR2, VAR2->VAR17);
        FUN4(VAR9, 0x013600);
        FUN5(VAR2, "", VAR9->VAR18 - 16);
        FUN6(VAR9, 92 + VAR13 + (16 * VAR11) + (16 * VAR14) + 12 * VAR6->VAR16);
    }
    else
    {
        FUN4(VAR9, 0x013700);
        FUN5(VAR2, "", VAR9->VAR18 - 16);
        FUN6(VAR9, 112 + VAR13 + (16 * VAR11) + 12 * VAR6->VAR16);
    }
    FUN7(VAR9, 16, 0x3C0A);
    FUN8(VAR9, VAR3, 0);
    FUN9(VAR2, VAR19, "", VAR3);
    FUN5(VAR2, "", VAR9->VAR18 - 16);
    FUN7(VAR9, 32, 0x4401);
    FUN10(VAR2, VAR3 == VAR20);
    FUN5(VAR2, "", VAR9->VAR18 - 16);
    if (VAR13)
        FUN11(VAR9, 0x4402, VAR4);
    FUN7(VAR9, 8, 0x4405);
    FUN12(VAR9, VAR6->VAR21);
    FUN7(VAR9, 8, 0x4404);
    FUN12(VAR9, VAR6->VAR21);
    FUN7(VAR9, VAR11 * 16 + 8, 0x4403);
    FUN13(VAR9, VAR11);
    FUN8(VAR9, VAR3 == VAR15 ? VAR22 : VAR22 + VAR23, -1);
    for (VAR10 = 0; VAR10 < VAR2->VAR12; VAR10++)
        FUN8(VAR9, VAR3 == VAR15 ? VAR22 : VAR22 + VAR23, VAR10);
    if (VAR6->VAR16)
    {
        FUN7(VAR9, VAR14 * 16 + 8, 0x4406);
        FUN13(VAR9, VAR14);
        for (VAR10 = 0; VAR10 < VAR14; VAR10++)
            FUN8(VAR9, VAR24, VAR6->VAR25 - VAR14 + VAR10);
    }
    if (VAR3 == VAR20)
    {
        FUN7(VAR9, 16, 0x4701);
        if (VAR2->VAR12 > 1)
        {
            FUN8(VAR9, VAR26, 0);
            FUN14(VAR2);
        }
        else
            FUN8(VAR9, VAR27, 0);
    }
    FUN15(VAR2, VAR6->VAR28, VAR3);
    FUN16(VAR2, VAR6->VAR28, VAR3);
    FUN17(VAR2, VAR6->VAR28, VAR3);
    for (VAR10 = 0; VAR10 < VAR2->VAR12; VAR10++)
    {
        VAR29 *VAR30 = VAR2->VAR31[VAR10];
        FUN15(VAR2, VAR30, VAR3);
        FUN16(VAR2, VAR30, VAR3);
        FUN18(VAR2, VAR30, VAR3);
        if (VAR3 == VAR20)
        {
            VAR32 *VAR33 = VAR30->VAR7;
            VAR34[VAR33->VAR35].FUN19(VAR2, VAR30);
        }
    }
}