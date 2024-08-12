void FUN1(VAR1 *VAR2, VAR3 *VAR4, fprintf_function VAR5, int VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    VAR9 *VAR10 = &VAR8->VAR10;
    int VAR11;
    FUN3(VAR4, "" VAR12 "" VAR12 "" VAR12 "" VAR12 "", VAR10->VAR13, VAR10->VAR14, VAR10->VAR15, FUN4(VAR10), VAR2->VAR16);
    FUN3(VAR4, "" VAR12 "" VAR12 "" VAR12 "", VAR10->VAR17, VAR10->VAR18[VAR19], VAR10->VAR20, VAR10->VAR21, VAR10->VAR22);
    FUN3(VAR4, "" VAR23 "" VAR24 "" VAR23 "", FUN5(VAR10), FUN6(VAR10), FUN7(VAR10));
    for (VAR11 = 0; VAR11 < 32; VAR11++)
    {
        if ((VAR11 & (VAR25 - 1)) == 0)
            FUN3(VAR4, "", VAR11);
        FUN3(VAR4, "" VAR26, FUN8(VAR10, VAR11));
        if ((VAR11 & (VAR25 - 1)) == (VAR25 - 1))
            FUN3(VAR4, "");
        FUN3(VAR4, "");
        for (VAR11 = 0; VAR11 < 8; VAR11++)
            FUN3(VAR4, "", VAR10->VAR27[VAR11]);
        FUN3(VAR4, "");
        for (VAR11 = 0; VAR11 < 8; VAR11++)
        {
            char VAR28 = '';
            if (VAR10->VAR27[VAR11] & 0x08)
                VAR28 = '';
            else if (VAR10->VAR27[VAR11] & 0x04)
                VAR28 = '';
            else if (VAR10->VAR27[VAR11] & 0x02)
                VAR28 = '';
            FUN3(VAR4, "", VAR28, VAR10->VAR27[VAR11] & 0x01 ? '' : '');
            FUN3(VAR4, "" VAR12 "", VAR10->VAR29);
            for (VAR11 = 0; VAR11 < 32; VAR11++)
            {
                if ((VAR11 & (VAR30 - 1)) == 0)
                    FUN3(VAR4, "", VAR11);
                FUN3(VAR4, "" VAR26, *((VAR31 *)&VAR10->VAR32[VAR11]));
                if ((VAR11 & (VAR30 - 1)) == (VAR30 - 1))
                    FUN3(VAR4, "");
                FUN3(VAR4, "" VAR12 "", VAR10->VAR33);
                FUN3(VAR4, "" VAR12 "" VAR12 "" VAR12 "" VAR12 "", VAR10->VAR18[VAR34], VAR10->VAR18[VAR35], VAR10->VAR18[VAR36], VAR10->VAR18[VAR37]);
                FUN3(VAR4, "" VAR12 "" VAR12 "" VAR12 "" VAR12 "", VAR10->VAR18[VAR38], VAR10->VAR18[VAR39], VAR10->VAR18[VAR40], VAR10->VAR18[VAR41]);
                FUN3(VAR4, "" VAR12 "" VAR12 "" VAR12 "" VAR12 "", VAR10->VAR18[VAR42], VAR10->VAR18[VAR43], VAR10->VAR18[VAR44], VAR10->VAR18[VAR45]);
                if (VAR10->VAR46 == VAR47)
                {
                    FUN3(VAR4, "" VAR12 "" VAR12 "" VAR12 "" VAR12 "", VAR10->VAR18[VAR48], VAR10->VAR18[VAR49], VAR10->VAR18[VAR50], VAR10->VAR18[VAR51]);
                    FUN3(VAR4, "" VAR12 "" VAR12 "" VAR12 "" VAR12 "", VAR10->VAR18[VAR52], VAR10->VAR18[VAR53], VAR10->VAR18[VAR54], VAR10->VAR18[VAR55]);
                    FUN3(VAR4, "" VAR12 "" VAR12 "" VAR12 "" VAR12 "", VAR10->VAR18[VAR56], VAR10->VAR18[VAR57], VAR10->VAR18[VAR58], VAR10->VAR18[VAR59]);
                    FUN3(VAR4, "" VAR12 "" VAR12 "" VAR12 "", VAR10->VAR18[VAR60], VAR10->VAR18[VAR61], VAR10->VAR18[VAR62]);
                    FUN3(VAR4, "" VAR12 "" VAR12 "" VAR12 "" VAR12 "", VAR10->VAR18[VAR63], VAR10->VAR18[VAR64], VAR10->VAR18[VAR65], VAR10->VAR18[VAR66]);
                    if (VAR10->VAR6 & VAR67)
                    {
                        FUN3(VAR4, "" VAR12 "", VAR10->VAR68);
                        switch (VAR10->VAR69)
                        {
                        case VAR70:
                        case VAR71:
                        case VAR72:
                        case VAR73:
                        case VAR74:
                        case VAR75:
                        case VAR76:
                        case VAR77:
                        case VAR78:
                        case VAR79:
                            FUN3(VAR4, "" VAR12 "" VAR12 "" VAR12 "", VAR10->VAR18[VAR80], VAR10->VAR18[VAR81], VAR10->VAR18[VAR82]);
                            break;
                        case VAR83:
                            FUN3(VAR4, "" VAR12 "" VAR12 "" VAR12 "" VAR12 "", VAR10->VAR18[VAR84], VAR10->VAR18[VAR85], VAR10->VAR18[VAR86], VAR10->VAR18[VAR87]);
                            FUN3(VAR4, "" VAR12 "" VAR12 "" VAR12 "" VAR12 "", VAR10->VAR18[VAR88], VAR10->VAR18[VAR89], VAR10->VAR18[VAR90], VAR10->VAR18[VAR91]);
                            FUN3(VAR4, "" VAR12 "" VAR12 "" VAR12 "", VAR10->VAR18[VAR92], VAR10->VAR18[VAR93], VAR10->VAR18[VAR94]);
                            break;
                        default:
                            break;