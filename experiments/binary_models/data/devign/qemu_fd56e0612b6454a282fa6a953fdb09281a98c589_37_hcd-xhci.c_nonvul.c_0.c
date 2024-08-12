static void FUN1(struct VAR1 *VAR2, VAR3 **VAR4)
{
    int VAR5, VAR6;
    VAR3 *VAR7 = NULL;
    VAR8 *VAR9 = FUN2(VAR2);
    VAR2->VAR10[VAR11] = 0x30;
    VAR2->VAR10[VAR12] = 0x01;
    VAR2->VAR10[VAR13] = 0x10;
    VAR2->VAR10[0x60] = 0x30;
    if (strcmp(FUN3(FUN4(VAR2)), VAR14) == 0)
    {
        VAR9->VAR15 = true;
    }
    if (VAR9->VAR16 > VAR17)
    {
        VAR9->VAR16 = VAR17;
    }
    while (VAR9->VAR16 & (VAR9->VAR16 - 1))
    {
        VAR9->VAR16++;
    }
    if (VAR9->VAR16 < 1)
    {
        VAR9->VAR16 = 1;
    }
    if (VAR9->VAR18 > VAR19)
    {
        VAR9->VAR18 = VAR19;
    }
    if (VAR9->VAR18 < 1)
    {
        VAR9->VAR18 = 1;
    }
    if (FUN5(VAR9, VAR20))
    {
        VAR9->VAR21 = 7;
    }
    else
    {
        VAR9->VAR21 = 0;
    }
    if (VAR9->VAR22 != VAR23)
    {
        VAR6 = FUN6(VAR2, 0x70, VAR9->VAR16, true, false, &VAR7);
        assert(!VAR6 || VAR6 == -VAR24);
        if (VAR6 && VAR9->VAR22 == VAR25)
        {
            FUN7(&VAR7, ""
                                    "");
            FUN8(VAR4, VAR7);
            return;
        }
        assert(!VAR7 || VAR9->VAR22 == VAR26);
        FUN9(VAR7);
    }
    FUN10(VAR9);
    VAR9->VAR27 = FUN11(VAR28, VAR29, VAR9);
    FUN12(&VAR9->VAR30, FUN4(VAR9), "", VAR31);
    FUN13(&VAR9->VAR32, FUN4(VAR9), &VAR33, VAR9, "", VAR34);
    FUN13(&VAR9->VAR35, FUN4(VAR9), &VAR36, VAR9, "", 0x400);
    FUN13(&VAR9->VAR37, FUN4(VAR9), &VAR38, VAR9, "", VAR39);
    FUN13(&VAR9->VAR40, FUN4(VAR9), &VAR41, VAR9, "", VAR42);
    FUN14(&VAR9->VAR30, 0, &VAR9->VAR32);
    FUN14(&VAR9->VAR30, VAR43, &VAR9->VAR35);
    FUN14(&VAR9->VAR30, VAR44, &VAR9->VAR37);
    FUN14(&VAR9->VAR30, VAR45, &VAR9->VAR40);
    for (VAR5 = 0; VAR5 < VAR9->VAR46; VAR5++)
    {
        VAR47 *VAR48 = &VAR9->VAR49[VAR5];
        uint32_t VAR50 = VAR43 + 0x400 + 0x10 * VAR5;
        VAR48->VAR9 = VAR9;
        FUN13(&VAR48->VAR30, FUN4(VAR9), &VAR51, VAR48, VAR48->VAR52, 0x10);
        FUN14(&VAR9->VAR30, VAR50, &VAR48->VAR30);
    }
    FUN15(VAR2, 0, VAR53 | VAR54, &VAR9->VAR30);
    if (FUN16(FUN17(VAR2)) || FUN5(VAR9, VAR55))
    {
        VAR6 = FUN18(VAR2, 0xa0);
        assert(VAR6 > 0);
    }
    if (VAR9->VAR56 != VAR23)
    {
        FUN19(VAR2, VAR9->VAR16, &VAR9->VAR30, 0, VAR57, &VAR9->VAR30, 0, VAR58, 0x90, NULL);
    }
}