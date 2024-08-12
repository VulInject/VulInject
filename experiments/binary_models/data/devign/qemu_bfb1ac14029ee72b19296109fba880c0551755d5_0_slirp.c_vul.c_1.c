void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;
    struct socket *VAR6, *VAR7;
    int VAR8;
    if (FUN2(&VAR9))
    {
        return;
    }
    VAR10 = FUN3(VAR11);
    FUN4(VAR5, &VAR9, VAR12)
    {
        if (VAR5->VAR13 && ((VAR10 - VAR5->VAR13) >= VAR14))
        {
            FUN5(VAR5);
            VAR5->VAR13 = 0;
        }
        if (VAR5->VAR15 && ((VAR10 - VAR5->VAR16) >= VAR17))
        {
            FUN6(VAR5);
            FUN7(VAR5);
            VAR5->VAR16 = VAR10;
        }
        if (!VAR3)
        {
            for (VAR6 = VAR5->VAR18.VAR7; VAR6 != &VAR5->VAR18; VAR6 = VAR7)
            {
                int VAR19;
                VAR7 = VAR6->VAR7;
                VAR19 = 0;
                if (VAR6->VAR20 != -1)
                {
                    VAR19 = FUN8(VAR2, VAR21, VAR6->VAR20).VAR19;
                }
                if (VAR6->VAR22 & VAR23 || VAR6->VAR24 == -1)
                {
                    continue;
                }
                if (VAR19 & VAR25)
                {
                    FUN9(VAR6);
                }
                else if (VAR19 & (VAR26 | VAR27 | VAR28))
                {
                    if (VAR6->VAR22 & VAR29)
                    {
                        FUN10(VAR6);
                        continue;
                    }
                    VAR8 = FUN11(VAR6);
                    if (VAR8 > 0)
                    {
                        FUN12(FUN13(VAR6));
                    }
                }
                if (!(VAR6->VAR22 & VAR23) && (VAR19 & (VAR30 | VAR28)))
                {
                    if (VAR6->VAR22 & VAR31)
                    {
                        VAR6->VAR22 &= ~VAR31;
                        VAR8 = send(VAR6->VAR24, (const void *)&VAR8, 0, 0);
                        if (VAR8 < 0)
                        {
                            if (VAR32 == VAR33 || VAR32 == VAR34 || VAR32 == VAR35 || VAR32 == VAR36)
                            {
                                continue;
                            }
                            VAR6->VAR22 &= VAR37;
                            VAR6->VAR22 |= VAR23;
                        }
                        FUN14((struct VAR38 *)NULL, sizeof(struct VAR39), VAR6, VAR6->VAR40);
                    }
                    else
                    {
                        VAR8 = FUN15(VAR6);
                    }
                }
                if (VAR6->VAR22 & VAR31)
                {
                    VAR8 = FUN16(VAR6->VAR24, &VAR8, 0, 0);
                    if (VAR8 < 0)
                    {
                        if (VAR32 == VAR33 || VAR32 == VAR34 || VAR32 == VAR35 || VAR32 == VAR36)
                        {
                            continue;
                        }
                        VAR6->VAR22 &= VAR37;
                        VAR6->VAR22 |= VAR23;
                    }
                    else
                    {
                        VAR8 = send(VAR6->VAR24, &VAR8, 0, 0);
                        if (VAR8 < 0)
                        {
                            if (VAR32 == VAR33 || VAR32 == VAR34 || VAR32 == VAR35 || VAR32 == VAR36)
                            {
                                continue;
                            }
                            VAR6->VAR22 &= VAR37;
                            VAR6->VAR22 |= VAR23;
                        }
                        else
                        {
                            VAR6->VAR22 &= ~VAR31;
                        }
                    }
                    FUN14((struct VAR38 *)NULL, sizeof(struct VAR39), VAR6, VAR6->VAR40);
                }
            }
            for (VAR6 = VAR5->VAR41.VAR7; VAR6 != &VAR5->VAR41; VAR6 = VAR7)
            {
                int VAR19;
                VAR7 = VAR6->VAR7;
                VAR19 = 0;
                if (VAR6->VAR20 != -1)
                {
                    VAR19 = FUN8(VAR2, VAR21, VAR6->VAR20).VAR19;
                }
                if (VAR6->VAR24 != -1 && (VAR19 & (VAR26 | VAR27 | VAR28)))
                {
                    FUN17(VAR6);
                }
            }
            for (VAR6 = VAR5->VAR42.VAR7; VAR6 != &VAR5->VAR42; VAR6 = VAR7)
            {
                int VAR19;
                VAR7 = VAR6->VAR7;
                VAR19 = 0;
                if (VAR6->VAR20 != -1)
                {
                    VAR19 = FUN8(VAR2, VAR21, VAR6->VAR20).VAR19;
                }
                if (VAR6->VAR24 != -1 && (VAR19 & (VAR26 | VAR27 | VAR28)))
                {
                    FUN18(VAR6);
                }
            }
        }
        FUN19(VAR5);
    }
}