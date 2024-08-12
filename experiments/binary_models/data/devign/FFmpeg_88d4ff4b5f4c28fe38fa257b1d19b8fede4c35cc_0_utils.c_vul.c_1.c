int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    const int VAR5 = VAR2->VAR6 & VAR7;
    int VAR8 = 0;
    int VAR9;
    VAR10 *VAR11;
    if (!VAR5)
    {
        VAR9 = VAR2->VAR12 ? FUN2(&VAR2->VAR12, &VAR2->VAR13, VAR4) : FUN3(VAR2, VAR4);
        if (VAR9 < 0)
            return VAR9;
        goto VAR14;
    }
    for (;;)
    {
        VAR15 *VAR16 = VAR2->VAR12;
        if (VAR16)
        {
            VAR3 *VAR17 = &VAR16->VAR4;
            if (VAR17->VAR18 != VAR19)
            {
                int VAR20 = VAR2->VAR21[VAR17->VAR22]->VAR23;
                int64_t VAR24 = VAR17->VAR18;
                while (VAR16 && VAR17->VAR25 == VAR19)
                {
                    if (VAR16->VAR4.VAR22 == VAR17->VAR22 && (FUN4(VAR17->VAR18, VAR16->VAR4.VAR18, 2LL << (VAR20 - 1)) < 0))
                    {
                        if (FUN4(VAR16->VAR4.VAR25, VAR16->VAR4.VAR18, 2LL << (VAR20 - 1)))
                        {
                            VAR17->VAR25 = VAR16->VAR4.VAR18;
                        }
                        if (VAR24 != VAR19)
                        {
                            VAR24 = VAR16->VAR4.VAR18;
                        }
                    }
                    VAR16 = VAR16->VAR26;
                }
                if (VAR8 && VAR17->VAR25 == VAR19 && VAR24 != VAR19)
                {
                    VAR17->VAR25 = VAR24 + VAR17->VAR27;
                }
                VAR16 = VAR2->VAR12;
            }
            if (!(VAR17->VAR25 == VAR19 && VAR17->VAR18 != VAR19 && !VAR8))
            {
                VAR9 = FUN2(&VAR2->VAR12, &VAR2->VAR13, VAR4);
                goto VAR14;
            }
        }
        VAR9 = FUN3(VAR2, VAR4);
        if (VAR9 < 0)
        {
            if (VAR16 && VAR9 != FUN5(VAR28))
            {
                VAR8 = 1;
                continue;
            }
            else
                return VAR9;
        }
        if (FUN6(FUN7(&VAR2->VAR12, VAR4, &VAR2->VAR13)) < 0)
            return FUN5(VAR29);
    }
VAR14:
    VAR11 = VAR2->VAR21[VAR4->VAR22];
    if (VAR11->VAR30)
    {
        VAR31 *VAR32 = FUN8(VAR4, VAR33, 10);
        FUN9(VAR32, VAR11->VAR30);
        FUN10(VAR2, VAR34, "", VAR11->VAR30);
        VAR11->VAR30 = 0;
    }
    if ((VAR2->VAR35->VAR6 & VAR36) && VAR4->VAR6 & VAR37)
    {
        FUN11(VAR2, VAR11->VAR38);
        FUN12(VAR11, VAR4->VAR39, VAR4->VAR18, 0, 0, VAR40);
    }
    if (FUN13(VAR4->VAR18))
        VAR4->VAR18 -= VAR41;
    if (FUN13(VAR4->VAR25))
        VAR4->VAR25 -= VAR41;
    return VAR9;
}