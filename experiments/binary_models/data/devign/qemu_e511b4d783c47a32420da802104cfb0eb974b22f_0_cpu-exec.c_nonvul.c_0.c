int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR4);
    VAR7 *VAR8 = FUN4(VAR4);
    int VAR9, VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14;
    uintptr_t VAR15;
    SyncClocks VAR16;
    volatile bool VAR17 = false;
    if (VAR4->VAR18)
    {
        if (!FUN5(VAR4))
        {
            return VAR19;
        }
        VAR4->VAR18 = 0;
    }
    VAR20 = VAR4;
    FUN6();
    if (FUN7(VAR21))
    {
        VAR4->VAR21 = 1;
    }
    VAR6->FUN8(VAR4);
    FUN9(&VAR16, VAR4);
    for (;;)
    {
        if (FUN10(VAR4->VAR22, 0) == 0)
        {
            if (VAR4->VAR23 >= 0)
            {
                if (VAR4->VAR23 >= VAR24)
                {
                    VAR9 = VAR4->VAR23;
                    if (VAR9 == VAR25)
                    {
                        FUN11(VAR2);
                    }
                    VAR4->VAR23 = -1;
                    break;
                }
                else
                {
                    VAR6->FUN12(VAR4);
                    VAR9 = VAR4->VAR23;
                    VAR4->VAR23 = -1;
                    break;
                    VAR6->FUN12(VAR4);
                    VAR4->VAR23 = -1;
                }
            }
            VAR15 = 0;
            for (;;)
            {
                VAR10 = VAR4->VAR10;
                if (FUN7(VAR10))
                {
                    if (FUN7(VAR4->VAR26 & VAR27))
                    {
                        VAR10 &= ~VAR28;
                    }
                    if (VAR10 & VAR29)
                    {
                        VAR4->VAR10 &= ~VAR29;
                        VAR4->VAR23 = VAR25;
                        FUN13(VAR4);
                    }
                    if (VAR10 & VAR30)
                    {
                        VAR4->VAR10 &= ~VAR30;
                        VAR4->VAR18 = 1;
                        VAR4->VAR23 = VAR31;
                        FUN13(VAR4);
                    }
                    if (VAR10 & VAR32)
                    {
                        FUN14(VAR2, VAR33, 0);
                        FUN15(VAR8);
                        VAR4->VAR23 = VAR19;
                        FUN13(VAR4);
                    }
                    if (VAR10 & VAR34)
                    {
                        FUN16(VAR4);
                    }
                    if (VAR6->FUN17(VAR4, VAR10))
                    {
                        VAR15 = 0;
                    }
                    if (VAR4->VAR10 & VAR35)
                    {
                        VAR4->VAR10 &= ~VAR35;
                        VAR15 = 0;
                    }
                }
                if (FUN7(VAR4->VAR21))
                {
                    VAR4->VAR21 = 0;
                    VAR4->VAR23 = VAR24;
                    FUN13(VAR4);
                }
                FUN18(&VAR36.VAR37.VAR38);
                VAR17 = true;
                VAR12 = FUN19(VAR2);
                if (VAR36.VAR37.VAR39)
                {
                    VAR15 = 0;
                    VAR36.VAR37.VAR39 = 0;
                }
                if (FUN20(VAR40))
                {
                    FUN21("" VAR41 "", VAR12->VAR14, VAR12->VAR42, FUN22(VAR12->VAR42));
                }
                if (VAR15 != 0 && VAR12->VAR43[1] == -1)
                {
                    FUN23((VAR11 *)(VAR15 & ~VAR44), VAR15 & VAR44, VAR12);
                }
                VAR17 = false;
                FUN24(&VAR36.VAR37.VAR38);
                VAR4->VAR45 = VAR12;
                FUN25();
                if (FUN26(!VAR4->VAR21))
                {
                    FUN27(VAR12, VAR12->VAR42);
                    VAR14 = VAR12->VAR14;
                    VAR15 = FUN28(VAR4, VAR14);
                    switch (VAR15 & VAR44)
                    {
                    case VAR46:
                        VAR12 = (VAR11 *)(VAR15 & ~VAR44);
                        VAR15 = 0;
                        break;
                    case VAR47:
                    {
                        int VAR48;
                        VAR12 = (VAR11 *)(VAR15 & ~VAR44);
                        VAR48 = VAR4->VAR49.VAR50;
                        if (VAR4->VAR51 && VAR48 >= 0)
                        {
                            VAR4->VAR51 += VAR48;
                            if (VAR4->VAR51 > 0xffff)
                            {
                                VAR48 = 0xffff;
                            }
                            else
                            {
                                VAR48 = VAR4->VAR51;
                            }
                            VAR4->VAR51 -= VAR48;
                            VAR4->VAR49.VAR52.VAR53 = VAR48;
                        }
                        else
                        {
                            if (VAR48 > 0)
                            {
                                FUN29(VAR2, VAR48, VAR12);
                                FUN30(&VAR16, VAR4);
                            }
                            VAR4->VAR23 = VAR24;
                            VAR15 = 0;
                            FUN13(VAR4);
                        }
                        break;
                    }
                    default:
                        break;
                    }
                }
                VAR4->VAR45 = NULL;
                FUN30(&VAR16, VAR4);
            }
        }
        else
        {
            VAR4 = VAR20;
            VAR2 = VAR4->VAR54;
            VAR6 = FUN3(VAR4);
            VAR8 = FUN4(VAR4);
            if (VAR17)
            {
                FUN24(&VAR36.VAR37.VAR38);
                VAR17 = false;
            }
        }
    }
    VAR6->FUN31(VAR4);
    VAR20 = NULL;
    return VAR9;
}