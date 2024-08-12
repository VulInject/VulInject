static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR3 **VAR6, int *VAR7, uint8_t VAR8)
{
    uint8_t VAR9[16];
    int VAR10, VAR11, VAR12;
    uint32_t VAR13;
    uint32_t VAR14 = 0;
    enum RTMPPacketType VAR15;
    int VAR16 = 0;
    int VAR17, VAR18;
    VAR3 *VAR19;
    VAR16++;
    VAR10 = VAR8 & 0x3F;
    if (VAR10 < 2)
    {
        VAR9[1] = 0;
        if (FUN2(VAR2, VAR9, VAR10 + 1) != VAR10 + 1)
            return FUN3(VAR20);
        VAR16 += VAR10 + 1;
        VAR10 = FUN4(VAR9) + 64;
    }
    if ((VAR17 = FUN5(VAR6, VAR7, VAR10)) < 0)
        return VAR17;
    VAR19 = *VAR6;
    VAR12 = VAR19[VAR10].VAR12;
    VAR15 = VAR19[VAR10].VAR15;
    VAR14 = VAR19[VAR10].VAR14;
    VAR8 >>= 6;
    if (VAR8 == VAR21)
    {
        VAR13 = VAR19[VAR10].VAR13;
    }
    else
    {
        if (FUN2(VAR2, VAR9, 3) != 3)
            return FUN3(VAR20);
        VAR16 += 3;
        VAR13 = FUN6(VAR9);
        if (VAR8 != VAR22)
        {
            if (FUN2(VAR2, VAR9, 3) != 3)
                return FUN3(VAR20);
            VAR16 += 3;
            VAR12 = FUN6(VAR9);
            if (FUN2(VAR2, VAR9, 1) != 1)
                return FUN3(VAR20);
            VAR16++;
            VAR15 = VAR9[0];
            if (VAR8 == VAR23)
            {
                if (FUN2(VAR2, VAR9, 4) != 4)
                    return FUN3(VAR20);
                VAR16 += 4;
                VAR14 = FUN7(VAR9);
            }
        }
    }
    if (VAR13 == 0xFFFFFF)
    {
        if (FUN2(VAR2, VAR9, 4) != 4)
            return FUN3(VAR20);
        VAR11 = FUN8(VAR9);
    }
    else
    {
        VAR11 = VAR13;
    }
    if (VAR8 != VAR23)
        VAR11 += VAR19[VAR10].VAR11;
    if (!VAR19[VAR10].read)
    {
        if ((VAR17 = FUN9(VAR4, VAR10, VAR15, VAR11, VAR12)) < 0)
            return VAR17;
        VAR4->read = VAR16;
        VAR4->VAR24 = 0;
        VAR19[VAR10].VAR13 = VAR13;
        VAR19[VAR10].VAR11 = VAR11;
    }
    else
    {
        VAR3 *VAR25 = &VAR19[VAR10];
        VAR4->VAR26 = VAR25->VAR26;
        VAR4->VAR12 = VAR25->VAR12;
        VAR4->VAR10 = VAR25->VAR10;
        VAR4->VAR15 = VAR25->VAR15;
        VAR4->VAR13 = VAR25->VAR13;
        VAR4->VAR14 = VAR25->VAR14;
        VAR4->VAR24 = VAR25->VAR24;
        VAR4->read = VAR25->read + VAR16;
        VAR4->VAR11 = VAR25->VAR11;
        VAR25->VAR26 = NULL;
    }
    VAR4->VAR14 = VAR14;
    VAR19[VAR10].VAR10 = VAR10;
    VAR19[VAR10].VAR15 = VAR15;
    VAR19[VAR10].VAR12 = VAR12;
    VAR19[VAR10].VAR14 = VAR14;
    VAR12 = VAR12 - VAR4->VAR24;
    VAR18 = FUN10(VAR12, VAR5);
    if (FUN2(VAR2, VAR4->VAR26 + VAR4->VAR24, VAR18) != VAR18)
    {
        FUN11(VAR4);
        return FUN3(VAR20);
    }
    VAR12 -= VAR18;
    VAR4->read += VAR18;
    VAR4->VAR24 += VAR18;
    if (VAR12 > 0)
    {
        VAR3 *VAR25 = &VAR19[VAR10];
        VAR25->VAR26 = VAR4->VAR26;
        VAR25->read = VAR4->read;
        VAR25->VAR24 = VAR4->VAR24;
        return FUN3(VAR27);
    }
    VAR19[VAR10].read = 0;
    return VAR4->read;