FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR4 *VAR5, VAR6 *VAR7, VAR8 *VAR9, VAR10 *VAR11, VAR12 *VAR13)
{
    int VAR14 = FUN2(0xff, VAR13->VAR15);
    int VAR16 = VAR2->VAR17;
    VAR18 *VAR19;
    int VAR20;
    VAR19 = FUN3(VAR2, sizeof(VAR21));
    memcpy(VAR19, VAR21, sizeof(VAR21));
    if (VAR7->VAR22)
    {
        VAR19[VAR23[0]] = '';
    }
    if (VAR7->VAR24)
    {
        VAR19[VAR25[0]] = '';
    }
    else
    {
        VAR19[VAR26[0] + 1] = VAR19[VAR26[0] + 3] = VAR7->VAR27;
    }
    FUN4(VAR11, VAR19, sizeof(VAR21));
    FUN5(VAR19, sizeof(VAR21), VAR28[0], 16, VAR9->VAR29);
    {
        VAR1 *VAR30 = FUN6();
        uint8_t VAR31 = 0x10;
        FUN7(VAR30, "");
        for (VAR20 = 0; VAR20 < VAR14; VAR20++)
        {
            VAR18 *VAR32 = FUN3(VAR30, VAR33);
            memcpy(VAR32, VAR34, VAR33);
            VAR32[VAR35] = FUN8(VAR20 >> 4);
            VAR32[VAR35 + 1] = FUN8(VAR20);
            VAR32[VAR36] = VAR20;
            VAR32[VAR37] = VAR20;
        }
        FUN9(VAR30, "", "", VAR14);
        FUN10(VAR30, 0x08);
        FUN7(VAR30, "");
        {
            VAR1 *VAR38 = FUN6();
            uint8_t VAR31 = 0x13;
            FUN11(VAR38, VAR14);
            for (VAR20 = 0; VAR20 < VAR14; VAR20++)
            {
                uint8_t VAR39 = FUN12(VAR20, VAR5->VAR40) ? 0x01 : 0x00;
                FUN10(VAR38, VAR39);
            }
            FUN13(VAR38, VAR31, 2);
            FUN14(VAR30, VAR38);
            FUN15(VAR38);
        }
        {
            AcpiBuildPciBusHotplugState VAR41;
            VAR42 *VAR43;
            VAR44 *VAR45 = NULL;
            bool VAR46;
            VAR43 = FUN16("", VAR47, &VAR46);
            if (!VAR46 && VAR43)
            {
                VAR45 = FUN17(VAR43)->VAR45;
            }
            FUN18(&VAR41, NULL);
            if (VAR45)
            {
                FUN19(VAR45, VAR48, VAR49, &VAR41);
            }
            FUN14(VAR30, VAR41.VAR50);
            FUN20(&VAR41);
        }
        FUN13(VAR30, VAR31, 3);
        FUN14(VAR2, VAR30);
        FUN15(VAR30);
    }
    FUN21(VAR3, VAR2, (void *)(VAR2->VAR51 + VAR16), VAR52, VAR2->VAR17 - VAR16, 1);
}