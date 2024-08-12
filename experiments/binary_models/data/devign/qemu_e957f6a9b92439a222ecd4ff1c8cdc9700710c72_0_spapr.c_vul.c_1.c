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
    VAR28 *VAR29;
    int VAR30;
    uint32_t VAR31[VAR32];
    int VAR33;
    VAR27 = FUN11(VAR34, VAR13);
    if (VAR27)
    {
        VAR29 = FUN12(VAR27);
        VAR30 = VAR29->FUN13(VAR27);
        FUN14((FUN15(VAR3, VAR4, "", VAR30)));
    }
    FUN14((FUN15(VAR3, VAR4, "", VAR13)));
    FUN14((FUN16(VAR3, VAR4, "", "")));
    FUN14((FUN15(VAR3, VAR4, "", VAR10->VAR35[VAR36])));
    FUN14((FUN15(VAR3, VAR4, "", VAR10->VAR37)));
    FUN14((FUN15(VAR3, VAR4, "", VAR10->VAR37)));
    FUN14((FUN15(VAR3, VAR4, "", VAR10->VAR38)));
    FUN14((FUN15(VAR3, VAR4, "", VAR10->VAR38)));
    if (VAR12->VAR39)
    {
        FUN14((FUN15(VAR3, VAR4, "", VAR12->VAR39)));
    }
    else
    {
        FUN17("");
    }
    if (VAR12->VAR40)
    {
        FUN14((FUN15(VAR3, VAR4, "", VAR12->VAR40)));
    }
    else
    {
        FUN17("");
    }
    FUN14((FUN15(VAR3, VAR4, "", VAR15)));
    FUN14((FUN15(VAR3, VAR4, "", VAR17)));
    FUN14((FUN15(VAR3, VAR4, "", VAR10->VAR41)));
    FUN14((FUN15(VAR3, VAR4, "", VAR10->VAR41)));
    FUN14((FUN16(VAR3, VAR4, "", "")));
    FUN14((FUN18(VAR3, VAR4, "", NULL, 0)));
    if (VAR10->VAR42[VAR43].VAR44)
    {
        FUN14((FUN18(VAR3, VAR4, "", NULL, 0)));
    }
    if (VAR10->VAR45 & VAR46)
    {
        FUN14((FUN18(VAR3, VAR4, "", VAR14, sizeof(VAR14))));
    }
    if (VAR10->VAR47 & VAR48)
    {
        uint32_t VAR49 = (VAR10->VAR50 & VAR51) ? 2 : 1;
        FUN14((FUN15(VAR3, VAR4, "", VAR49)));
    }
    if (VAR10->VAR50 & VAR52)
    {
        FUN14((FUN15(VAR3, VAR4, "", 1)));
    }
    VAR19 = FUN19(VAR10, VAR18, sizeof(VAR18));
    if (VAR19)
    {
        FUN14((FUN18(VAR3, VAR4, "", VAR18, VAR19)));
    }
    FUN20(VAR10, VAR3, VAR4);
    FUN14((FUN15(VAR3, VAR4, "", VAR2->VAR53 / VAR20)));
    FUN14((FUN18(VAR3, VAR4, "", VAR23, sizeof(VAR23))));
    FUN14(FUN21(VAR3, VAR4, VAR2));
    FUN14(FUN22(VAR3, VAR4, VAR8, VAR25));
    if (VAR12->VAR54)
    {
        for (VAR33 = 0; VAR33 < VAR12->VAR54->VAR55; VAR33++)
        {
            VAR31[VAR33] = FUN5(VAR12->VAR54->VAR56[VAR33]);
        }
        FUN14((FUN18(VAR3, VAR4, "", VAR31, VAR12->VAR54->VAR55 * sizeof(VAR31[0]))));
    }
}