static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12, *VAR13;
    int VAR14, VAR15, VAR16, VAR17, VAR18, VAR19;
    VAR20 *VAR21 = VAR3;
    FUN2(&VAR9->VAR22, VAR6, VAR7 * 8);
    VAR9->VAR23 = FUN3(&VAR9->VAR22, 22);
    if ((VAR9->VAR23 & ~0x70) || !(VAR9->VAR23 & 0x60))
        return -1;
    if (VAR9->VAR23 != 0x20)
    {
        VAR24 *VAR25 = (VAR24 *)(VAR6 + 4);
        for (VAR15 = 0; VAR15 < 4; VAR15++)
        {
            VAR25[VAR15] = ((VAR25[VAR15] << 16) | (VAR25[VAR15] >> 16)) ^ VAR25[7 - VAR15];
        }
    }
    VAR14 = FUN4(&VAR9->VAR22, VAR9);
    if (VAR14 != 0)
    {
        FUN5("", VAR14);
        return VAR14;
    }
    if (VAR9->VAR26 == VAR27 && VAR9->VAR28.VAR3[0] == NULL)
        return VAR7;
    if (VAR2->VAR29 && VAR9->VAR26 == VAR27)
        return VAR7;
    if (FUN6(VAR9, VAR2) < 0)
        return -1;
    for (VAR15 = 0; VAR15 < 3; VAR15++)
    {
        int VAR30;
        if (VAR15 == 0)
        {
            VAR18 = (VAR9->VAR18 + 15) & ~15;
            VAR19 = (VAR9->VAR19 + 15) & ~15;
            VAR30 = VAR9->VAR30;
        }
        else
        {
            if (VAR9->VAR31 & VAR32)
                break;
            VAR18 = (VAR9->VAR18 / 4 + 15) & ~15;
            VAR19 = (VAR9->VAR19 / 4 + 15) & ~15;
            VAR30 = VAR9->VAR33;
        }
        VAR12 = VAR9->VAR34.VAR3[VAR15];
        if (VAR9->VAR26 == VAR27)
        {
            VAR13 = VAR9->VAR35.VAR3[VAR15];
        }
        else
        {
            VAR13 = VAR9->VAR28.VAR3[VAR15];
        }
        if (VAR9->VAR26 == VAR36)
        {
            for (VAR17 = 0; VAR17 < VAR19; VAR17 += 16)
            {
                for (VAR16 = 0; VAR16 < VAR18; VAR16 += 16)
                {
                    VAR14 = FUN7(&VAR9->VAR22, &VAR12[VAR16], VAR30);
                    if (VAR14 != 0)
                    {
                        FUN5("", VAR14);
                        return VAR14;
                    }
                }
                VAR12 += 16 * VAR30;
            }
        }
        else
        {
            svq1_pmv_t VAR37[VAR18 / 8 + 3];
            memset(VAR37, 0, ((VAR18 / 8) + 3) * sizeof(VAR38));
            for (VAR17 = 0; VAR17 < VAR19; VAR17 += 16)
            {
                for (VAR16 = 0; VAR16 < VAR18; VAR16 += 16)
                {
                    VAR14 = FUN8(VAR9, &VAR9->VAR22, &VAR12[VAR16], VAR13, VAR30, VAR37, VAR16, VAR17);
                    if (VAR14 != 0)
                    {
                        FUN5("", VAR14);
                        return VAR14;
                    }
                }
                VAR37[0].VAR16 = VAR37[0].VAR17 = 0;
                VAR12 += 16 * VAR30;
            }
        }
    }
    *VAR21 = *(VAR20 *)&VAR9->VAR34;
    FUN9(VAR9);
    *VAR4 = sizeof(VAR20);
    return VAR7;
}