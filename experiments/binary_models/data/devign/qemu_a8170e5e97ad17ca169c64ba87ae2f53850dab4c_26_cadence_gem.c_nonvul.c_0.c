static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, size_t VAR6)
{
    unsigned VAR7[2];
    hwaddr VAR8, VAR9;
    VAR10 *VAR11;
    unsigned VAR12, VAR13;
    unsigned VAR14;
    uint8_t VAR15[2048];
    VAR4 *VAR16;
    VAR11 = FUN2(VAR17, VAR3, VAR3)->VAR18;
    if (!(VAR11->VAR19[VAR20] & VAR21))
    {
        return -1;
    }
    if (FUN3(VAR11, VAR5) == VAR22)
    {
        return -1;
    }
    if (VAR11->VAR19[VAR23] & VAR24)
    {
        unsigned VAR25;
        VAR25 = VAR5[12] << 8 | VAR5[13];
        if (VAR25 < 0x600)
        {
            if (VAR6 < VAR25)
            {
                return -1;
            }
        }
    }
    VAR14 = (VAR11->VAR19[VAR23] & VAR26) >> VAR27;
    VAR12 = ((VAR11->VAR19[VAR28] & VAR29) >> VAR30) * VAR31;
    VAR13 = VAR6;
    if (VAR11->VAR19[VAR23] & VAR32)
    {
        VAR16 = (void *)VAR5;
    }
    else
    {
        unsigned VAR33;
        int VAR34;
        memcpy(VAR15, VAR5, VAR6);
        memset(VAR15 + VAR6, 0, sizeof(VAR15) - VAR6);
        VAR16 = VAR15;
        VAR33 = FUN4(FUN5(0, VAR15, FUN6(VAR6, 60)));
        if (VAR6 < 60)
        {
            VAR34 = 60;
        }
        else
        {
            VAR34 = VAR6;
        }
        memcpy(VAR15 + VAR34, &VAR33, sizeof(VAR33));
        VAR13 += 4;
        VAR6 += 4;
    }
    if (VAR6 < 64)
    {
        VAR6 = 64;
    }
    FUN7("", VAR12, VAR6);
    VAR8 = VAR11->VAR35;
    while (1)
    {
        FUN7("", VAR8);
        FUN8(VAR8, (VAR4 *)&VAR7[0], sizeof(VAR7));
        if (FUN9(VAR7) == 1)
        {
            FUN7("", VAR8);
            VAR11->VAR19[VAR36] |= VAR37;
            FUN10(VAR11);
            return -1;
        }
        FUN7("", FUN11(VAR13, VAR12), FUN12(VAR7));
        if (FUN12(VAR7) == 0)
        {
            FUN7("", VAR8);
            break;
        }
        FUN13(FUN12(VAR7) + VAR14, VAR16, FUN11(VAR13, VAR12));
        VAR13 -= FUN11(VAR13, VAR12);
        VAR16 += FUN11(VAR13, VAR12);
        if (VAR13 == 0)
        {
            break;
        }
        if (FUN14(VAR7))
        {
            VAR8 = VAR11->VAR19[VAR38];
        }
        else
        {
            VAR8 += 8;
        }
    }
    FUN7("", VAR6, (unsigned)VAR8);
    FUN15(VAR7);
    FUN16(VAR7, VAR6);
    FUN13(VAR8, (VAR4 *)&VAR7[0], sizeof(VAR7));
    VAR9 = VAR8;
    VAR8 = VAR11->VAR35;
    VAR11->VAR35 = VAR9;
    if (FUN14(VAR7))
    {
        VAR11->VAR35 = VAR11->VAR19[VAR38];
    }
    else
    {
        VAR11->VAR35 += 8;
    }
    FUN7("", VAR8);
    FUN17(VAR11, VAR5, VAR6);
    FUN8(VAR8, (VAR4 *)&VAR7[0], sizeof(VAR7));
    FUN18(VAR7);
    FUN19(VAR7);
    FUN13(VAR8, (VAR4 *)&VAR7[0], sizeof(VAR7));
    VAR11->VAR19[VAR36] |= VAR39;
    FUN10(VAR11);
    return VAR6;
}