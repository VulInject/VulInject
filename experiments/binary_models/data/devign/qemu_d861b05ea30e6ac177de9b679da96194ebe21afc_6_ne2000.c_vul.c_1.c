static void FUN1(void *VAR1, const VAR2 *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR1;
    VAR2 *VAR7;
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
    uint8_t VAR14[60];
    static const uint8_t VAR15[6] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
    FUN2("", VAR4);
    if (!FUN3(VAR6))
        return;
    if (VAR6->VAR16 & 0x10)
    {
    }
    else
    {
        if (!memcmp(VAR3, VAR15, 6))
        {
            if (!(VAR6->VAR16 & 0x04))
                return;
        }
        else if (VAR3[0] & 0x01)
        {
            if (!(VAR6->VAR16 & 0x08))
                return;
            VAR13 = FUN4(VAR3);
            if (!(VAR6->VAR17[VAR13 >> 3] & (1 << (VAR13 & 7))))
                return;
        }
        else if (VAR6->VAR18[0] == VAR3[0] && VAR6->VAR18[2] == VAR3[1] && VAR6->VAR18[4] == VAR3[2] && VAR6->VAR18[6] == VAR3[3] && VAR6->VAR18[8] == VAR3[4] && VAR6->VAR18[10] == VAR3[5])
        {
        }
        else
        {
            return;
        }
    }
    if (VAR4 < VAR19)
    {
        memcpy(VAR14, VAR3, VAR4);
        memset(VAR14 + VAR4, 0, VAR19 - VAR4);
        VAR3 = VAR14;
        VAR4 = VAR19;
    }
    VAR12 = VAR6->VAR20 << 8;
    VAR8 = VAR4 + 4;
    VAR9 = VAR12 + ((VAR8 + 4 + 255) & ~0xff);
    if (VAR9 >= VAR6->VAR21)
        VAR9 -= (VAR6->VAR21 - VAR6->VAR22);
    VAR7 = VAR6->VAR18 + VAR12;
    VAR6->VAR23 = VAR24;
    if (VAR3[0] & 0x01)
        VAR6->VAR23 |= VAR25;
    VAR7[0] = VAR6->VAR23;
    VAR7[1] = VAR9 >> 8;
    VAR7[2] = VAR8;
    VAR7[3] = VAR8 >> 8;
    VAR12 += 4;
    while (VAR4 > 0)
    {
        VAR10 = VAR6->VAR21 - VAR12;
        VAR11 = VAR4;
        if (VAR11 > VAR10)
            VAR11 = VAR10;
        memcpy(VAR6->VAR18 + VAR12, VAR3, VAR11);
        VAR3 += VAR11;
        VAR12 += VAR11;
        if (VAR12 == VAR6->VAR21)
            VAR12 = VAR6->VAR22;
        VAR4 -= VAR11;
    }
    VAR6->VAR20 = VAR9 >> 8;
    VAR6->VAR26 |= VAR27;
    FUN5(VAR6);
}