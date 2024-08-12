static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR4->VAR7;
    VAR8 *VAR9 = &VAR7->VAR9;
    const int VAR10 = VAR7->VAR10;
    int VAR11, VAR12;
    VAR12 = FUN2(&VAR9->VAR13, 8);
    if (((VAR12 & 0x9F) != 1 && (VAR12 & 0x9F) != 2) || (VAR12 & 0x60) == 0)
    {
        FUN3(VAR2, VAR14, "", VAR12);
        return -1;
    }
    else
    {
        int VAR15 = (VAR12 >> 5) & 3;
        VAR4->VAR16 = FUN4(&VAR9->VAR13) + 8 * FUN5(&VAR9->VAR13, 8 * VAR15) + 8 * VAR15;
        if (VAR4->VAR16 > VAR9->VAR13.VAR17)
        {
            FUN3(VAR2, VAR14, "");
            return -1;
        }
        VAR9->VAR13.VAR17 = VAR4->VAR16 - 8 * (VAR15 - 1);
        FUN6(&VAR9->VAR13, 8);
        if (VAR4->VAR18)
        {
            uint32_t VAR12 = FUN7(&VAR9->VAR13.VAR19[(FUN4(&VAR9->VAR13) >> 3) + 1]);
            FUN8(&VAR9->VAR13.VAR19[(FUN4(&VAR9->VAR13) >> 3) + 1], VAR12 ^ VAR4->VAR18);
        }
        if (VAR15 > 0)
        {
            memcpy((VAR20 *)&VAR9->VAR13.VAR19[FUN4(&VAR9->VAR13) >> 3], &VAR9->VAR13.VAR19[VAR9->VAR13.VAR17 >> 3], (VAR15 - 1));
        }
        FUN9(&VAR9->VAR13, 0);
    }
    if ((VAR11 = FUN10(&VAR9->VAR13)) >= 3U)
    {
        FUN3(VAR7->VAR9.VAR2, VAR14, "", VAR11);
        return -1;
    }
    VAR7->VAR21 = VAR22[VAR11];
    if ((VAR12 & 0x9F) == 2)
    {
        VAR11 = (VAR9->VAR23 < 64) ? 6 : (1 + FUN11(VAR9->VAR23 - 1));
        VAR9->VAR24 = FUN2(&VAR9->VAR13, VAR11) - (VAR9->VAR25 + (VAR9->VAR26 * VAR9->VAR27));
    }
    else
    {
        FUN12(&VAR9->VAR13);
        VAR9->VAR24 = 0;
    }
    VAR7->VAR28 = FUN2(&VAR9->VAR13, 8);
    VAR9->VAR29 = FUN2(&VAR9->VAR13, 5);
    VAR9->VAR30 = FUN13(&VAR9->VAR13);
    FUN12(&VAR9->VAR13);
    if (VAR4->VAR31)
    {
        FUN12(&VAR9->VAR13);
    }
    FUN12(&VAR9->VAR13);
    FUN6(&VAR9->VAR13, 2);
    while (FUN13(&VAR9->VAR13))
    {
        FUN6(&VAR9->VAR13, 8);
    }
    if (VAR9->VAR25 > 0)
    {
        memset(VAR7->VAR32 + VAR7->VAR33[VAR10 - 1] + 3, -1, 4 * sizeof(VAR34));
        memset(VAR7->VAR32 + VAR7->VAR33[VAR10 - VAR9->VAR25], -1, 8 * sizeof(VAR34) * VAR9->VAR25);
    }
    if (VAR9->VAR26 > 0)
    {
        memset(VAR7->VAR32 + VAR7->VAR33[VAR10 - VAR9->VAR35], -1, 8 * sizeof(VAR34) * (VAR9->VAR27 - VAR9->VAR25));
        if (VAR9->VAR25 > 0)
        {
            VAR7->VAR32[VAR7->VAR33[VAR10 - VAR9->VAR35 - 1] + 3] = -1;
        }
    }
    return 0;
}