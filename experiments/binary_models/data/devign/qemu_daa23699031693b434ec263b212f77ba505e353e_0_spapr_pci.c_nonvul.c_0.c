int FUN1(VAR1 *VAR2, uint32_t VAR3, void *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    char VAR9[VAR10];
    uint32_t VAR11[] = {FUN2(0), FUN2(0xff)};
    struct
    {
        uint32_t VAR12;
        uint64_t VAR13;
        uint64_t VAR14;
        uint64_t VAR15;
    } QEMU_PACKED VAR16[] = {
        {
            FUN2(FUN3(1)),
            FUN4(0),
            FUN4(VAR2->VAR17),
            FUN4(FUN5(&VAR2->VAR18)),
        },
        {
            FUN2(FUN3(2)),
            FUN4(VAR19),
            FUN4(VAR2->VAR20),
            FUN4(VAR2->VAR21),
        },
        {
            FUN2(FUN3(3)),
            FUN4(VAR2->VAR22),
            FUN4(VAR2->VAR23),
            FUN4(VAR2->VAR24),
        },
    };
    const unsigned VAR25 = (VAR2->VAR24 ? 3 : 2) * sizeof(VAR16[0]);
    uint64_t VAR26[] = {FUN4(VAR2->VAR27), 0};
    uint32_t VAR28[] = {FUN2(FUN6(-1) | FUN7(0)), 0x0, 0x0, FUN2(-1)};
    uint32_t VAR29[VAR30 * VAR31][7];
    uint32_t VAR32[] = {FUN2(VAR33), FUN2(VAR34), FUN2(VAR35)};
    uint32_t VAR36[] = {FUN2(1), FUN2(VAR37)};
    uint32_t VAR38[] = {FUN2(0x4), FUN2(0x0), FUN2(0x0), FUN2(0x0), FUN2(VAR2->VAR39)};
    VAR40 *VAR41;
    VAR42 *VAR43 = FUN8(VAR2)->VAR43;
    sPAPRFDT VAR44;
    snprintf(VAR9, VAR10, "" VAR45, VAR2->VAR27);
    VAR5 = FUN9(VAR4, 0, VAR9);
    if (VAR5 < 0)
    {
        return VAR5;
    }
    FUN10(FUN11(VAR4, VAR5, "", ""));
    FUN10(FUN11(VAR4, VAR5, "", ""));
    FUN10(FUN12(VAR4, VAR5, "", 0x3));
    FUN10(FUN12(VAR4, VAR5, "", 0x2));
    FUN10(FUN12(VAR4, VAR5, "", 0x1));
    FUN10(FUN13(VAR4, VAR5, "", NULL, 0));
    FUN10(FUN13(VAR4, VAR5, "", &VAR11, sizeof(VAR11)));
    FUN10(FUN13(VAR4, VAR5, "", &VAR16, VAR25));
    FUN10(FUN13(VAR4, VAR5, "", &VAR26, sizeof(VAR26)));
    FUN10(FUN12(VAR4, VAR5, "", 0x1));
    FUN10(FUN12(VAR4, VAR5, "", VAR46));
    if (VAR2->VAR47)
    {
        FUN10(FUN13(VAR4, VAR5, "", &VAR32, sizeof(VAR32)));
        FUN10(FUN13(VAR4, VAR5, "", &VAR36, sizeof(VAR36)));
    }
    if (VAR48 > 1)
    {
        FUN10(FUN13(VAR4, VAR5, "", VAR38, sizeof(VAR38)));
    }
    FUN10(FUN13(VAR4, VAR5, "", &VAR28, sizeof(VAR28)));
    for (VAR6 = 0; VAR6 < VAR30; VAR6++)
    {
        for (VAR7 = 0; VAR7 < VAR31; VAR7++)
        {
            VAR49 *VAR50 = VAR29[VAR6 * VAR31 + VAR7];
            int VAR51 = FUN14(VAR6, VAR7);
            VAR50[0] = FUN2(FUN6(VAR6) | FUN7(0));
            VAR50[1] = 0;
            VAR50[2] = 0;
            VAR50[3] = FUN2(VAR7 + 1);
            VAR50[4] = FUN2(VAR3);
            VAR50[5] = FUN2(VAR2->VAR52[VAR51].VAR53);
            VAR50[6] = FUN2(0x8);
        }
    }
    FUN10(FUN13(VAR4, VAR5, "", &VAR29, sizeof(VAR29)));
    VAR41 = FUN15(VAR2->VAR54[0]);
    if (!VAR41)
    {
        return -1;
    }
    FUN16(VAR4, VAR5, "", VAR41->VAR55, VAR41->VAR56, VAR41->VAR57 << VAR41->VAR58);
    FUN17(VAR2);
    FUN10(FUN12(VAR4, VAR5, "", 0x1));
    VAR44.VAR4 = VAR4;
    VAR44.VAR59 = VAR5;
    VAR44.VAR60 = VAR2;
    FUN18(VAR43, FUN19(VAR43), VAR61, &VAR44);
    VAR8 = FUN20(VAR4, VAR5, FUN21(VAR2), VAR62);
    if (VAR8)
    {
        return VAR8;
    }
    return 0;
}