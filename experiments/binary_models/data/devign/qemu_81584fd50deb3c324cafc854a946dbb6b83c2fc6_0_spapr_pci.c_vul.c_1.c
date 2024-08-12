int FUN1(VAR1 *VAR2, uint32_t VAR3, void *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7.VAR6;
    int VAR8, VAR9 = 0, VAR10, VAR11, VAR12, VAR13, VAR14;
    VAR15 *VAR16;
    char VAR17[256];
    struct
    {
        uint32_t VAR18;
        uint64_t VAR19;
        uint64_t VAR20;
    } FUN2((VAR21)) VAR22[VAR23 + 1], VAR24[VAR23];
    uint32_t VAR25[] = {FUN3(0), FUN3(0xff)};
    struct
    {
        uint32_t VAR18;
        uint64_t VAR26;
        uint64_t VAR27;
        uint64_t VAR20;
    } FUN2((VAR21)) VAR28[] = {
        {
            FUN3(FUN4(1)),
            FUN5(0),
            FUN5(VAR2->VAR29),
            FUN5(FUN6(&VAR2->VAR30)),
        },
        {
            FUN3(FUN4(2)),
            FUN5(VAR31),
            FUN5(VAR2->VAR32),
            FUN5(FUN6(&VAR2->VAR33)),
        },
    };
    uint64_t VAR34[] = {FUN5(VAR2->VAR35), 0};
    uint32_t VAR36[] = {FUN3(FUN7(-1) | FUN8(-1)), 0x0, 0x0, 0x0};
    uint32_t VAR37[VAR6->VAR38][7];
    sprintf(VAR17, "" VAR39, VAR2->VAR35);
    VAR8 = FUN9(VAR4, 0, VAR17);
    if (VAR8 < 0)
    {
        return VAR8;
    }
    do
    {
        int VAR40 = (VAR41);
        if (VAR40 < 0)
        {
            return VAR40;
        }
    } while (0) FUN10(FUN11(VAR4, VAR8, "", ""));
    FUN10(FUN11(VAR4, VAR8, "", ""));
    FUN10(FUN12(VAR4, VAR8, "", 0x3));
    FUN10(FUN12(VAR4, VAR8, "", 0x2));
    FUN10(FUN12(VAR4, VAR8, "", 0x1));
    FUN10(FUN13(VAR4, VAR8, "", NULL, 0));
    FUN10(FUN13(VAR4, VAR8, "", &VAR25, sizeof(VAR25)));
    FUN10(FUN13(VAR4, VAR8, "", &VAR28, sizeof(VAR28)));
    FUN10(FUN13(VAR4, VAR8, "", &VAR34, sizeof(VAR34)));
    FUN10(FUN13(VAR4, VAR8, "", &VAR36, sizeof(VAR36)));
    VAR14 = 0;
    FUN14(VAR16, &VAR6->VAR42.VAR43, VAR44)
    {
        VAR45 *VAR46 = FUN15(VAR45, VAR16, VAR16);
        int VAR47 = FUN16(VAR46, 0);
        VAR48 *VAR49 = VAR37[VAR14];
        VAR50 *VAR51 = VAR46->VAR51;
        VAR10 = VAR46->VAR52 >> 3;
        VAR11 = VAR46->VAR52 & 7;
        sprintf(VAR17, "", VAR10, VAR11);
        if (VAR10 > VAR6->VAR38)
        {
            FUN17(""
                   "",
                   VAR10);
            FUN18(-1);
        }
        VAR49[0] = FUN3(FUN7(VAR10) | FUN8(VAR11));
        VAR49[1] = 0;
        VAR49[2] = 0;
        VAR49[3] = 0;
        VAR49[4] = FUN3(VAR3);
        VAR49[5] = FUN3(VAR2->VAR53[VAR47].VAR54);
        VAR49[6] = FUN3(0x8);
        VAR9 = FUN9(VAR4, VAR8, VAR17);
        if (VAR9 < 0)
        {
            return VAR9;
        }
        FUN10(FUN12(VAR4, VAR9, "", FUN19(&VAR51[VAR55])));
        FUN10(FUN12(VAR4, VAR9, "", FUN19(&VAR51[VAR56])));
        FUN10(FUN12(VAR4, VAR9, "", FUN20(&VAR51[VAR57])));
        FUN10(FUN12(VAR4, VAR9, "", FUN21(&VAR51[VAR58]) >> 8));
        FUN10(FUN12(VAR4, VAR9, "", FUN19(&VAR51[VAR59])));
        FUN10(FUN12(VAR4, VAR9, "", FUN19(&VAR51[VAR60])));
        VAR22[0].VAR18 = FUN3(FUN22(0) | FUN23(0) | FUN24(0) | FUN4(0) | FUN25(0) | FUN7(VAR10) | FUN8(VAR11));
        VAR22[0].VAR19 = 0;
        VAR22[0].VAR20 = 0;
        VAR13 = 0;
        for (VAR12 = 0; VAR12 < VAR23; ++VAR12)
        {
            if (0 == VAR46->VAR61[VAR12].VAR20)
            {
                continue;
            }
            VAR22[VAR13 + 1].VAR18 = FUN3(FUN22(0) | FUN23(0) | FUN24(0) | FUN4(FUN26(VAR46->VAR61[VAR12].VAR62)) | FUN25(0) | FUN7(VAR10) | FUN8(VAR11) | FUN27(VAR63[VAR12]));
            VAR22[VAR13 + 1].VAR19 = 0;
            VAR22[VAR13 + 1].VAR20 = FUN5(VAR46->VAR61[VAR12].VAR20);
            VAR24[VAR13].VAR18 = FUN3(FUN22(1) | FUN23(0) | FUN24(0) | FUN4(FUN26(VAR46->VAR61[VAR12].VAR62)) | FUN25(0) | FUN7(VAR10) | FUN8(VAR11) | FUN27(VAR63[VAR12]));
            VAR24[VAR13].VAR19 = FUN5(VAR46->VAR61[VAR12].VAR19);
            VAR24[VAR13].VAR20 = VAR22[VAR13 + 1].VAR20;
            ++VAR13;
        }
        FUN10(FUN13(VAR4, VAR9, "", VAR22, sizeof(VAR22[0]) * (VAR13 + 1)));
        FUN10(FUN13(VAR4, VAR9, "", VAR24, sizeof(VAR24[0]) * (VAR13)));
        FUN10(FUN12(VAR4, VAR9, "", FUN20(&VAR51[VAR64])));
        ++VAR14;
    }
    FUN10(FUN13(VAR4, VAR8, "", &VAR37, VAR14 * sizeof(VAR37[0])));
    return 0;
}