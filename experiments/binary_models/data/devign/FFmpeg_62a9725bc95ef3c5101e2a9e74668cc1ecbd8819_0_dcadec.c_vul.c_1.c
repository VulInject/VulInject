static void FUN1(VAR1 *VAR2)
{
    int VAR3[8];
    int VAR4;
    int VAR5;
    int VAR6 = 1;
    int VAR7 = 1;
    int VAR8[8];
    int VAR9, VAR10;
    int VAR11;
    int VAR12;
    uint32_t VAR13;
    if (FUN2(&VAR2->VAR14) < 52)
        return;
    VAR11 = FUN3(&VAR2->VAR14) - 32;
    FUN4(&VAR2->VAR14, 8);
    VAR4 = FUN5(&VAR2->VAR14, 2);
    VAR5 = FUN6(&VAR2->VAR14);
    VAR12 = FUN5(&VAR2->VAR14, 8 + 4 * VAR5) + 1;
    FUN4(&VAR2->VAR14, 16 + 4 * VAR5);
    VAR2->VAR15 = FUN6(&VAR2->VAR14);
    if (VAR2->VAR15)
    {
        FUN4(&VAR2->VAR14, 2);
        FUN4(&VAR2->VAR14, 3);
        if (FUN6(&VAR2->VAR14))
            FUN7(&VAR2->VAR14, 36);
        VAR6 = FUN5(&VAR2->VAR14, 3) + 1;
        if (VAR6 > 1)
        {
            FUN8(VAR2->VAR16, "");
            return;
        }
        VAR7 = FUN5(&VAR2->VAR14, 3) + 1;
        if (VAR7 > 1)
        {
            FUN8(VAR2->VAR16, "");
            return;
        }
        for (VAR9 = 0; VAR9 < VAR6; VAR9++)
            VAR8[VAR9] = FUN5(&VAR2->VAR14, VAR4 + 1);
        for (VAR9 = 0; VAR9 < VAR6; VAR9++)
            for (VAR10 = 0; VAR10 <= VAR4; VAR10++)
                if (VAR8[VAR9] & (1 << VAR10))
                    FUN4(&VAR2->VAR14, 8);
        VAR2->VAR17 = FUN6(&VAR2->VAR14);
        if (VAR2->VAR17)
        {
            int VAR18;
            FUN4(&VAR2->VAR14, 2);
            VAR18 = (FUN5(&VAR2->VAR14, 2) + 1) << 2;
            VAR2->VAR19 = FUN5(&VAR2->VAR14, 2) + 1;
            for (VAR9 = 0; VAR9 < VAR2->VAR19; VAR9++)
            {
                int VAR20 = FUN5(&VAR2->VAR14, VAR18);
                VAR2->VAR21[VAR9] = FUN9(VAR20);
            }
        }
    }
    for (VAR9 = 0; VAR9 < VAR7; VAR9++)
        VAR3[VAR9] = FUN10(&VAR2->VAR14, 16 + 4 * VAR5);
    for (VAR9 = 0; VAR9 < VAR7; VAR9++)
    {
        if (FUN11(VAR2))
            return;
    }
    VAR10 = FUN3(&VAR2->VAR14);
    if (VAR11 + VAR12 * 8 > VAR10)
        FUN7(&VAR2->VAR14, VAR11 + VAR12 * 8 - VAR10);
    for (VAR9 = 0; VAR9 < VAR7; VAR9++)
    {
        VAR11 = FUN3(&VAR2->VAR14);
        VAR13 = FUN10(&VAR2->VAR14, 32);
        if (VAR13 == 0x655e315e)
        {
            FUN12(VAR2);
        }
        else if (VAR13 == 0x47004a03)
        {
            FUN13(VAR2);
            VAR2->VAR22 |= VAR23;
        }
        else
        {
            FUN14(VAR2->VAR16, VAR24, "", VAR13);
        }
        VAR10 = FUN3(&VAR2->VAR14);
        if (VAR11 + VAR3[VAR9] * 8 > VAR10)
            FUN7(&VAR2->VAR14, VAR11 + VAR3[VAR9] * 8 - VAR10);
    }