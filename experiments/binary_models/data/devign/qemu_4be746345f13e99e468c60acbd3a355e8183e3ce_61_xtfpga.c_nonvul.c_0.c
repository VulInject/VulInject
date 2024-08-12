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
    FUN15(VAR14, NULL, "", 224 * 1024 * 1024);
    FUN14(VAR7, 0xf0000000, VAR14);
    FUN16(VAR14, 0x0d020000);
    if (VAR35[0].VAR36)
    {
        FUN17(VAR14, 0x0d030000, 0x0d030400, 0x0d800000, FUN18(VAR11, 1), VAR35);
    }
    if (!VAR37[0])
    {
        VAR37[0] = FUN19("", "", NULL);
    }
    FUN20(VAR14, 0x0d050020, 2, FUN18(VAR11, 0), 115200, VAR37[0], VAR38);
    VAR16 = FUN21(VAR39, 0, 0);
    if (VAR16)
    {
        VAR18 = FUN22(VAR2->VAR40, NULL, "", VAR2->VAR41, FUN23(VAR16), VAR2->VAR42, VAR2->VAR41 / VAR2->VAR42, 4, 0x0000, 0x0000, 0x0000, 0x0000, VAR5);
        if (VAR18 == NULL)
        {
            FUN6("");
            FUN7(VAR29);
        }
    }
    if (VAR22)
    {
        uint32_t VAR43 = VAR11->VAR44;
        size_t VAR45 = 3 * FUN24(0);
        uint32_t VAR46 = 0xfe000000 + VAR2->VAR47;
        uint32_t VAR48;
        BpMemInfo VAR49 = {
            .VAR50 = FUN25(VAR51),
            .VAR52 = FUN25(0),
            .VAR53 = FUN25(VAR4->VAR33),
        };
        uint32_t VAR54 = VAR4->VAR33 < 0x08000000 ? VAR4->VAR33 : 0x08000000;
        uint32_t VAR55 = FUN26(VAR54 / 2, 4096);
        VAR13 = FUN11(sizeof(*VAR13));
        FUN12(VAR13, NULL, "", VAR2->VAR47, &VAR34);
        FUN13(VAR13);
        FUN14(VAR7, 0xfe000000, VAR13);
        if (VAR23)
        {
            VAR45 += FUN24(strlen(VAR23) + 1);
        }
        if (VAR24)
        {
            VAR45 += FUN24(sizeof(VAR56));
        }
        if (VAR25)
        {
            VAR45 += FUN24(sizeof(VAR57));
        }
        VAR46 = (VAR46 - VAR45) & ~0xff;
        VAR48 = FUN27(VAR46, VAR58, 0, NULL);
        VAR48 = FUN27(VAR48, VAR59, sizeof(VAR49), &VAR49);
        if (VAR23)
        {
            VAR48 = FUN27(VAR48, VAR60, strlen(VAR23) + 1, VAR23);
        }
        if (VAR24)
        {
            int VAR61;
            void *VAR62 = FUN28(VAR24, &VAR61);
            uint32_t VAR63 = FUN25(VAR55);
            if (!VAR62)
            {
                FUN6("", VAR24);
                FUN7(VAR29);
            }
            FUN29(VAR55, VAR62, VAR61);
            VAR48 = FUN27(VAR48, VAR64, sizeof(VAR63), &VAR63);
            VAR55 = FUN26(VAR55 + VAR61, 4096);
        }
        if (VAR25)
        {
            BpMemInfo VAR65 = {0};
            int VAR66 = FUN30(VAR25, VAR55, VAR54 - VAR55);
            if (VAR66 < 0)
            {
                VAR66 = FUN31(VAR25, VAR55, VAR54 - VAR55);
            }
            if (VAR66 < 0)
            {
                FUN6("", VAR25);
                FUN7(VAR29);
            }
            VAR65.VAR52 = FUN25(VAR55);
            VAR65.VAR53 = FUN25(VAR55 + VAR66);
            VAR48 = FUN27(VAR48, VAR67, sizeof(VAR65), &VAR65);
            VAR55 = FUN26(VAR55 + VAR66, 4096);
        }
        VAR48 = FUN27(VAR48, VAR68, 0, NULL);
        VAR11->VAR69[2] = VAR46;
        uint64_t VAR70;
        uint64_t VAR71;
        int VAR72 = FUN32(VAR22, VAR73, VAR9, &VAR70, &VAR71, NULL, VAR5, VAR74, 0);
        if (VAR72 > 0)
        {
            VAR43 = VAR70;
        }
        else
        {
            hwaddr VAR75;
            int VAR76;
            VAR72 = FUN33(VAR22, &VAR75, NULL, &VAR76);
            if (VAR72 > 0 && VAR76)
            {
                VAR43 = VAR75;
            }
            else
            {
                FUN6("", VAR22);
                FUN7(VAR29);
            }
        }
        if (VAR43 != VAR11->VAR44)
        {
            static const uint8_t VAR77[] = {
                0x0a,
                0,
                0,
                0xa0,
                0,
                0,
            };
            VAR11->VAR69[0] = VAR43;
            FUN29(VAR11->VAR44, VAR77, sizeof(VAR77));
        }
    }
    else
    {
        if (VAR18)
        {
            VAR6 *VAR78 = FUN34(VAR18);
            VAR6 *VAR79 = FUN11(sizeof(*VAR79));
            FUN35(VAR79, NULL, "", VAR78, VAR2->VAR80, VAR2->VAR41 - VAR2->VAR80 < 0x02000000 ? VAR2->VAR41 - VAR2->VAR80 : 0x02000000);
            FUN14(VAR7, 0xfe000000, VAR79);
        }
    }
}