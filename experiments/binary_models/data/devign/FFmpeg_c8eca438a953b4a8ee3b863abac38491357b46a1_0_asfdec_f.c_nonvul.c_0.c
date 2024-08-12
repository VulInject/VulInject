static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    ff_asf_guid VAR6;
    VAR7 *VAR8 = VAR2->VAR8;
    int VAR9;
    int64_t VAR10;
    FUN2(VAR8, &VAR6);
    if (FUN3(&VAR6, &VAR11))
        return VAR12;
    FUN4(VAR8);
    FUN5(VAR8);
    FUN6(VAR8);
    FUN6(VAR8);
    memset(&VAR4->VAR13, -1, sizeof(VAR4->VAR13));
    for (VAR9 = 0; VAR9 < 128; VAR9++)
        VAR4->VAR14[VAR9].VAR15 = 128;
    for (;;)
    {
        uint64_t VAR16 = FUN7(VAR8);
        int VAR17 = 0;
        FUN2(VAR8, &VAR6);
        VAR10 = FUN4(VAR8);
        FUN8(&VAR6);
        if (!FUN3(&VAR6, &VAR18))
        {
            VAR4->VAR19 = FUN7(VAR8);
            if (!(VAR4->VAR20.VAR21 & 0x01) && VAR10 >= 100)
                VAR4->VAR22 = VAR10 - 24;
            else
                VAR4->VAR22 = (VAR23)-1;
            break;
        }
        if (VAR10 < 24)
            return VAR12;
        if (!FUN3(&VAR6, &VAR24))
        {
            VAR17 = FUN9(VAR2, VAR10);
        }
        else if (!FUN3(&VAR6, &VAR25))
        {
            VAR17 = FUN10(VAR2, VAR10);
        }
        else if (!FUN3(&VAR6, &VAR26))
        {
            FUN11(VAR2, VAR10);
        }
        else if (!FUN3(&VAR6, &VAR27))
        {
            FUN12(VAR2, VAR10);
        }
        else if (!FUN3(&VAR6, &VAR28))
        {
            FUN13(VAR2, VAR10);
        }
        else if (!FUN3(&VAR6, &VAR29))
        {
            FUN14(VAR2, VAR10);
        }
        else if (!FUN3(&VAR6, &VAR30))
        {
            FUN14(VAR2, VAR10);
        }
        else if (!FUN3(&VAR6, &VAR31))
        {
            FUN15(VAR2, VAR10);
            continue;
        }
        else if (!FUN3(&VAR6, &VAR32))
        {
            FUN2(VAR8, &VAR6);
            FUN16(VAR8, 6);
            continue;
        }
        else if (!FUN3(&VAR6, &VAR33))
        {
            FUN17(VAR2, VAR10);
        }
        else if (FUN18(VAR8))
        {
            return VAR34;
        }
        else
        {
            if (!VAR2->VAR35)
            {
                if (!FUN3(&VAR6, &VAR36))
                {
                    unsigned int VAR37;
                    AVPacket VAR38;
                    FUN19(VAR2, VAR39, "");
                    VAR37 = FUN5(VAR8);
                    FUN19(VAR2, VAR40, "");
                    if ((VAR17 = FUN20(VAR8, &VAR38, VAR37)) < 0)
                        return VAR17;
                    FUN21(VAR2, VAR40, VAR38.VAR41, VAR38.VAR42);
                    FUN22(&VAR38);
                    VAR37 = FUN5(VAR8);
                    FUN23(VAR2, "", -1, VAR37, 32);
                    VAR37 = FUN5(VAR8);
                    FUN23(VAR2, "", -1, VAR37, 32);
                    VAR37 = FUN5(VAR8);
                    FUN23(VAR2, "", -1, VAR37, 32);
                }
                else if (!FUN3(&VAR6, &VAR43))
                {
                    FUN19(VAR2, VAR39, "");
                    FUN24(&VAR2->VAR44, "", "", 0);
                }
                else if (!FUN3(&VAR6, &VAR45))
                {
                    FUN19(VAR2, VAR46, "");
                }
            }
        }
        if (VAR17 < 0)
            return VAR17;
        if (FUN7(VAR8) != VAR16 + VAR10)
            FUN19(VAR2, VAR40, "" VAR47 "" VAR48 "", FUN7(VAR8) - VAR16, VAR10);
        FUN25(VAR8, VAR16 + VAR10, VAR49);
    }
    FUN2(VAR8, &VAR6);
    FUN4(VAR8);
    FUN6(VAR8);
    FUN6(VAR8);
    if (FUN18(VAR8))
        return VAR34;
    VAR4->VAR50 = FUN7(VAR8);
    VAR4->VAR51 = 0;
    for (VAR9 = 0; VAR9 < 128; VAR9++)
    {
        int VAR52 = VAR4->VAR13[VAR9];
        if (VAR52 >= 0)
        {
            VAR53 *VAR54 = VAR2->VAR14[VAR52];
            if (!VAR54->VAR55->VAR56)
                VAR54->VAR55->VAR56 = VAR4->VAR57[VAR9];
            if (VAR4->VAR58[VAR9].VAR59 > 0 && VAR4->VAR58[VAR9].VAR60 > 0)
            {
                FUN26(&VAR54->VAR61.VAR59, &VAR54->VAR61.VAR60, VAR4->VAR58[VAR9].VAR59, VAR4->VAR58[VAR9].VAR60, VAR62);
            }
            else if ((VAR4->VAR58[0].VAR59 > 0) && (VAR4->VAR58[0].VAR60 > 0) && (VAR54->VAR55->VAR63 == VAR64))
                FUN26(&VAR54->VAR61.VAR59, &VAR54->VAR61.VAR60, VAR4->VAR58[0].VAR59, VAR4->VAR58[0].VAR60, VAR62);
            FUN19(VAR2, VAR65, "", VAR9, VAR54->VAR55->VAR63, VAR4->VAR58[VAR9].VAR59, VAR4->VAR58[VAR9].VAR60, VAR54->VAR61.VAR59, VAR54->VAR61.VAR60);
            if (VAR4->VAR14[VAR9].VAR15 < 128)
            {
                const char *VAR66 = VAR4->VAR67[VAR4->VAR14[VAR9].VAR15];
                if (VAR66 && strlen(VAR66) > 1)
                {
                    const char VAR68[3] = {VAR66[0], VAR66[1], ''};
                    const char *VAR69 = FUN27(VAR68, VAR70);
                    if (VAR69)
                        FUN24(&VAR54->VAR44, "", VAR69, 0);
                }
            }
        }
    }
    FUN28(&VAR2->VAR44, NULL, VAR71);
    return 0;
}