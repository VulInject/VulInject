void FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR1 *VAR4, int VAR5)
{
    VAR6 *VAR7;
    struct socket *VAR8, *VAR9;
    int VAR10;
    if (FUN2(&VAR11))
    {
        return;
    }
    VAR12 = VAR2;
    VAR13 = VAR3;
    VAR14 = VAR4;
    VAR15 = FUN3(VAR16);
    FUN4(VAR7, &VAR11, VAR17)
    {
        if (VAR18 && ((VAR15 - VAR18) >= 2))
        {
            FUN5(VAR7);
            VAR18 = 0;
        }
        if (VAR19 && ((VAR15 - VAR20) >= 499))
        {
            FUN6(VAR7);
            FUN7(VAR7);
            VAR20 = VAR15;
        }
        if (!VAR5)
        {
            for (VAR8 = VAR7->VAR21.VAR9; VAR8 != &VAR7->VAR21; VAR8 = VAR9)
            {
                VAR9 = VAR8->VAR9;
                if (VAR8->VAR22 & VAR23 || VAR8->VAR24 == -1)
                    continue;
                if (FUN8(VAR8->VAR24, VAR4))
                    FUN9(VAR8);
                else if (FUN8(VAR8->VAR24, VAR2))
                {
                    if (VAR8->VAR22 & VAR25)
                    {
                        FUN10(VAR8);
                        continue;
                    }
                    VAR10 = FUN11(VAR8);
                    if (VAR10 > 0)
                        FUN12(FUN13(VAR8));
                }
                if (FUN8(VAR8->VAR24, VAR3))
                {
                    if (VAR8->VAR22 & VAR26)
                    {
                        VAR8->VAR22 &= ~VAR26;
                        VAR10 = send(VAR8->VAR24, (const void *)&VAR10, 0, 0);
                        if (VAR10 < 0)
                        {
                            if (VAR27 == VAR28 || VAR27 == VAR29 || VAR27 == VAR30 || VAR27 == VAR31)
                                continue;
                            VAR8->VAR22 &= VAR32;
                            VAR8->VAR22 |= VAR23;
                        }
                        FUN14((struct VAR33 *)NULL, sizeof(struct VAR34), VAR8);
                    }
                    else
                        VAR10 = FUN15(VAR8);
                }
                if (VAR8->VAR22 & VAR26)
                {
                    VAR10 = FUN16(VAR8->VAR24, &VAR10, 0, 0);
                    if (VAR10 < 0)
                    {
                        if (VAR27 == VAR28 || VAR27 == VAR29 || VAR27 == VAR30 || VAR27 == VAR31)
                            continue;
                        VAR8->VAR22 &= VAR32;
                        VAR8->VAR22 |= VAR23;
                    }
                    else
                    {
                        VAR10 = send(VAR8->VAR24, &VAR10, 0, 0);
                        if (VAR10 < 0)
                        {
                            if (VAR27 == VAR28 || VAR27 == VAR29 || VAR27 == VAR30 || VAR27 == VAR31)
                                continue;
                            VAR8->VAR22 &= VAR32;
                            VAR8->VAR22 |= VAR23;
                        }
                        else
                            VAR8->VAR22 &= ~VAR26;
                    }
                    FUN14((struct VAR33 *)NULL, sizeof(struct VAR34), VAR8);
                }
            }
            for (VAR8 = VAR7->VAR35.VAR9; VAR8 != &VAR7->VAR35; VAR8 = VAR9)
            {
                VAR9 = VAR8->VAR9;
                if (VAR8->VAR24 != -1 && FUN8(VAR8->VAR24, VAR2))
                {
                    FUN17(VAR8);
                }
            }
            for (VAR8 = VAR7->VAR36.VAR9; VAR8 != &VAR7->VAR36; VAR8 = VAR9)
            {
                VAR9 = VAR8->VAR9;
                if (VAR8->VAR24 != -1 && FUN8(VAR8->VAR24, VAR2))
                {
                    FUN18(VAR8);
                }
            }
        }
        FUN19(VAR7);
    }
    VAR12 = NULL;
    VAR13 = NULL;
    VAR14 = NULL;
}