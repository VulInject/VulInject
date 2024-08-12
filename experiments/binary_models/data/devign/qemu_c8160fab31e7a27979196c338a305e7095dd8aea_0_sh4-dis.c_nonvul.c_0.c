FUN1(int VAR1, struct VAR2 *VAR3)
{
    static const char *VAR4[] = {"", "", "", ""};
    static const char *VAR5[] = {"", "", "", ""};
    fprintf_ftype VAR6 = VAR3->VAR7;
    void *VAR8 = VAR3->VAR8;
    unsigned int VAR9, VAR10, VAR11;
    unsigned int VAR12, VAR13;
    const char *VAR14 = NULL;
    const VAR15 *VAR16;
    if ((VAR1 & 0xe800) == 0)
    {
        FUN2(VAR8, "", VAR1 & 0x1000 ? '' : '', (VAR1 >> 4) & 127);
        FUN3(VAR1 & 0xf, VAR6, VAR8);
        return;
    }
    if ((VAR1 & 0xc000) == 0x4000 && (VAR1 & 0x3000) != 0x1000)
    {
        static const char *VAR17[] = {"", "", "", ""};
        static const char *VAR18[] = {"", "", "", ""};
        static const char *VAR19[] = {"", "", "", ""};
        static const char *VAR20[] = {"", "", "", ""};
        if (VAR1 & 0x2000)
        {
            FUN2(VAR8, "", (VAR1 & 0x1000) ? "" : "", VAR4[(VAR1 >> 6) & 3], VAR5[(VAR1 >> 4) & 3], VAR17[(VAR1 >> 0) & 3]);
        }
        else if ((VAR1 & 0xf0) == 0x10 && VAR3->VAR21 != VAR22 && VAR3->VAR21 != VAR23)
        {
            FUN2(VAR8, "", VAR17[(VAR1 >> 0) & 3]);
        }
        else if ((VAR1 & 0xf3) != 0)
        {
            FUN2(VAR8, "", VAR1);
        }
        FUN2(VAR8, "", VAR1 & 0x2000 ? '' : '', VAR18[(VAR1 >> 10) & 3], VAR19[(VAR1 >> 8) & 3], VAR20[(VAR1 >> 2) & 3]);
        return;
    }
    VAR9 = VAR24;
    VAR10 = VAR1 >> 12 & 0xf;
    VAR11 = VAR1 >> 8 & 0xf;
    VAR13 = VAR1 >> 4 & 0xf;
    switch (VAR11 & 0x3)
    {
    case 0:
        VAR14 = "";
        VAR9 = VAR25;
        break;
    case 1:
        VAR14 = "";
        break;
    case 2:
        VAR14 = "";
        VAR11 -= 1;
        break;
    case 3:
        VAR14 = "";
        VAR11 -= 2;
        break;
    }
    if (VAR9 == VAR25)
        VAR12 = VAR26;
    else
        VAR12 = VAR9;
    for (VAR16 = VAR27; VAR16->VAR28; VAR16++)
    {
        if ((VAR16->VAR29[1] == VAR9 || VAR16->VAR29[1] == VAR12) && VAR16->VAR29[2] == VAR10 && VAR16->VAR29[3] == VAR11)
        {
            int VAR30;
            switch (VAR16->VAR29[4])
            {
            case VAR31:
                break;
            case VAR32:
                if ((VAR13 & 3) != 0)
                    continue;
                break;
            case VAR33:
                if ((VAR13 & 3) != 1)
                    continue;
                break;
            case VAR34:
                if ((VAR13 & 0xc) != 0)
                    continue;
                break;
            case VAR35:
                if ((VAR13 & 0xc) != 4)
                    continue;
                break;
            default:
                FUN4();
            }
            FUN2(VAR8, "", VAR14, VAR16->VAR28);
            for (VAR30 = 0; VAR30 < 3 && VAR16->VAR36[VAR30] != VAR37; VAR30++)
            {
                if (VAR30 && VAR16->VAR36[1] != VAR37)
                    FUN2(VAR8, "");
                switch (VAR16->VAR36[VAR30])
                {
                case VAR38:
                    FUN3(VAR1 & 0xf, VAR6, VAR8);
                    break;
                case VAR39:
                    FUN2(VAR8, "", VAR4[(VAR1 >> 6) & 3]);
                    break;
                case VAR40:
                    FUN2(VAR8, "", VAR5[(VAR1 >> 4) & 3]);
                    break;
                case VAR41:
                    FUN2(VAR8, "");
                    break;
                case VAR42:
                    FUN2(VAR8, "");
                    break;
                default:
                    FUN4();
                }
            }
            return;
        }
    }
    FUN2(VAR8, "", VAR1);
}