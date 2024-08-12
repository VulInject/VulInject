static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    static const uint32_t VAR4 = 1;
    hwaddr VAR5;
    uint64_t VAR6;
    uint32_t VAR7;
    if (!FUN2(VAR2->VAR8))
    {
        FUN3("");
        return;
    }
    if (VAR2->VAR9)
    {
        FUN4("");
        return;
    }
    FUN5(VAR2);
    FUN6(VAR2);
    FUN7(VAR2);
    FUN8(VAR2);
    VAR2->VAR10 = FUN9(VAR2->VAR8, VAR11.VAR12.VAR10);
    FUN4("", VAR2->VAR10);
    VAR2->VAR13 = FUN10(VAR2->VAR8, VAR11.VAR12.VAR14);
    if (VAR2->VAR13 == 0)
    {
        VAR2->VAR13 = 1;
    }
    FUN4("", VAR2->VAR13);
    VAR2->VAR15 = FUN11(VAR2->VAR8, VAR11.VAR16.VAR17);
    assert(FUN12(VAR2, VAR2->VAR15));
    FUN4("", VAR2->VAR15);
    VAR2->VAR18 = FUN11(VAR2->VAR8, VAR11.VAR16.VAR19);
    FUN4("", (int)VAR2->VAR18);
    VAR2->VAR20 = FUN11(VAR2->VAR8, VAR11.VAR12.VAR21);
    VAR2->VAR22 = FUN11(VAR2->VAR8, VAR11.VAR12.VAR23);
    FUN4("", VAR2->VAR20, VAR2->VAR22);
    FUN13(VAR2);
    VAR5 = FUN14(VAR2->VAR8, VAR11.VAR12.VAR24);
    FUN4("" VAR25, VAR5);
    VAR2->VAR26 = 0;
    for (VAR3 = 0; VAR3 < VAR2->VAR20; VAR3++)
    {
        hwaddr VAR27 = VAR5 + VAR3 * sizeof(struct VAR28);
        VAR2->VAR29[VAR3].VAR30 = FUN15(VAR27, VAR31.VAR32);
        assert(FUN12(VAR2, VAR2->VAR29[VAR3].VAR30));
        FUN4("", VAR3, VAR2->VAR29[VAR3].VAR30);
        VAR6 = FUN16(VAR27, VAR31.VAR33);
        VAR7 = FUN17(VAR27, VAR31.VAR34);
        FUN18(&VAR2->VAR29[VAR3].VAR35, VAR6, VAR7, sizeof(struct VAR36), false);
        FUN19(VAR37, "", VAR3, &VAR2->VAR29[VAR3].VAR35);
        VAR2->VAR26 += VAR7;
        VAR6 = FUN16(VAR27, VAR31.VAR38);
        VAR7 = FUN17(VAR27, VAR31.VAR39);
        FUN18(&VAR2->VAR29[VAR3].VAR40, VAR6, VAR7, sizeof(struct VAR41), true);
        FUN19(VAR37, "", VAR3, &VAR2->VAR29[VAR3].VAR40);
        VAR2->VAR29[VAR3].VAR42 = VAR27 + FUN20(struct VAR28, VAR43);
        memset(&VAR2->VAR29[VAR3].VAR44, 0, sizeof(VAR2->VAR29[VAR3].VAR44));
        FUN21(VAR27, VAR45.VAR46, VAR4);
    }
    FUN4("", VAR2->VAR26);
    FUN22(&VAR2->VAR47, FUN23(VAR2), VAR2->VAR26, VAR2->VAR48);
    FUN24(&VAR2->VAR49, VAR2->VAR48);
    for (VAR3 = 0; VAR3 < VAR2->VAR22; VAR3++)
    {
        int VAR50;
        hwaddr VAR51 = VAR5 + VAR2->VAR20 * sizeof(struct VAR28) + VAR3 * sizeof(struct VAR52);
        VAR2->VAR53[VAR3].VAR30 = FUN15(VAR51, VAR31.VAR32);
        assert(FUN12(VAR2, VAR2->VAR53[VAR3].VAR30));
        FUN4("", VAR3, VAR2->VAR53[VAR3].VAR30);
        for (VAR50 = 0; VAR50 < VAR54; VAR50++)
        {
            VAR6 = FUN25(VAR51, VAR31.VAR55[VAR50]);
            VAR7 = FUN26(VAR51, VAR31.VAR56[VAR50]);
            FUN18(&VAR2->VAR53[VAR3].VAR57[VAR50], VAR6, VAR7, sizeof(struct VAR58), false);
            FUN4("" VAR25 "", VAR3, VAR50, VAR6, VAR7);
        }
        VAR6 = FUN25(VAR51, VAR31.VAR38);
        VAR7 = FUN26(VAR51, VAR31.VAR39);
        FUN18(&VAR2->VAR53[VAR3].VAR40, VAR6, VAR7, sizeof(struct VAR59), true);
        FUN4("" VAR25 "", VAR3, VAR6, VAR7);
        VAR2->VAR53[VAR3].VAR60 = VAR51 + FUN20(struct VAR52, VAR43);
        memset(&VAR2->VAR53[VAR3].VAR61, 0, sizeof(VAR2->VAR53[VAR3].VAR61));
    }
    FUN27(VAR2);
    FUN28();
    FUN29(VAR2);
    VAR2->VAR9 = true;
}