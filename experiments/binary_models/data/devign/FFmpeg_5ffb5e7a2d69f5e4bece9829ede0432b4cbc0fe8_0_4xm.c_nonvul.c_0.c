static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int VAR7, int VAR8)
{
    const int VAR9 = VAR10[VAR7][VAR6];
    const int VAR11 = 1 << VAR7;
    int VAR12 = FUN2(&VAR2->VAR13, VAR14[1 - (VAR2->VAR15 > 1)][VAR9].VAR16, VAR17, 1);
    VAR3 *VAR18 = (VAR3 *)VAR2->VAR19.VAR20[0];
    VAR3 *VAR21 = VAR18 + VAR8 * (VAR2->VAR22->VAR23 - VAR11 + 1) - (1 << VAR6);
    FUN3(VAR12 >= 0 && VAR12 <= 6);
    if (VAR12 == 0)
    {
        if (FUN4(&VAR2->VAR24) < 1)
        {
            FUN5(VAR2->VAR22, VAR25, "");
            return;
        }
        VAR5 += VAR2->VAR26[FUN6(&VAR2->VAR24)];
        if (VAR18 > VAR5 || VAR5 > VAR21)
        {
            FUN5(VAR2->VAR22, VAR25, "");
            return;
        }
        FUN7(VAR4, VAR5, VAR6, VAR11, VAR8, 1, 0);
    }
    else if (VAR12 == 1)
    {
        VAR7--;
        FUN1(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8);
        FUN1(VAR2, VAR4 + (VAR8 << VAR7), VAR5 + (VAR8 << VAR7), VAR6, VAR7, VAR8);
    }
    else if (VAR12 == 2)
    {
        VAR6--;
        FUN1(VAR2, VAR4, VAR5, VAR6, VAR7, VAR8);
        FUN1(VAR2, VAR4 + (1 << VAR6), VAR5 + (1 << VAR6), VAR6, VAR7, VAR8);
    }
    else if (VAR12 == 3 && VAR2->VAR15 < 2)
    {
        FUN7(VAR4, VAR5, VAR6, VAR11, VAR8, 1, 0);
    }
    else if (VAR12 == 4)
    {
        if (FUN4(&VAR2->VAR24) < 1)
        {
            FUN5(VAR2->VAR22, VAR25, "");
            return;
        }
        VAR5 += VAR2->VAR26[FUN6(&VAR2->VAR24)];
        if (VAR18 > VAR5 || VAR5 > VAR21)
        {
            FUN5(VAR2->VAR22, VAR25, "");
            return;
        }
        if (FUN4(&VAR2->VAR27) < 2)
        {
            FUN5(VAR2->VAR22, VAR25, "");
            return;
        }
        FUN7(VAR4, VAR5, VAR6, VAR11, VAR8, 1, FUN8(&VAR2->VAR27));
    }
    else if (VAR12 == 5)
    {
        if (FUN4(&VAR2->VAR27) < 2)
        {
            FUN5(VAR2->VAR22, VAR25, "");
            return;
        }
        FUN7(VAR4, VAR5, VAR6, VAR11, VAR8, 0, FUN8(&VAR2->VAR27));
    }
    else if (VAR12 == 6)
    {
        if (FUN4(&VAR2->VAR27) < 4)
        {
            FUN5(VAR2->VAR22, VAR25, "");
            return;
        }
        if (VAR6)
        {
            VAR4[0] = FUN8(&VAR2->VAR27);
            VAR4[1] = FUN8(&VAR2->VAR27);
        }
        else
        {
            VAR4[0] = FUN8(&VAR2->VAR27);
            VAR4[VAR8] = FUN8(&VAR2->VAR27);
        }
    }
}