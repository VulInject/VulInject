static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, VAR5 *VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
    int VAR14, VAR15, VAR16, VAR17, VAR18, VAR19;
    uint32_t VAR20;
    FUN2(*VAR21)
    [2];
    VAR8 = 1 << VAR3;
    if (VAR3 > 30)
        return -1;
    VAR9 = FUN3(VAR2, VAR8, VAR7 & VAR22);
    FUN4(NULL, "", VAR9, VAR8);
    if (VAR9 < 0)
        return VAR9;
    VAR21 = &VAR2->VAR21[VAR9];
    for (VAR14 = 0; VAR14 < VAR8; VAR14++)
    {
        VAR21[VAR14][1] = 0;
        VAR21[VAR14][0] = -1;
    }
    for (VAR14 = 0; VAR14 < VAR4; VAR14++)
    {
        VAR17 = VAR6[VAR14].VAR23;
        VAR20 = VAR6[VAR14].VAR20;
        VAR12 = VAR6[VAR14].VAR12;
        FUN4(NULL, "", VAR14, VAR17, VAR20);
        if (VAR17 <= VAR3)
        {
            VAR15 = VAR20 >> (32 - VAR3);
            VAR18 = 1 << (VAR3 - VAR17);
            VAR19 = 1;
            if (VAR7 & VAR24)
            {
                VAR15 = FUN5(VAR20);
                VAR19 = 1 << VAR17;
            }
            for (VAR16 = 0; VAR16 < VAR18; VAR16++)
            {
                FUN4(NULL, "", VAR15, VAR14, VAR17);
                if (VAR21[VAR15][1] != 0)
                {
                    FUN6(NULL, VAR25, "");
                    return VAR26;
                }
                VAR21[VAR15][1] = VAR17;
                VAR21[VAR15][0] = VAR12;
                VAR15 += VAR19;
            }
        }
        else
        {
            VAR17 -= VAR3;
            VAR11 = VAR20 >> (32 - VAR3);
            VAR13 = VAR17;
            VAR6[VAR14].VAR23 = VAR17;
            VAR6[VAR14].VAR20 = VAR20 << VAR3;
            for (VAR16 = VAR14 + 1; VAR16 < VAR4; VAR16++)
            {
                VAR17 = VAR6[VAR16].VAR23 - VAR3;
                if (VAR17 <= 0)
                    break;
                VAR20 = VAR6[VAR16].VAR20;
                if (VAR20 >> (32 - VAR3) != VAR11)
                    break;
                VAR6[VAR16].VAR23 = VAR17;
                VAR6[VAR16].VAR20 = VAR20 << VAR3;
                VAR13 = FUN7(VAR13, VAR17);
            }
            VAR13 = FUN8(VAR13, VAR3);
            VAR15 = (VAR7 & VAR24) ? FUN5(VAR11) >> (32 - VAR3) : VAR11;
            VAR21[VAR15][1] = -VAR13;
            FUN4(NULL, "", VAR15, VAR6[VAR14].VAR23 + VAR3);
            VAR10 = FUN1(VAR2, VAR13, VAR16 - VAR14, VAR6 + VAR14, VAR7);
            if (VAR10 < 0)
                return VAR10;
            VAR21 = &VAR2->VAR21[VAR9];
            VAR21[VAR15][0] = VAR10;
            VAR14 = VAR16 - 1;
        }
    }
    return VAR9;