static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5;
    int VAR6, VAR7, VAR8, VAR9, VAR10;
    int VAR11, VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16;
    int32_t VAR17[VAR18][VAR18];
    int VAR19[VAR18];
    VAR20 *VAR21, *VAR22;
    VAR14 = &VAR2->VAR14;
    VAR16 = &VAR14->VAR23[VAR3];
    VAR21 = VAR16->VAR24;
    VAR22 = VAR16->VAR25;
    VAR5 = VAR14->VAR26;
    for (VAR4 = 1; VAR4 < VAR5; VAR4++)
    {
        if (VAR22[VAR4] != VAR22[0])
            break;
    }
    if (VAR4 == VAR5)
    {
        VAR16->VAR27 = VAR16->VAR28 = VAR29;
        VAR21[0] = VAR22[0];
        return VAR16->VAR30;
    }
    if (VAR5 < 5)
    {
        VAR16->VAR27 = VAR16->VAR28 = VAR31;
        FUN2(VAR21, VAR22, VAR5);
        return VAR16->VAR30 * VAR5;
    }
    VAR6 = VAR2->VAR32.VAR33;
    VAR7 = VAR2->VAR32.VAR34;
    VAR11 = VAR2->VAR32.VAR35;
    VAR12 = VAR2->VAR32.VAR36;
    VAR9 = VAR2->VAR32.VAR37;
    VAR10 = VAR2->VAR32.VAR38;
    if (!VAR2->VAR32.VAR39 || VAR7 == 0 || (VAR5 <= VAR7))
    {
        uint32_t VAR40[VAR41 + 1];
        if (VAR7 > VAR41)
            VAR7 = VAR41;
        VAR8 = 0;
        VAR40[0] = VAR42;
        for (VAR4 = VAR6; VAR4 <= VAR7; VAR4++)
        {
            FUN3(VAR21, VAR22, VAR5, VAR4);
            VAR40[VAR4] = FUN4(&VAR16->VAR43, VAR11, VAR12, VAR21, VAR5, VAR4, VAR16->VAR30);
            if (VAR40[VAR4] < VAR40[VAR8])
            {
                VAR8 = VAR4;
            }
        }
        VAR16->VAR44 = VAR8;
        VAR16->VAR27 = VAR45;
        VAR16->VAR28 = VAR16->VAR27 | VAR16->VAR44;
        if (VAR16->VAR44 != VAR7)
        {
            FUN3(VAR21, VAR22, VAR5, VAR16->VAR44);
            return FUN4(&VAR16->VAR43, VAR11, VAR12, VAR21, VAR5, VAR16->VAR44, VAR16->VAR30);
        }
        return VAR40[VAR16->VAR44];
    }
    VAR8 = FUN5(&VAR2->VAR46, VAR22, VAR5, VAR6, VAR7, VAR9, VAR17, VAR19, VAR2->VAR32.VAR39, VAR10, VAR47, 0);
    if (VAR10 == VAR48 || VAR10 == VAR49 || VAR10 == VAR50)
    {
        int VAR51 = 1 << VAR10;
        uint32_t VAR40[VAR51];
        int VAR44;
        int VAR52 = VAR51 - 1;
        VAR8 = VAR7 - 1;
        VAR40[VAR52] = VAR42;
        for (VAR4 = VAR51 - 1; VAR4 >= 0; VAR4--)
        {
            VAR44 = VAR6 + (((VAR7 - VAR6 + 1) * (VAR4 + 1)) / VAR51) - 1;
            if (VAR44 < 0)
                VAR44 = 0;
            FUN6(VAR21, VAR22, VAR5, VAR44 + 1, VAR17[VAR44], VAR19[VAR44]);
            VAR40[VAR4] = FUN7(&VAR16->VAR43, VAR11, VAR12, VAR21, VAR5, VAR44 + 1, VAR16->VAR30, VAR9);
            if (VAR40[VAR4] < VAR40[VAR52])
            {
                VAR52 = VAR4;
                VAR8 = VAR44;
            }
        }
        VAR8++;
    }
    else if (VAR10 == VAR53)
    {
        uint32_t VAR40[VAR18];
        VAR8 = 0;
        VAR40[0] = VAR42;
        for (VAR4 = VAR6 - 1; VAR4 < VAR7; VAR4++)
        {
            FUN6(VAR21, VAR22, VAR5, VAR4 + 1, VAR17[VAR4], VAR19[VAR4]);
            VAR40[VAR4] = FUN7(&VAR16->VAR43, VAR11, VAR12, VAR21, VAR5, VAR4 + 1, VAR16->VAR30, VAR9);
            if (VAR40[VAR4] < VAR40[VAR8])
            {
                VAR8 = VAR4;
            }
        }
        VAR8++;
    }
    else if (VAR10 == VAR54)
    {
        uint32_t VAR40[VAR18];
        int VAR55;
        VAR8 = VAR6 - 1 + (VAR7 - VAR6) / 3;
        memset(VAR40, -1, sizeof(VAR40));
        for (VAR55 = 16; VAR55; VAR55 >>= 1)
        {
            int VAR56 = VAR8;
            for (VAR4 = VAR56 - VAR55; VAR4 <= VAR56 + VAR55; VAR4 += VAR55)
            {
                if (VAR4 < VAR6 - 1 || VAR4 >= VAR7 || VAR40[VAR4] < VAR42)
                    continue;
                FUN6(VAR21, VAR22, VAR5, VAR4 + 1, VAR17[VAR4], VAR19[VAR4]);
                VAR40[VAR4] = FUN7(&VAR16->VAR43, VAR11, VAR12, VAR21, VAR5, VAR4 + 1, VAR16->VAR30, VAR9);
                if (VAR40[VAR4] < VAR40[VAR8])
                    VAR8 = VAR4;
            }
        }
        VAR8++;
    }
    VAR16->VAR44 = VAR8;
    VAR16->VAR27 = VAR57;
    VAR16->VAR28 = VAR16->VAR27 | (VAR16->VAR44 - 1);
    VAR16->VAR19 = VAR19[VAR16->VAR44 - 1];
    for (VAR4 = 0; VAR4 < VAR16->VAR44; VAR4++)
    {
        VAR16->VAR17[VAR4] = VAR17[VAR16->VAR44 - 1][VAR4];
    }
    FUN6(VAR21, VAR22, VAR5, VAR16->VAR44, VAR16->VAR17, VAR16->VAR19);
    return FUN7(&VAR16->VAR43, VAR11, VAR12, VAR21, VAR5, VAR16->VAR44, VAR16->VAR30, VAR9);
}