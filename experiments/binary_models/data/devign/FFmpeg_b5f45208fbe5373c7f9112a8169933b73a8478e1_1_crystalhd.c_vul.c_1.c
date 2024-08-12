static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    BC_STATUS VAR7;
    BC_DTS_STATUS VAR8 = {
        0,
    };
    CopyRet VAR9;
    VAR10 *VAR11 = VAR2->VAR12;
    HANDLE VAR13 = VAR11->VAR13;
    VAR14 *VAR15 = VAR6->VAR3;
    int VAR16 = VAR6->VAR17;
    int VAR18 = 0;
    uint8_t VAR19 = 0;
    FUN2(VAR2, VAR20, "");
    if (VAR6->VAR17 == 7 && !VAR11->VAR21)
    {
        FUN2(VAR2, VAR22, "");
        VAR11->VAR21 = 1;
    }
    else if (VAR6->VAR17 == 8 && VAR11->VAR21)
    {
        FUN2(VAR2, VAR22, "");
        VAR11->VAR21 = 0;
    }
    if (VAR16)
    {
        int32_t VAR23 = (VAR24)FUN3(VAR13);
        if (VAR11->VAR25)
        {
            int VAR7 = 0;
            AVPacket VAR26 = {0};
            AVPacket VAR27 = {0};
            VAR7 = FUN4(&VAR26, VAR6);
            if (VAR7 < 0)
            {
                FUN2(VAR2, VAR28, ""
                                            "");
                return VAR7;
            }
            VAR7 = FUN5(VAR11->VAR25, &VAR26);
            if (VAR7 < 0)
            {
                FUN2(VAR2, VAR28, ""
                                            "");
                return VAR7;
            }
            VAR7 = FUN6(VAR11->VAR25, &VAR27);
            if (VAR7 < 0)
            {
                FUN2(VAR2, VAR28, ""
                                            "");
                return VAR7;
            }
            VAR15 = VAR27.VAR3;
            VAR16 = VAR27.VAR17;
            FUN7(&VAR26);
        }
        if (VAR11->VAR29)
        {
            int VAR7 = 0;
            VAR18 = VAR7 > 0;
            if (VAR7 >= 0)
            {
                VAR14 *VAR30;
                int VAR31;
                int VAR32;
                VAR33 *VAR34 = VAR11->VAR29->VAR12;
                VAR32 = FUN8(VAR11->VAR29, VAR2, &VAR30, &VAR31, VAR15, VAR16, VAR2->VAR35->VAR36->VAR37, VAR2->VAR35->VAR36->VAR38, 0);
                if (VAR32 < 0)
                {
                    FUN2(VAR2, VAR39, ""
                                                  "");
                }
                else if (VAR32 != VAR16)
                {
                    FUN2(VAR2, VAR39, ""
                                                  ""
                                                  "");
                }
                else
                {
                    FUN2(VAR2, VAR20, "", VAR34->VAR40);
                    VAR19 = VAR34->VAR40;
                }
            }
            else
            {
                FUN2(VAR2, VAR39, ""
                                              ""
                                              "");
            }
        }
        if (VAR16 < VAR23 - 1024)
        {
            uint64_t VAR37 = FUN9(VAR11, VAR2->VAR35->VAR36->VAR37, VAR19);
            if (!VAR37)
            {
                if (VAR18)
                {
                    FUN10(&VAR15);
                }
                return FUN11(VAR41);
            }
            FUN2(VAR11->VAR2, VAR20, ""VAR37\"" VAR42 "", VAR37);
            VAR7 = FUN12(VAR13, VAR15, VAR16, VAR37, 0);
            if (VAR18)
            {
                FUN10(&VAR15);
            }
            if (VAR7 == VAR43)
            {
                FUN2(VAR2, VAR39, "");
                FUN13(VAR44);
                return FUN11(VAR45);
            }
            else if (VAR7 != VAR46)
            {
                FUN2(VAR2, VAR28, "", VAR7);
                return -1;
            }
            VAR2->VAR47++;
        }
        else
        {
            FUN2(VAR2, VAR39, "");
            VAR16 = 0;
        }
    }
    else
    {
        FUN2(VAR2, VAR22, "");
    }
    if (VAR11->VAR48)
    {
        FUN2(VAR2, VAR20, "");
        VAR11->VAR48 = 0;
        VAR2->VAR47--;
        return VAR16;
    }
    VAR7 = FUN14(VAR13, &VAR8);
    if (VAR7 != VAR46)
    {
        FUN2(VAR2, VAR28, "");
        return -1;
    }
    if (VAR11->VAR49 < 2)
    {
        if (VAR8.VAR50 != 0)
            VAR11->VAR49++;
        FUN13(VAR44);
        FUN2(VAR2, VAR22, "");
        return VAR16;
    }
    else if (VAR8.VAR50 == 0)
    {
        FUN13(VAR44);
        VAR11->VAR51 += VAR52;
        FUN2(VAR2, VAR22, "");
        return VAR16;
    }
    do
    {
        VAR9 = FUN15(VAR2, VAR3, VAR4);
        if (VAR9 == VAR53 && *VAR4 == 0)
        {
            FUN2(VAR2, VAR20, "");
            VAR2->VAR47--;
        }
        else if (VAR9 == VAR54)
        {
            FUN2(VAR2, VAR20, "");
            while (1)
            {
                FUN13(VAR11->VAR51);
                VAR7 = FUN14(VAR13, &VAR8);
                if (VAR7 == VAR46 && VAR8.VAR50 > 0)
                {
                    VAR9 = FUN15(VAR2, VAR3, VAR4);
                    if ((VAR9 == VAR53 && *VAR4 > 0) || VAR9 == VAR55)
                        break;
                }
            }
            FUN2(VAR2, VAR20, "");
        }
        else if (VAR9 == VAR56)
        {
            FUN2(VAR2, VAR20, "");
            VAR11->VAR48 = 1;
        }
    } while (VAR9 == VAR57);
    FUN13(VAR11->VAR51);
    return VAR16;
}