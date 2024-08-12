static void FUN1(struct VAR1 *VAR2, VAR3 **VAR4)
{
    int VAR5, VAR6;
    VAR3 *VAR7 = NULL;
    VAR8 *VAR9 = FUN2(VAR2);
    VAR2->VAR10[VAR11] = 0x30;
    VAR2->VAR10[VAR12] = 0x01;
    VAR2->VAR10[VAR13] = 0x10;
    VAR2->VAR10[0x60] = 0x30;
    FUN3(VAR9);
    if (VAR9->VAR14 != VAR15)
    {
        VAR6 = FUN4(VAR2, 0x70, VAR9->VAR16, true, false, &VAR7);
        assert(!VAR6 || VAR6 == -VAR17);
        if (VAR6 && VAR9->VAR14 == VAR18)
        {
            FUN5(&VAR7, ""
                                    "");
            FUN6(VAR4, VAR7);
            return;
        }
        assert(!VAR7 || VAR9->VAR14 == VAR19);
        FUN7(VAR7);
    }
    if (VAR9->VAR16 > VAR20)
    {
        VAR9->VAR16 = VAR20;
    }
    while (VAR9->VAR16 & (VAR9->VAR16 - 1))
    {
        VAR9->VAR16++;
    }
    if (VAR9->VAR16 < 1)
    {
        VAR9->VAR16 = 1;
    }
    if (VAR9->VAR21 > VAR22)
    {
        VAR9->VAR21 = VAR22;
    }
    if (VAR9->VAR21 < 1)
    {
        VAR9->VAR21 = 1;
    }
    if (FUN8(VAR9, VAR23))
    {
        VAR9->VAR24 = 7;
    }
    else
    {
        VAR9->VAR24 = 0;
    }
    VAR9->VAR25 = FUN9(VAR26, VAR27, VAR9);
    FUN10(&VAR9->VAR28, FUN11(VAR9), "", VAR29);
    FUN12(&VAR9->VAR30, FUN11(VAR9), &VAR31, VAR9, "", VAR32);
    FUN12(&VAR9->VAR33, FUN11(VAR9), &VAR34, VAR9, "", 0x400);
    FUN12(&VAR9->VAR35, FUN11(VAR9), &VAR36, VAR9, "", VAR37);
    FUN12(&VAR9->VAR38, FUN11(VAR9), &VAR39, VAR9, "", VAR40);
    FUN13(&VAR9->VAR28, 0, &VAR9->VAR30);
    FUN13(&VAR9->VAR28, VAR41, &VAR9->VAR33);
    FUN13(&VAR9->VAR28, VAR42, &VAR9->VAR35);
    FUN13(&VAR9->VAR28, VAR43, &VAR9->VAR38);
    for (VAR5 = 0; VAR5 < VAR9->VAR44; VAR5++)
    {
        VAR45 *VAR46 = &VAR9->VAR47[VAR5];
        uint32_t VAR48 = VAR41 + 0x400 + 0x10 * VAR5;
        VAR46->VAR9 = VAR9;
        FUN12(&VAR46->VAR28, FUN11(VAR9), &VAR49, VAR46, VAR46->VAR50, 0x10);
        FUN13(&VAR9->VAR28, VAR48, &VAR46->VAR28);
    }
    FUN14(VAR2, 0, VAR51 | VAR52, &VAR9->VAR28);
    if (FUN15(VAR2->VAR53) || FUN8(VAR9, VAR54))
    {
        VAR6 = FUN16(VAR2, 0xa0);
        assert(VAR6 >= 0);
    }
    if (VAR9->VAR55 != VAR15)
    {
        FUN17(VAR2, VAR9->VAR16, &VAR9->VAR28, 0, VAR56, &VAR9->VAR28, 0, VAR57, 0x90);
    }
}