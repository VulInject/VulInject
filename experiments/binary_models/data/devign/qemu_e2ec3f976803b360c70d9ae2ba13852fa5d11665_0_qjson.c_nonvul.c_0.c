static void FUN1(const VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    switch (FUN2(VAR2))
    {
    case VAR7:
    {
        VAR8 *VAR9 = FUN3(VAR2);
        char VAR10[1024];
        snprintf(VAR10, sizeof(VAR10), "" VAR11, FUN4(VAR9));
        FUN5(VAR4, VAR10);
        break;
    }
    case VAR12:
    {
        VAR3 *VAR9 = FUN6(VAR2);
        const char *VAR13;
        int VAR14;
        char VAR15[16];
        char *VAR16;
        VAR13 = FUN7(VAR9);
        FUN5(VAR4, """);
        for (; *VAR13; VAR13 = VAR16)
        {
            VAR14 = FUN8(VAR13, 6, &VAR16);
            switch (VAR14)
            {
            case '':
                FUN5(VAR4, """);
                break;
            case '':
                FUN5(VAR4, "");
                break;
            case '':
                FUN5(VAR4, "");
                break;
            case '':
                FUN5(VAR4, "");
                break;
            case '':
                FUN5(VAR4, "");
                break;
            case '':
                FUN5(VAR4, "");
                break;
            case '':
                FUN5(VAR4, "");
                break;
            default:
                if (VAR14 < 0)
                {
                    VAR14 = 0xFFFD;
                }
                if (VAR14 > 0xFFFF)
                {
                    snprintf(VAR15, sizeof(VAR15), "", 0xD800 + ((VAR14 - 0x10000) >> 10), 0xDC00 + ((VAR14 - 0x10000) & 0x3FF));
                }
                else if (VAR14 < 0x20 || VAR14 >= 0x7F)
                {
                    snprintf(VAR15, sizeof(VAR15), "", VAR14);
                }
                else
                {
                    VAR15[0] = VAR14;
                    VAR15[1] = 0;
                }
                FUN5(VAR4, VAR15);
            }
        };
        FUN5(VAR4, """);
        break;
    }
    case VAR17:
    {
        ToJsonIterState VAR18;
        VAR19 *VAR9 = FUN9(VAR2);
        VAR18.VAR20 = 0;
        VAR18.VAR4 = VAR4;
        VAR18.VAR6 = VAR6 + 1;
        VAR18.VAR5 = VAR5;
        FUN5(VAR4, "");
        FUN10(VAR9, VAR21, &VAR18);
        if (VAR5)
        {
            int VAR22;
            FUN5(VAR4, "");
            for (VAR22 = 0; VAR22 < VAR6; VAR22++)
                FUN5(VAR4, "");
        }
        FUN5(VAR4, "");
        break;
    }
    case VAR23:
    {
        ToJsonIterState VAR18;
        VAR24 *VAR9 = FUN11(VAR2);
        VAR18.VAR20 = 0;
        VAR18.VAR4 = VAR4;
        VAR18.VAR6 = VAR6 + 1;
        VAR18.VAR5 = VAR5;
        FUN5(VAR4, "");
        FUN12(VAR9, (void *)VAR25, &VAR18);
        if (VAR5)
        {
            int VAR22;
            FUN5(VAR4, "");
            for (VAR22 = 0; VAR22 < VAR6; VAR22++)
                FUN5(VAR4, "");
        }
        FUN5(VAR4, "");
        break;
    }
    case VAR26:
    {
        VAR27 *VAR9 = FUN13(VAR2);
        char VAR10[1024];
        int VAR28;
        VAR28 = snprintf(VAR10, sizeof(VAR10), "", FUN14(VAR9));
        while (VAR28 > 0 && VAR10[VAR28 - 1] == '')
        {
            VAR28--;
        }
        if (VAR28 && VAR10[VAR28 - 1] == '')
        {
            VAR10[VAR28 - 1] = 0;
        }
        else
        {
            VAR10[VAR28] = 0;
        }
        FUN5(VAR4, VAR10);
        break;
    }
    case VAR29:
    {
        VAR30 *VAR9 = FUN15(VAR2);
        if (FUN16(VAR9))
        {
            FUN5(VAR4, "");
        }
        else
        {
            FUN5(VAR4, "");
        }
        break;
    }
    case VAR31:
    case VAR32:
        break;
    }
}