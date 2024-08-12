static int FUN1(VAR1 *VAR2, enum CodecID VAR3)
{
    int VAR4, VAR5 = 0, VAR6;
    VAR7 *VAR8, *VAR9, *VAR10;
    AC3HeaderInfo VAR11;
    GetBitContext VAR12;
    enum CodecID VAR13 = VAR14;
    VAR4 = 0;
    VAR8 = VAR2->VAR8;
    VAR10 = VAR8 + VAR2->VAR15;
    for (; VAR8 < VAR10; VAR8++)
    {
        VAR9 = VAR8;
        for (VAR6 = 0; VAR9 < VAR10; VAR6++)
        {
            FUN2(&VAR12, VAR9, 54);
            if (FUN3(&VAR12, &VAR11) < 0)
                break;
            if (VAR9 + VAR11.VAR16 > VAR10 || FUN4(FUN5(VAR17), 0, VAR9 + 2, VAR11.VAR16 - 2))
                break;
            if (VAR11.VAR18 > 10)
                VAR13 = VAR19;
            VAR9 += VAR11.VAR16;
        }
        VAR4 = FUN6(VAR4, VAR6);
        if (VAR8 == VAR2->VAR8)
            VAR5 = VAR6;
    }
    if (VAR13 != VAR3)
        return 0;
    if (VAR5 >= 4)
        return VAR20 / 2 + 1;
    if (VAR4)
    {
        int VAR21 = 0, VAR22;
        unsigned int VAR23 = -1;
        for (VAR22 = 0; VAR22 < VAR2->VAR15; VAR22++)
        {
            VAR23 = (VAR23 << 8) + VAR2->VAR8[VAR22];
            if ((VAR23 & 0xffffff00) == 0x100)
            {
                if ((VAR23 & 0x1f0) == VAR24)
                    VAR21++;
                else if ((VAR23 & 0x1e0) == VAR25)
                    VAR21++;
            }
        }
        if (VAR21)
            VAR4 = (VAR4 + VAR21 - 1) / VAR21;
    }
    if (VAR4 > 500)
        return VAR20 / 2;
    else if (VAR4 >= 4)
        return VAR20 / 4;
    else if (VAR4 >= 1)
        return 1;
    else
        return 0;
}