int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR6;
    int VAR7, VAR8, VAR9, VAR10;
    {
        int VAR11;
        VAR11 = VAR2->VAR12[0].VAR13 + 1;
        FUN2(&VAR6->VAR14, VAR6->VAR14 + VAR11);
        if (VAR11 > VAR6->VAR15)
        {
            FUN2(&VAR6->VAR15, VAR11);
        }
        VAR11 = VAR2->VAR16;
        FUN2(&VAR6->VAR17, VAR6->VAR17 + VAR11);
        if (VAR11 > VAR6->VAR18)
        {
            FUN2(&VAR6->VAR18, VAR11);
        }
    }
    if (FUN3(FUN4(VAR19) && FUN5(VAR4->VAR20)))
    {
        FUN6();
        FUN7("");
        FUN8(VAR2);
        FUN7("");
        FUN9();
    }
    FUN2(&VAR6->VAR21, VAR6->VAR21 - FUN10());
    FUN11(VAR2);
    FUN2(&VAR6->VAR21, VAR6->VAR21 + FUN10());
    FUN2(&VAR6->VAR22, VAR6->VAR22 - FUN10());
    FUN12(VAR2);
    if (VAR2->VAR23 > 0)
    {
        if (FUN3(FUN4(VAR24) && FUN5(VAR4->VAR20)))
        {
            FUN6();
            FUN7("");
            FUN8(VAR2);
            FUN7("");
            FUN9();
        }
        if (FUN13(VAR2))
        {
            FUN12(VAR2);
        }
    }
    FUN2(&VAR6->VAR22, VAR6->VAR22 + FUN10());
    if (FUN3(FUN4(VAR25) && FUN5(VAR4->VAR20)))
    {
        FUN6();
        FUN7("");
        FUN8(VAR2);
        FUN7("");
        FUN9();
    }
    FUN14(VAR2);
    VAR2->VAR26 = VAR4->VAR27.VAR28;
    VAR2->VAR29 = VAR4->VAR27.VAR28;
    VAR2->VAR30 = NULL;
    VAR2->VAR31 = NULL;
    VAR10 = -1;
    for (VAR8 = VAR2->VAR12[0].VAR32; VAR8 != 0; VAR8 = VAR9)
    {
        VAR33 *const VAR34 = &VAR2->VAR12[VAR8];
        TCGOpcode VAR35 = VAR34->VAR35;
        VAR9 = VAR34->VAR32;
        FUN2(&VAR6->VAR36[VAR35], VAR6->VAR36[VAR35] + 1);
        switch (VAR35)
        {
        case VAR37:
        case VAR38:
            FUN15(VAR2, VAR34);
            break;
        case VAR39:
        case VAR40:
            FUN16(VAR2, VAR34);
            break;
        case VAR41:
            if (VAR10 >= 0)
            {
                VAR2->VAR42[VAR10] = FUN17(VAR2);
            }
            VAR10++;
            for (VAR7 = 0; VAR7 < VAR43; ++VAR7)
            {
                target_ulong VAR44;
                VAR44 = FUN18(VAR34->VAR45[VAR7 * 2], 32, 32, VAR34->VAR45[VAR7 * 2 + 1]);
                VAR44 = VAR34->VAR45[VAR7];
                VAR2->VAR46[VAR10][VAR7] = VAR44;
            }
            break;
        case VAR47:
            FUN19(VAR2, FUN20(VAR34->VAR45[0]));
            break;
        case VAR48:
            FUN21(VAR2, VAR2->VAR49);
            FUN22(VAR2, FUN23(VAR34->VAR45[0]), VAR2->VAR29);
            break;
        case VAR50:
            FUN24(VAR2, VAR34);
            break;
        default:
            FUN25(FUN26(VAR35));
            FUN27(VAR2, VAR34);
            break;
        }
        FUN28(VAR2);
        if (FUN3((void *)VAR2->VAR29 > VAR2->VAR51))
        {
            return -1;
        }
    }
    FUN25(VAR10 >= 0);
    VAR2->VAR42[VAR10] = FUN17(VAR2);
    if (!FUN29(VAR2))
    {
        return -1;
    }
    if (!FUN30(VAR2))
    {
        return -1;
    }
    FUN31((VAR52)VAR2->VAR26, (VAR52)VAR2->VAR29);
    return FUN17(VAR2);
}