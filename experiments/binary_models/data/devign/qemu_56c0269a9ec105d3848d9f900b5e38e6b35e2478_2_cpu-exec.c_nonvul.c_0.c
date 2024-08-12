int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    VAR7 *VAR8 = &VAR6->VAR8;
    int VAR9, VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14;
    uintptr_t VAR15;
    SyncClocks VAR16;
    if (VAR2->VAR17)
    {
        if (VAR2->VAR10 & VAR18)
        {
            FUN4(VAR6->VAR19);
            FUN5(VAR2, VAR18);
        }
        if (!FUN6(VAR2))
        {
            return VAR20;
        }
        VAR2->VAR17 = 0;
    }
    VAR21 = VAR2;
    FUN7(&VAR22, VAR2);
    FUN8();
    if (FUN9(FUN10(&VAR23)))
    {
        VAR2->VAR23 = 1;
    }
    VAR4->FUN11(VAR2);
    FUN12(&VAR16, VAR2);
    for (;;)
    {
        if (FUN13(VAR2->VAR24, 0) == 0)
        {
            if (VAR2->VAR25 >= 0)
            {
                if (VAR2->VAR25 >= VAR26)
                {
                    VAR9 = VAR2->VAR25;
                    if (VAR9 == VAR27)
                    {
                        FUN14(VAR2);
                    }
                    VAR2->VAR25 = -1;
                    break;
                }
                else
                {
                    VAR4->FUN15(VAR2);
                    VAR9 = VAR2->VAR25;
                    VAR2->VAR25 = -1;
                    break;
                    VAR4->FUN15(VAR2);
                    VAR2->VAR25 = -1;
                }
            }
            VAR15 = 0;
            for (;;)
            {
                VAR10 = VAR2->VAR10;
                if (FUN9(VAR10))
                {
                    if (FUN9(VAR2->VAR28 & VAR29))
                    {
                        VAR10 &= ~VAR30;
                    }
                    if (VAR10 & VAR31)
                    {
                        VAR2->VAR10 &= ~VAR31;
                        VAR2->VAR25 = VAR27;
                        FUN16(VAR2);
                    }
                    if (VAR10 & VAR32)
                    {
                        VAR2->VAR10 &= ~VAR32;
                        VAR2->VAR17 = 1;
                        VAR2->VAR25 = VAR33;
                        FUN16(VAR2);
                    }
                    if (VAR10 & VAR34)
                    {
                        FUN17(VAR8, VAR35, 0);
                        FUN18(VAR6);
                        VAR2->VAR25 = VAR20;
                        FUN16(VAR2);
                    }
                    if (VAR10 & VAR36)
                    {
                        FUN19(VAR2);
                    }
                    if (VAR4->FUN20(VAR2, VAR10))
                    {
                        VAR15 = 0;
                    }
                    if (VAR2->VAR10 & VAR37)
                    {
                        VAR2->VAR10 &= ~VAR37;
                        VAR15 = 0;
                    }
                }
                if (FUN9(VAR2->VAR23))
                {
                    VAR2->VAR23 = 0;
                    VAR2->VAR25 = VAR26;
                    FUN16(VAR2);
                }
                FUN21();
                VAR12 = FUN22(VAR2);
                if (VAR38.VAR39.VAR40)
                {
                    VAR15 = 0;
                    VAR38.VAR39.VAR40 = 0;
                }
                if (FUN23(VAR41))
                {
                    FUN24("" VAR42 "", VAR12->VAR14, VAR12->VAR43, FUN25(VAR12->VAR43));
                }
                if (VAR15 != 0 && VAR12->VAR44[1] == -1 && !FUN23(VAR45))
                {
                    FUN26((VAR11 *)(VAR15 & ~VAR46), VAR15 & VAR46, VAR12);
                }
                FUN27();
                if (FUN28(!VAR2->VAR23))
                {
                    FUN29(VAR12, VAR12->VAR43);
                    VAR14 = VAR12->VAR14;
                    VAR2->VAR47 = VAR12;
                    VAR15 = FUN30(VAR2, VAR14);
                    VAR2->VAR47 = NULL;
                    switch (VAR15 & VAR46)
                    {
                    case VAR48:
                        FUN31();
                        VAR15 = 0;
                        break;
                    case VAR49:
                    {
                        int VAR50 = VAR2->VAR51.VAR52;
                        if (VAR2->VAR53 && VAR50 >= 0)
                        {
                            VAR2->VAR53 += VAR50;
                            VAR50 = FUN32(0xffff, VAR2->VAR53);
                            VAR2->VAR53 -= VAR50;
                            VAR2->VAR51.VAR54.VAR55 = VAR50;
                        }
                        else
                        {
                            if (VAR50 > 0)
                            {
                                VAR12 = (VAR11 *)(VAR15 & ~VAR46);
                                FUN33(VAR2, VAR50, VAR12, false);
                                FUN34(&VAR16, VAR2);
                            }
                            VAR2->VAR25 = VAR26;
                            VAR15 = 0;
                            FUN16(VAR2);
                        }
                        break;
                    }
                    default:
                        break;
                    }
                }
                FUN34(&VAR16, VAR2);
            }
        }
        else
        {
            VAR2 = VAR21;
            VAR4 = FUN2(VAR2);
            VAR2->VAR56 = 1;
            VAR6 = FUN3(VAR2);
            VAR8 = &VAR6->VAR8;
            FUN35();
        }
    }
    VAR4->FUN36(VAR2);
    FUN37();
    VAR21 = NULL;
    FUN38(&VAR22, NULL);
    return VAR9;
}