static void FUN1(VAR1 *VAR2, void *VAR3, int VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    VAR9 *VAR10 = &VAR8->VAR10;
    VAR11 *VAR12 = FUN3(VAR2);
    int VAR13 = FUN4(VAR8);
    uint32_t VAR14[] = {FUN5(28), FUN5(40), 0xffffffff, 0xffffffff};
    uint32_t VAR15 = FUN6() ? FUN7() : VAR16;
    uint32_t VAR17 = FUN6() ? FUN8() : 1000000000;
    uint32_t VAR18[64];
    size_t VAR19;
    uint32_t VAR20 = VAR21 * VAR22;
    uint32_t VAR23[] = {0, FUN5(VAR6->VAR24)};
    int VAR25 = FUN9(VAR21, FUN10(VAR8));
    VAR26 *VAR27;
    int VAR28;
    uint32_t VAR29[VAR30];
    int VAR31;
    VAR27 = FUN11(VAR32, VAR13);
    if (VAR27)
    {
        VAR28 = FUN12(VAR27);
        FUN13((FUN14(VAR3, VAR4, "", VAR28)));
    }
    FUN13((FUN14(VAR3, VAR4, "", VAR13)));
    FUN13((FUN15(VAR3, VAR4, "", "")));
    FUN13((FUN14(VAR3, VAR4, "", VAR10->VAR33[VAR34])));
    FUN13((FUN14(VAR3, VAR4, "", VAR10->VAR35)));
    FUN13((FUN14(VAR3, VAR4, "", VAR10->VAR35)));
    FUN13((FUN14(VAR3, VAR4, "", VAR10->VAR36)));
    FUN13((FUN14(VAR3, VAR4, "", VAR10->VAR36)));
    if (VAR12->VAR37)
    {
        FUN13((FUN14(VAR3, VAR4, "", VAR12->VAR37)));
    }
    else
    {
        FUN16("");
    }
    if (VAR12->VAR38)
    {
        FUN13((FUN14(VAR3, VAR4, "", VAR12->VAR38)));
    }
    else
    {
        FUN16("");
    }
    FUN13((FUN14(VAR3, VAR4, "", VAR15)));
    FUN13((FUN14(VAR3, VAR4, "", VAR17)));
    FUN13((FUN14(VAR3, VAR4, "", VAR10->VAR39)));
    FUN13((FUN14(VAR3, VAR4, "", VAR10->VAR39)));
    FUN13((FUN15(VAR3, VAR4, "", "")));
    FUN13((FUN17(VAR3, VAR4, "", NULL, 0)));
    if (VAR10->VAR40[VAR41].VAR42)
    {
        FUN13((FUN17(VAR3, VAR4, "", NULL, 0)));
    }
    if (VAR10->VAR43 & VAR44)
    {
        FUN13((FUN17(VAR3, VAR4, "", VAR14, sizeof(VAR14))));
    }
    if (VAR10->VAR45 & VAR46)
    {
        uint32_t VAR47 = (VAR10->VAR48 & VAR49) ? 2 : 1;
        FUN13((FUN14(VAR3, VAR4, "", VAR47)));
    }
    if (VAR10->VAR48 & VAR50)
    {
        FUN13((FUN14(VAR3, VAR4, "", 1)));
    }
    VAR19 = FUN18(VAR10, VAR18, sizeof(VAR18));
    if (VAR19)
    {
        FUN13((FUN17(VAR3, VAR4, "", VAR18, VAR19)));
    }
    FUN19(VAR10, VAR3, VAR4, false);
    FUN13((FUN14(VAR3, VAR4, "", VAR2->VAR51 / VAR20)));
    FUN13((FUN17(VAR3, VAR4, "", VAR23, sizeof(VAR23))));
    if (VAR52 > 1)
    {
        FUN13(FUN20(VAR3, VAR4, VAR8));
    }
    FUN13(FUN21(VAR3, VAR4, VAR8, VAR25));
    if (VAR12->VAR53)
    {
        for (VAR31 = 0; VAR31 < VAR12->VAR53->VAR54; VAR31++)
        {
            VAR29[VAR31] = FUN5(VAR12->VAR53->VAR55[VAR31]);
        }
        FUN13((FUN17(VAR3, VAR4, "", VAR29, VAR12->VAR53->VAR54 * sizeof(VAR29[0]))));
    }
}