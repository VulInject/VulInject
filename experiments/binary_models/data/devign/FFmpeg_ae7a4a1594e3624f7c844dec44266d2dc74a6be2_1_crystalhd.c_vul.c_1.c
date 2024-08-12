static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    BC_STATUS VAR7;
    BC_DTS_STATUS VAR8;
    CopyRet VAR9;
    VAR10 *VAR11 = VAR2->VAR12;
    HANDLE VAR13 = VAR11->VAR13;
    int VAR14 = VAR6->VAR15;
    uint8_t VAR16 = 0;
    FUN2(VAR2, VAR17, "");
    if (VAR14)
    {
        int32_t VAR18 = (VAR19)FUN3(VAR13);
        if (VAR11->VAR20)
        {
            VAR21 *VAR22;
            int VAR23 = VAR14;
            VAR24 *VAR25 = VAR11->VAR20->VAR12;
            while (VAR23)
                VAR7 = FUN4(VAR11->VAR20, VAR2, &VAR22, &VAR23, VAR6->VAR3, VAR14, VAR2->VAR26->VAR27, VAR2->VAR26->VAR28, VAR14 - VAR23);
            FUN2(VAR2, VAR17, "", VAR25->VAR29.VAR30);
            VAR16 = VAR25->VAR29.VAR30;
        }
        if (VAR14 < VAR18 - 1024)
        {
            uint64_t VAR27 = FUN5(VAR11, VAR2->VAR26->VAR27, VAR16);
            if (!VAR27)
            {
                return FUN6(VAR31);
            }
            FUN2(VAR11->VAR2, VAR17, ""VAR27\"" VAR32 "", VAR27);
            VAR7 = FUN7(VAR13, VAR6->VAR3, VAR14, VAR27, 0);
            if (VAR7 == VAR33)
            {
                FUN2(VAR2, VAR34, "");
                FUN8(VAR35);
                return FUN6(VAR36);
            }
            else if (VAR7 != VAR37)
            {
                FUN2(VAR2, VAR38, "", VAR7);
                return -1;
            }
            VAR2->VAR39++;
        }
        else
        {
            FUN2(VAR2, VAR34, "");
            VAR14 = 0;
        }
    }
    else
    {
        FUN2(VAR2, VAR40, "");
    }
    if (VAR11->VAR41)
    {
        FUN2(VAR2, VAR17, "");
        VAR11->VAR41 = 0;
        VAR2->VAR39--;
        return VAR14;
    }
    VAR7 = FUN9(VAR13, &VAR8);
    if (VAR7 != VAR37)
    {
        FUN2(VAR2, VAR38, "");
        return -1;
    }
    if (VAR11->VAR42 < 2)
    {
        if (VAR8.VAR43 != 0)
            VAR11->VAR42++;
        FUN8(VAR35);
        FUN2(VAR2, VAR40, "");
        return VAR14;
    }
    else if (VAR8.VAR43 == 0)
    {
        FUN8(VAR35);
        VAR11->VAR44 += VAR45;
        FUN2(VAR2, VAR40, "");
        return VAR14;
    }
    do
    {
        VAR9 = FUN10(VAR2, VAR3, VAR4, 0);
        if (VAR9 == VAR46 && *VAR4 == 0)
        {
            FUN2(VAR2, VAR17, "");
            VAR2->VAR39--;
        }
        else if (VAR9 == VAR47)
        {
            FUN2(VAR2, VAR17, "");
            while (1)
            {
                FUN8(VAR11->VAR44);
                VAR7 = FUN9(VAR13, &VAR8);
                if (VAR7 == VAR37 && VAR8.VAR43 > 0)
                {
                    VAR9 = FUN10(VAR2, VAR3, VAR4, 1);
                    if ((VAR9 == VAR46 && *VAR4 > 0) || VAR9 == VAR48)
                        break;
                }
            }
            FUN2(VAR2, VAR17, "");
        }
        else if (VAR9 == VAR49)
        {
            FUN2(VAR2, VAR17, "");
            VAR11->VAR41 = 1;
        }
    } while (VAR9 == VAR50);
    FUN8(VAR11->VAR44);
    return VAR14;
}