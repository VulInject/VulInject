static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *const VAR5 = &VAR2->VAR5;
    const int VAR6 = VAR2->VAR6;
    int VAR7, VAR8[2];
    int VAR9, VAR10[2];
    VAR11 *VAR12;
    VAR11 *VAR13;
    VAR7 = VAR6 - (VAR5->VAR14 << VAR15);
    VAR8[1] = VAR8[0] = VAR6 - 1;
    if (VAR16)
    {
        const int VAR17 = FUN2(VAR5->VAR18.VAR3[VAR6 - 1]);
        const int VAR19 = FUN2(VAR3);
        if (VAR5->VAR20 & 1)
        {
            if (VAR17 != VAR19)
            {
                VAR8[0] -= VAR5->VAR14;
            }
        }
        else
        {
            if (VAR19)
            {
                VAR7 += VAR5->VAR14 & (((VAR5->VAR18.VAR3[VAR7] >> 7) & 1) - 1);
            }
            if (VAR17 != VAR19)
            {
                VAR8[1] += VAR5->VAR14;
            }
        }
    }
    VAR2->VAR21 = VAR7;
    VAR2->VAR22[0] = VAR8[0];
    VAR2->VAR22[1] = VAR8[1];
    {
        int VAR23 = VAR2->VAR23;
        int VAR24 = VAR5->VAR18.VAR25[VAR6];
        if (VAR24 <= VAR23 && (VAR8[0] < 0 || ((VAR24 + VAR5->VAR18.VAR25[VAR8[0]] + 1) >> 1) <= VAR23) && (VAR7 < 0 || ((VAR24 + VAR5->VAR18.VAR25[VAR7] + 1) >> 1) <= VAR23))
        {
            if (!VAR16)
                return 1;
            if ((VAR8[0] < 0 || ((VAR24 + VAR5->VAR18.VAR25[VAR8[1]] + 1) >> 1) <= VAR23) && (VAR7 < VAR5->VAR14 || ((VAR24 + VAR5->VAR18.VAR25[VAR7 - VAR5->VAR14] + 1) >> 1) <= VAR23))
                return 1;
        }
    }
    VAR9 = VAR5->VAR18.VAR3[VAR7];
    VAR10[0] = VAR5->VAR18.VAR3[VAR8[0]];
    VAR10[1] = VAR5->VAR18.VAR3[VAR8[1]];
    if (VAR2->VAR26 == 2)
    {
        if (VAR2->VAR27[VAR7] != VAR2->VAR28)
            VAR9 = 0;
        if (VAR2->VAR27[VAR8[0]] != VAR2->VAR28)
            VAR10[0] = VAR10[1] = 0;
    }
    else
    {
        if (VAR2->VAR27[VAR7] == 0xFFFF)
            VAR9 = 0;
        if (VAR2->VAR27[VAR8[0]] == 0xFFFF)
            VAR10[0] = VAR10[1] = 0;
    }
    VAR2->VAR9 = VAR9;
    VAR2->VAR10[0] = VAR10[0];
    VAR2->VAR10[1] = VAR10[1];
    if (FUN3(VAR3))
        return 0;
    FUN4(VAR2, VAR5, VAR3, VAR7, VAR8, VAR9, VAR10, VAR6, 0);
    if (VAR2->VAR29 == 2)
        FUN4(VAR2, VAR5, VAR3, VAR7, VAR8, VAR9, VAR10, VAR6, 1);
    VAR12 = VAR2->VAR30[VAR6];
    VAR13 = VAR2->VAR31;
    FUN5(&VAR13[4 + 8 * 1], &VAR12[0]);
    FUN5(&VAR13[4 + 8 * 2], &VAR12[4]);
    FUN5(&VAR13[4 + 8 * 3], &VAR12[8]);
    FUN5(&VAR13[4 + 8 * 4], &VAR12[12]);
    VAR2->VAR32 = VAR2->VAR33[VAR6];
    if (VAR9)
    {
        VAR12 = VAR2->VAR30[VAR7];
        FUN5(&VAR13[4 + 8 * 0], &VAR12[3 * 4]);
    }
    if (VAR10[0])
    {
        VAR12 = VAR2->VAR30[VAR8[0]];
        VAR13[3 + 8 * 1] = VAR12[3 + 0 * 4];
        VAR13[3 + 8 * 2] = VAR12[3 + 1 * 4];
        VAR13[3 + 8 * 3] = VAR12[3 + 2 * 4];
        VAR13[3 + 8 * 4] = VAR12[3 + 3 * 4];
    }
    if (!VAR34 && VAR2->VAR35.VAR36)
    {
        if (FUN6(VAR9))
        {
            VAR13[4 + 8 * 0] = VAR13[5 + 8 * 0] = (VAR2->VAR33[VAR7] & 0x4000) >> 12;
            VAR13[6 + 8 * 0] = VAR13[7 + 8 * 0] = (VAR2->VAR33[VAR7] & 0x8000) >> 12;
        }
        if (FUN6(VAR10[0]))
        {
            VAR13[3 + 8 * 1] = VAR13[3 + 8 * 2] = (VAR2->VAR33[VAR8[0]] & 0x2000) >> 12;
        }
        if (FUN6(VAR10[1]))
        {
            VAR13[3 + 8 * 3] = VAR13[3 + 8 * 4] = (VAR2->VAR33[VAR8[1]] & 0x8000) >> 12;
        }
        if (FUN6(VAR3))
        {
            VAR13[VAR37[0]] = VAR13[VAR37[1]] = VAR13[VAR37[2]] = VAR13[VAR37[3]] = (VAR2->VAR32 & 0x1000) >> 12;
            VAR13[VAR37[0 + 4]] = VAR13[VAR37[1 + 4]] = VAR13[VAR37[2 + 4]] = VAR13[VAR37[3 + 4]] = (VAR2->VAR32 & 0x2000) >> 12;
            VAR13[VAR37[0 + 8]] = VAR13[VAR37[1 + 8]] = VAR13[VAR37[2 + 8]] = VAR13[VAR37[3 + 8]] = (VAR2->VAR32 & 0x4000) >> 12;
            VAR13[VAR37[0 + 12]] = VAR13[VAR37[1 + 12]] = VAR13[VAR37[2 + 12]] = VAR13[VAR37[3 + 12]] = (VAR2->VAR32 & 0x8000) >> 12;
        }
    }
    return 0;
}