static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = (VAR3 *)VAR2;
    const int VAR5 = VAR2->VAR5;
    int VAR6, VAR7;
    VAR7 = FUN2(&VAR4->VAR8, 8);
    if (((VAR7 & 0x9F) != 1 && (VAR7 & 0x9F) != 2) || (VAR7 & 0x60) == 0)
    {
        FUN3(VAR2->VAR4.VAR9, VAR10, "", VAR7);
        return -1;
    }
    else
    {
        int VAR11 = (VAR7 >> 5) & 3;
        VAR2->VAR12 = FUN4(&VAR4->VAR8) + 8 * FUN5(&VAR4->VAR8, 8 * VAR11) + 8 * VAR11;
        if (VAR2->VAR12 > VAR4->VAR8.VAR13)
        {
            FUN3(VAR2->VAR4.VAR9, VAR10, "");
            return -1;
        }
        VAR4->VAR8.VAR13 = VAR2->VAR12 - 8 * (VAR11 - 1);
        FUN6(&VAR4->VAR8, 8);
        if (VAR2->VAR14)
        {
            uint32_t VAR7 = FUN7(&VAR4->VAR8.VAR15[(FUN4(&VAR4->VAR8) >> 3) + 1]);
            FUN8(&VAR4->VAR8.VAR15[(FUN4(&VAR4->VAR8) >> 3) + 1], VAR7 ^ VAR2->VAR14);
        }
        if (VAR11 > 0)
        {
            memcpy((VAR16 *)&VAR4->VAR8.VAR15[FUN4(&VAR4->VAR8) >> 3], &VAR4->VAR8.VAR15[VAR4->VAR8.VAR13 >> 3], (VAR11 - 1));
        }
        FUN9(&VAR4->VAR8, 0);
    }
    if ((VAR6 = FUN10(&VAR4->VAR8)) == VAR17 || VAR6 >= 3)
    {
        FUN3(VAR2->VAR4.VAR9, VAR10, "", VAR6);
        return -1;
    }
    VAR2->VAR18 = VAR19[VAR6];
    if ((VAR7 & 0x9F) == 2)
    {
        VAR6 = (VAR4->VAR20 < 64) ? 6 : (1 + FUN11(VAR4->VAR20 - 1));
        VAR4->VAR21 = FUN2(&VAR4->VAR8, VAR6) - (VAR4->VAR22 + (VAR4->VAR23 * VAR4->VAR24));
    }
    else
    {
        FUN12(&VAR4->VAR8);
        VAR4->VAR21 = 0;
    }
    VAR2->VAR25 = FUN2(&VAR4->VAR8, 8);
    VAR4->VAR26 = FUN2(&VAR4->VAR8, 5);
    VAR4->VAR27 = FUN13(&VAR4->VAR8);
    FUN12(&VAR4->VAR8);
    if (VAR2->VAR28)
    {
        FUN12(&VAR4->VAR8);
    }
    FUN12(&VAR4->VAR8);
    FUN6(&VAR4->VAR8, 2);
    while (FUN13(&VAR4->VAR8))
    {
        FUN6(&VAR4->VAR8, 8);
    }
    if (VAR4->VAR22 > 0)
    {
        memset(VAR2->VAR29 + VAR2->VAR30[VAR5 - 1] + 3, -1, 4 * sizeof(VAR31));
        memset(VAR2->VAR29 + VAR2->VAR30[VAR5 - VAR4->VAR22], -1, 8 * sizeof(VAR31) * VAR4->VAR22);
    }
    if (VAR4->VAR23 > 0)
    {
        memset(VAR2->VAR29 + VAR2->VAR30[VAR5 - VAR4->VAR32], -1, 8 * sizeof(VAR31) * (VAR4->VAR24 - VAR4->VAR22));
        if (VAR4->VAR22 > 0)
        {
            VAR2->VAR29[VAR2->VAR30[VAR5 - VAR4->VAR32 - 1] + 3] = -1;
        }
    }
    return 0;
}