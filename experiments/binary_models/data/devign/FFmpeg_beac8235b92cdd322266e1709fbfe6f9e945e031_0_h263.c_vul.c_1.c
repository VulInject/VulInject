static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    FUN2(VAR4, 1);
    VAR2->VAR8 = FUN3(VAR4, 8);
    if (FUN4(VAR4) != 0)
    {
        VAR7 = FUN3(VAR4, 4);
        FUN2(VAR4, 3);
    }
    else
    {
        VAR7 = 1;
        VAR2->VAR9 = FUN3(VAR4, 4);
        if (VAR2->VAR9 == VAR10)
        {
            VAR2->VAR11->VAR12.VAR13 = FUN3(VAR4, 8);
            VAR2->VAR11->VAR12.VAR14 = FUN3(VAR4, 8);
        }
        else
        {
            VAR2->VAR11->VAR12 = VAR15[VAR2->VAR9];
            if ((VAR2->VAR16 = FUN4(VAR4)))
            {
                int VAR17 = FUN3(VAR4, 2);
                if (VAR17 != 1)
                {
                    FUN5(VAR2->VAR11, VAR18, "");
                    VAR2->VAR19 = FUN4(VAR4);
                    if (FUN4(VAR4))
                    {
                        FUN3(VAR4, 15);
                        FUN6(VAR4);
                        FUN3(VAR4, 15);
                        FUN6(VAR4);
                        FUN3(VAR4, 15);
                        FUN6(VAR4);
                        FUN3(VAR4, 3);
                        FUN3(VAR4, 11);
                        FUN6(VAR4);
                        FUN3(VAR4, 15);
                        FUN6(VAR4);
                    }
                    else
                    {
                        if (VAR2->VAR20 == 0)
                            VAR2->VAR19 = 0;
                        VAR2->VAR21 = FUN3(VAR4, 2);
                        if (VAR2->VAR21 != VAR22)
                            FUN5(VAR2->VAR11, VAR18, "");
                        if (VAR2->VAR21 == VAR23 && VAR7 != 1)
                        {
                            FUN5(VAR2->VAR11, VAR18, "");
                            FUN2(VAR4, 4);
                            FUN7(VAR4, "");
                            VAR2->VAR11->VAR24.VAR14 = FUN3(VAR4, 16);
                            if (!VAR2->VAR11->VAR24.VAR14)
                            {
                                FUN5(VAR2->VAR11, VAR18, "");
                                VAR2->VAR25 = FUN8(VAR2->VAR11->VAR24.VAR14 - 1) + 1;
                                if (VAR2->VAR25 < 1)
                                    VAR2->VAR25 = 1;
                                FUN7(VAR4, "");
                                if (FUN4(VAR4) != 0)
                                {
                                    VAR2->VAR11->VAR24.VAR13 = FUN3(VAR4, VAR2->VAR25);
                                }
                                else
                                    VAR2->VAR11->VAR24.VAR13 = 1;
                                VAR2->VAR26 = 0;
                                if (VAR2->VAR21 != VAR27)
                                {
                                    if (VAR2->VAR21 == VAR22)
                                    {
                                        FUN6(VAR4);
                                        VAR5 = FUN3(VAR4, 13);
                                        FUN6(VAR4);
                                        VAR6 = FUN3(VAR4, 13);
                                        FUN6(VAR4);
                                        if (VAR5 && VAR6 && !(VAR2->VAR5 && VAR2->VAR28 == FUN9("")))
                                        {
                                            VAR2->VAR5 = VAR5;
                                            VAR2->VAR6 = VAR6;
                                            VAR2->VAR29 = VAR2->VAR30 = FUN4(VAR4) ^ 1;
                                            VAR2->VAR31 = 0;
                                            if (!FUN4(VAR4) && (VAR2->VAR11->VAR32 & VAR33))
                                                FUN5(VAR2->VAR11, VAR34, "");
                                            if (VAR7 == 1)
                                            {
                                                VAR2->VAR35 = FUN4(VAR4);
                                            }
                                            else
                                            {
                                                VAR2->VAR35 = FUN3(VAR4, 2);
                                                if (VAR2->VAR35 == VAR36)
                                                    FUN5(VAR2->VAR11, VAR18, "");
                                                if (VAR2->VAR35 == VAR36 || VAR2->VAR35 == VAR37)
                                                {
                                                    if (VAR2->VAR35 == VAR36)
                                                    {
                                                        VAR2->VAR38 = FUN3(VAR4, 13);
                                                        FUN6(VAR4);
                                                        VAR2->VAR39 = FUN3(VAR4, 13);
                                                        FUN6(VAR4);
                                                        VAR2->VAR40 = FUN3(VAR4, 13);
                                                        FUN6(VAR4);
                                                        VAR2->VAR41 = FUN3(VAR4, 13);
                                                        FUN6(VAR4);
                                                        VAR2->VAR42 = FUN3(VAR4, 6);
                                                        VAR2->VAR43 = FUN3(VAR4, 2);
                                                        VAR2->VAR44 = FUN4(VAR4);
                                                        if (VAR2->VAR35 == VAR36)
                                                            VAR2->VAR45 = FUN4(VAR4);
                                                        if (FUN4(VAR4) == 1)
                                                        {
                                                            VAR2->VAR46 = FUN3(VAR4, 4);
                                                            if (FUN3(VAR4, 4) != 8)
                                                                FUN5(VAR2->VAR11, VAR18, "");
                                                            if (VAR2->VAR46 != 5)
                                                                FUN5(VAR2->VAR11, VAR18, "", VAR2->VAR46);
                                                        }
                                                        else
                                                        {
                                                            VAR2->VAR46 = 5;
                                                            if ((VAR2->VAR47 = FUN4(VAR4)))
                                                            {
                                                                int VAR48, VAR49;
                                                                for (VAR48 = 0; VAR48 < 64; VAR48++)
                                                                {
                                                                    int VAR50 = VAR2->VAR51.VAR52[VAR48];
                                                                    VAR49 = VAR53[VAR48];
                                                                    VAR2->VAR54[VAR50] = VAR49;
                                                                    VAR2->VAR55[VAR50] = VAR49;
                                                                    VAR49 = VAR56[VAR48];
                                                                    VAR2->VAR57[VAR50] = VAR49;
                                                                    VAR2->VAR58[VAR50] = VAR49;
                                                                    if (FUN4(VAR4))
                                                                    {
                                                                        int VAR59 = 0;
                                                                        for (VAR48 = 0; VAR48 < 64; VAR48++)
                                                                        {
                                                                            int VAR50;
                                                                            VAR49 = FUN3(VAR4, 8);
                                                                            if (VAR49 == 0)
                                                                                break;
                                                                            VAR59 = VAR49;
                                                                            VAR50 = VAR2->VAR51.VAR52[VAR60[VAR48]];
                                                                            VAR2->VAR54[VAR50] = VAR49;
                                                                            VAR2->VAR55[VAR50] = VAR49;
                                                                            for (; VAR48 < 64; VAR48++)
                                                                            {
                                                                                int VAR50 = VAR2->VAR51.VAR52[VAR60[VAR48]];
                                                                                VAR2->VAR54[VAR50] = VAR59;
                                                                                VAR2->VAR55[VAR50] = VAR59;
                                                                                if (FUN4(VAR4))
                                                                                {
                                                                                    int VAR59 = 0;
                                                                                    for (VAR48 = 0; VAR48 < 64; VAR48++)
                                                                                    {
                                                                                        int VAR50;
                                                                                        VAR49 = FUN3(VAR4, 8);
                                                                                        if (VAR49 == 0)
                                                                                            break;
                                                                                        VAR59 = VAR49;
                                                                                        VAR50 = VAR2->VAR51.VAR52[VAR60[VAR48]];
                                                                                        VAR2->VAR57[VAR50] = VAR49;
                                                                                        VAR2->VAR58[VAR50] = VAR49;
                                                                                        for (; VAR48 < 64; VAR48++)
                                                                                        {
                                                                                            int VAR50 = VAR2->VAR51.VAR52[VAR60[VAR48]];
                                                                                            VAR2->VAR57[VAR50] = VAR59;
                                                                                            VAR2->VAR58[VAR50] = VAR59;
                                                                                            if (VAR7 != 1)
                                                                                                VAR2->VAR61 = FUN4(VAR4);
                                                                                            else
                                                                                                VAR2->VAR61 = 0;
                                                                                            if (!FUN4(VAR4))
                                                                                                FUN5(VAR2->VAR11, VAR18, "");
                                                                                            VAR2->VAR62 = !FUN4(VAR4);
                                                                                            VAR2->VAR63 = FUN4(VAR4);
                                                                                            if (VAR2->VAR63)
                                                                                            {
                                                                                                VAR2->VAR64 = FUN4(VAR4);
                                                                                                if (VAR7 != 1)
                                                                                                {
                                                                                                    VAR2->VAR65 = FUN4(VAR4);
                                                                                                    if (VAR2->VAR65)
                                                                                                    {
                                                                                                        FUN5(VAR2->VAR11, VAR18, "");
                                                                                                        FUN2(VAR4, 2);
                                                                                                        FUN6(VAR4);
                                                                                                        VAR2->VAR66 = FUN4(VAR4);
                                                                                                        if (VAR2->VAR66)
                                                                                                            FUN5(VAR2->VAR11, VAR18, "");
                                                                                                        else
                                                                                                        {
                                                                                                            VAR2->VAR65 = 0;
                                                                                                            VAR2->VAR66 = 0;
                                                                                                            VAR2->VAR67 = FUN4(VAR4);
                                                                                                            if (VAR2->VAR67)
                                                                                                            {
                                                                                                                GetBitContext VAR68 = *VAR4;
                                                                                                                int VAR69;
                                                                                                                int VAR70;
                                                                                                                int VAR71;
                                                                                                                int VAR72;
                                                                                                                int VAR73;
                                                                                                                int VAR74;
                                                                                                                VAR2->VAR75 = FUN4(VAR4);
                                                                                                                VAR69 = FUN3(VAR4, 4);
                                                                                                                VAR70 = FUN4(VAR4);
                                                                                                                VAR71 = FUN3(VAR4, 5);
                                                                                                                VAR72 = FUN3(VAR4, 5);
                                                                                                                VAR73 = FUN3(VAR4, 5);
                                                                                                                VAR74 = FUN3(VAR4, 5);
                                                                                                                VAR2->VAR76 = FUN4(VAR4);
                                                                                                                if (VAR71 == 0 || VAR72 == 0 || VAR73 == 0 || VAR74 == 0)
                                                                                                                {
                                                                                                                    VAR2->VAR67 = 0;
                                                                                                                    *VAR4 = VAR68;
                                                                                                                }
                                                                                                                else
                                                                                                                    FUN5(VAR2->VAR11, VAR18, "");
                                                                                                                return 0;