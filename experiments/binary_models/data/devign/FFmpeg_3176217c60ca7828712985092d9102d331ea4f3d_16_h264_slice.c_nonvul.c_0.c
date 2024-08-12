static int FUN1(const VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    const int VAR6 = VAR4->VAR6;
    int VAR7, VAR8[VAR9];
    int VAR10, VAR11[VAR9];
    VAR12 *VAR13;
    VAR12 *VAR14;
    VAR7 = VAR6 - (VAR2->VAR15 << FUN2(VAR4));
    VAR8[VAR16] = VAR8[VAR17] = VAR6 - 1;
    if (FUN3(VAR2))
    {
        const int VAR18 = FUN4(VAR2->VAR19.VAR5[VAR6 - 1]);
        const int VAR20 = FUN4(VAR5);
        if (VAR4->VAR21 & 1)
        {
            if (VAR18 != VAR20)
                VAR8[VAR17] -= VAR2->VAR15;
        }
        else
        {
            if (VAR20)
                VAR7 += VAR2->VAR15 & (((VAR2->VAR19.VAR5[VAR7] >> 7) & 1) - 1);
            if (VAR18 != VAR20)
                VAR8[VAR16] += VAR2->VAR15;
        }
    }
    VAR4->VAR22 = VAR7;
    VAR4->VAR23[VAR17] = VAR8[VAR17];
    VAR4->VAR23[VAR16] = VAR8[VAR16];
    {
        int VAR24 = VAR4->VAR24;
        int VAR25 = VAR2->VAR19.VAR26[VAR6];
        if (VAR25 <= VAR24 && (VAR8[VAR17] < 0 || ((VAR25 + VAR2->VAR19.VAR26[VAR8[VAR17]] + 1) >> 1) <= VAR24) && (VAR7 < 0 || ((VAR25 + VAR2->VAR19.VAR26[VAR7] + 1) >> 1) <= VAR24))
        {
            if (!FUN3(VAR2))
                return 1;
            if ((VAR8[VAR17] < 0 || ((VAR25 + VAR2->VAR19.VAR26[VAR8[VAR16]] + 1) >> 1) <= VAR24) && (VAR7 < VAR2->VAR15 || ((VAR25 + VAR2->VAR19.VAR26[VAR7 - VAR2->VAR15] + 1) >> 1) <= VAR24))
                return 1;
        }
    }
    VAR10 = VAR2->VAR19.VAR5[VAR7];
    VAR11[VAR17] = VAR2->VAR19.VAR5[VAR8[VAR17]];
    VAR11[VAR16] = VAR2->VAR19.VAR5[VAR8[VAR16]];
    if (VAR4->VAR27 == 2)
    {
        if (VAR2->VAR28[VAR7] != VAR4->VAR29)
            VAR10 = 0;
        if (VAR2->VAR28[VAR8[VAR16]] != VAR4->VAR29)
            VAR11[VAR17] = VAR11[VAR16] = 0;
    }
    else
    {
        if (VAR2->VAR28[VAR7] == 0xFFFF)
            VAR10 = 0;
        if (VAR2->VAR28[VAR8[VAR16]] == 0xFFFF)
            VAR11[VAR17] = VAR11[VAR16] = 0;
    }
    VAR4->VAR10 = VAR10;
    VAR4->VAR11[VAR17] = VAR11[VAR17];
    VAR4->VAR11[VAR16] = VAR11[VAR16];
    if (FUN5(VAR5))
        return 0;
    FUN6(VAR2, VAR4, VAR5, VAR7, VAR8, VAR10, VAR11, VAR6, 0);
    if (VAR4->VAR30 == 2)
        FUN6(VAR2, VAR4, VAR5, VAR7, VAR8, VAR10, VAR11, VAR6, 1);
    VAR13 = VAR2->VAR31[VAR6];
    VAR14 = VAR4->VAR32;
    FUN7(&VAR14[4 + 8 * 1], &VAR13[0]);
    FUN7(&VAR14[4 + 8 * 2], &VAR13[4]);
    FUN7(&VAR14[4 + 8 * 3], &VAR13[8]);
    FUN7(&VAR14[4 + 8 * 4], &VAR13[12]);
    VAR4->VAR33 = VAR2->VAR34[VAR6];
    if (VAR10)
    {
        VAR13 = VAR2->VAR31[VAR7];
        FUN7(&VAR14[4 + 8 * 0], &VAR13[3 * 4]);
    }
    if (VAR11[VAR17])
    {
        VAR13 = VAR2->VAR31[VAR8[VAR17]];
        VAR14[3 + 8 * 1] = VAR13[3 + 0 * 4];
        VAR14[3 + 8 * 2] = VAR13[3 + 1 * 4];
        VAR14[3 + 8 * 3] = VAR13[3 + 2 * 4];
        VAR14[3 + 8 * 4] = VAR13[3 + 3 * 4];
    }
    if (!FUN8(VAR2) && VAR2->VAR35.VAR36->VAR37)
    {
        if (FUN9(VAR10))
        {
            VAR14[4 + 8 * 0] = VAR14[5 + 8 * 0] = (VAR2->VAR34[VAR7] & 0x4000) >> 12;
            VAR14[6 + 8 * 0] = VAR14[7 + 8 * 0] = (VAR2->VAR34[VAR7] & 0x8000) >> 12;
        }
        if (FUN9(VAR11[VAR17]))
        {
            VAR14[3 + 8 * 1] = VAR14[3 + 8 * 2] = (VAR2->VAR34[VAR8[VAR17]] & 0x2000) >> 12;
        }
        if (FUN9(VAR11[VAR16]))
        {
            VAR14[3 + 8 * 3] = VAR14[3 + 8 * 4] = (VAR2->VAR34[VAR8[VAR16]] & 0x8000) >> 12;
        }
        if (FUN9(VAR5))
        {
            VAR14[VAR38[0]] = VAR14[VAR38[1]] = VAR14[VAR38[2]] = VAR14[VAR38[3]] = (VAR4->VAR33 & 0x1000) >> 12;
            VAR14[VAR38[0 + 4]] = VAR14[VAR38[1 + 4]] = VAR14[VAR38[2 + 4]] = VAR14[VAR38[3 + 4]] = (VAR4->VAR33 & 0x2000) >> 12;
            VAR14[VAR38[0 + 8]] = VAR14[VAR38[1 + 8]] = VAR14[VAR38[2 + 8]] = VAR14[VAR38[3 + 8]] = (VAR4->VAR33 & 0x4000) >> 12;
            VAR14[VAR38[0 + 12]] = VAR14[VAR38[1 + 12]] = VAR14[VAR38[2 + 12]] = VAR14[VAR38[3 + 12]] = (VAR4->VAR33 & 0x8000) >> 12;
        }
    }
    return 0;
}