int FUN1(VAR1 *VAR2, const VAR3 **VAR4, const VAR3 *VAR5, const VAR3 **VAR6, int *VAR7)
{
    int VAR8;
    VAR8 = FUN2(VAR4, VAR5);
    FUN3(&VAR2->VAR9, &VAR2->VAR10, VAR5 - *VAR4);
    if (!VAR2->VAR9)
        return FUN4(VAR11);
    if (VAR8 == VAR12 && !VAR2->VAR13)
    {
        const VAR3 *VAR14 = *VAR4;
        VAR3 *VAR15 = VAR2->VAR9;
        while (VAR14 < VAR5)
        {
            uint8_t VAR16 = *(VAR14++);
            *(VAR15++) = VAR16;
            if (VAR2->VAR17->VAR18 != VAR19)
            {
                if (VAR16 == 0xff)
                {
                    while (VAR14 < VAR5 && VAR16 == 0xff)
                        VAR16 = *(VAR14++);
                    if (VAR16 >= 0xd0 && VAR16 <= 0xd7)
                        *(VAR15++) = VAR16;
                    else if (VAR16)
                        break;
                }
            }
        }
        *VAR6 = VAR2->VAR9;
        *VAR7 = VAR15 - VAR2->VAR9;
        memset(VAR2->VAR9 + *VAR7, 0, VAR20);
        FUN5(VAR2->VAR17, VAR21, "" VAR22 "", (VAR5 - *VAR4) - (VAR15 - VAR2->VAR9));
    }
    else if (VAR8 == VAR12 && VAR2->VAR13)
    {
        const VAR3 *VAR14 = *VAR4;
        VAR3 *VAR15 = VAR2->VAR9;
        int VAR23 = 0;
        int VAR24 = 0, VAR25 = 0;
        PutBitContext VAR26;
        while (VAR14 + VAR24 < VAR5)
        {
            uint8_t VAR16 = VAR14[VAR24++];
            if (VAR16 == 0xff)
            {
                while ((VAR14 + VAR24 < VAR5) && VAR16 == 0xff)
                    VAR16 = VAR14[VAR24++];
                if (VAR16 & 0x80)
                {
                    VAR24 -= FUN6(2, VAR24);
                    break;
                }
            }
        }
        VAR23 = VAR24 * 8;
        FUN7(&VAR26, VAR15, VAR24);
        while (VAR25 < VAR24)
        {
            uint8_t VAR16 = VAR14[VAR25++];
            FUN8(&VAR26, 8, VAR16);
            if (VAR16 == 0xFF)
            {
                VAR16 = VAR14[VAR25++];
                if (VAR16 & 0x80)
                {
                    FUN5(VAR2->VAR17, VAR27, "");
                    VAR16 &= 0x7f;
                }
                FUN8(&VAR26, 7, VAR16);
                VAR23--;
            }
        }
        FUN9(&VAR26);
        *VAR6 = VAR15;
        *VAR7 = (VAR23 + 7) >> 3;
        memset(VAR2->VAR9 + *VAR7, 0, VAR20);
    }
    else
    {
        *VAR6 = *VAR4;
        *VAR7 = VAR5 - *VAR4;
    }
    return VAR8;
}