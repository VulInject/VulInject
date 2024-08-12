static void FUN1(const VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = 1;
    int VAR5 = 0;
    VAR6 *VAR7 = FUN2();
    VAR8 *VAR9 = NULL;
    VAR10 *VAR11 = NULL;
    VAR6 *VAR12, *VAR13, *VAR14;
    VAR15 *VAR16;
    VAR17 *VAR18 = NULL;
    VAR19 *VAR20 = FUN3();
    const char *VAR21 = VAR4->VAR21;
    const char *VAR22 = FUN4(VAR20, "");
    const char *VAR23 = FUN4(VAR20, "");
    const char *VAR24 = FUN4(VAR20, "");
    const char *VAR25 = FUN4(VAR20, "");
    int VAR26;
    if (!VAR21)
    {
        VAR21 = VAR27;
    }
    for (VAR26 = 0; VAR26 < VAR28; VAR26++)
    {
        VAR9 = FUN5(VAR21);
        if (VAR9 == NULL)
        {
            FUN6("", VAR21);
            FUN7(VAR29);
        }
        VAR11 = &VAR9->VAR11;
        VAR11->VAR30[VAR31] = VAR26;
        FUN8(VAR32, VAR9);
        FUN9(FUN10(VAR9));
    }
    VAR12 = FUN11(sizeof(*VAR12));
    FUN12(VAR12, NULL, "", VAR4->VAR33, &VAR34);
    FUN13(VAR12);
    FUN14(VAR7, 0, VAR12);
    VAR14 = FUN11(sizeof(*VAR14));
    FUN15(VAR14, NULL, &VAR35, NULL, "", 224 * 1024 * 1024);
    FUN14(VAR7, 0xf0000000, VAR14);
    FUN16(VAR14, 0x0d020000);
    if (VAR36[0].VAR37)
    {
        FUN17(VAR14, 0x0d030000, 0x0d030400, 0x0d800000, FUN18(VAR11, 1), VAR36);
    }
    if (!VAR38[0])
    {
        VAR38[0] = FUN19("", "", NULL);
    }
    FUN20(VAR14, 0x0d050020, 2, FUN18(VAR11, 0), 115200, VAR38[0], VAR39);
    VAR16 = FUN21(VAR40, 0, 0);
    if (VAR16)
    {
        VAR18 = FUN22(VAR2->VAR41, NULL, "", VAR2->VAR42, FUN23(VAR16), VAR2->VAR43, VAR2->VAR42 / VAR2->VAR43, 4, 0x0000, 0x0000, 0x0000, 0x0000, VAR5);
        if (VAR18 == NULL)
        {
            FUN6("");
            FUN7(VAR29);
        }
    }
    if (VAR22)
    {
        uint32_t VAR44 = VAR11->VAR45;
        size_t VAR46 = 3 * FUN24(0);
        uint32_t VAR47 = 0xfe000000 + VAR2->VAR48;
        uint32_t VAR49;
        BpMemInfo VAR50 = {
            .VAR51 = FUN25(VAR52),
            .VAR53 = FUN25(0),
            .VAR54 = FUN25(VAR4->VAR33),
        };
        uint32_t VAR55 = VAR4->VAR33 < 0x08000000 ? VAR4->VAR33 : 0x08000000;
        uint32_t VAR56 = FUN26(VAR55 / 2, 4096);
        VAR13 = FUN11(sizeof(*VAR13));
        FUN12(VAR13, NULL, "", VAR2->VAR48, &VAR34);
        FUN13(VAR13);
        FUN14(VAR7, 0xfe000000, VAR13);
        if (VAR23)
        {
            VAR46 += FUN24(strlen(VAR23) + 1);
        }
        if (VAR24)
        {
            VAR46 += FUN24(sizeof(VAR57));
        }
        if (VAR25)
        {
            VAR46 += FUN24(sizeof(VAR58));
        }
        VAR47 = (VAR47 - VAR46) & ~0xff;
        VAR49 = FUN27(VAR47, VAR59, 0, NULL);
        VAR49 = FUN27(VAR49, VAR60, sizeof(VAR50), &VAR50);
        if (VAR23)
        {
            VAR49 = FUN27(VAR49, VAR61, strlen(VAR23) + 1, VAR23);
        }
        if (VAR24)
        {
            int VAR62;
            void *VAR63 = FUN28(VAR24, &VAR62);
            uint32_t VAR64 = FUN25(VAR56);
            if (!VAR63)
            {
                FUN6("", VAR24);
                FUN7(VAR29);
            }
            FUN29(VAR56, VAR63, VAR62);
            VAR49 = FUN27(VAR49, VAR65, sizeof(VAR64), &VAR64);
            VAR56 = FUN26(VAR56 + VAR62, 4096);
        }
        if (VAR25)
        {
            BpMemInfo VAR66 = {0};
            int VAR67 = FUN30(VAR25, VAR56, VAR55 - VAR56);
            if (VAR67 < 0)
            {
                VAR67 = FUN31(VAR25, VAR56, VAR55 - VAR56);
            }
            if (VAR67 < 0)
            {
                FUN6("", VAR25);
                FUN7(VAR29);
            }
            VAR66.VAR53 = FUN25(VAR56);
            VAR66.VAR54 = FUN25(VAR56 + VAR67);
            VAR49 = FUN27(VAR49, VAR68, sizeof(VAR66), &VAR66);
            VAR56 = FUN26(VAR56 + VAR67, 4096);
        }
        VAR49 = FUN27(VAR49, VAR69, 0, NULL);
        VAR11->VAR70[2] = VAR47;
        uint64_t VAR71;
        uint64_t VAR72;
        int VAR73 = FUN32(VAR22, VAR74, VAR9, &VAR71, &VAR72, NULL, VAR5, VAR75, 0);
        if (VAR73 > 0)
        {
            VAR44 = VAR71;
        }
        else
        {
            hwaddr VAR76;
            int VAR77;
            VAR73 = FUN33(VAR22, &VAR76, NULL, &VAR77, VAR74, VAR9);
            if (VAR73 > 0 && VAR77)
            {
                VAR44 = VAR76;
            }
            else
            {
                FUN6("", VAR22);
                FUN7(VAR29);
            }
        }
        if (VAR44 != VAR11->VAR45)
        {
            static const uint8_t VAR78[] = {
                0x0a,
                0,
                0,
                0xa0,
                0,
                0,
            };
            VAR11->VAR70[0] = VAR44;
            FUN29(VAR11->VAR45, VAR78, sizeof(VAR78));
        }
    }
    else
    {
        if (VAR18)
        {
            VAR6 *VAR79 = FUN34(VAR18);
            VAR6 *VAR80 = FUN11(sizeof(*VAR80));
            FUN35(VAR80, NULL, "", VAR79, VAR2->VAR81, VAR2->VAR42 - VAR2->VAR81 < 0x02000000 ? VAR2->VAR42 - VAR2->VAR81 : 0x02000000);
            FUN14(VAR7, 0xfe000000, VAR80);
        }
    }
}