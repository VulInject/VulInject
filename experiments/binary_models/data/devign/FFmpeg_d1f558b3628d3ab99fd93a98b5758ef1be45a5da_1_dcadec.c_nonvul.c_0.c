static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    VAR12 *VAR13 = VAR6->VAR3;
    int VAR14 = VAR6->VAR15;
    int VAR16, VAR17, VAR18 = VAR8->VAR19;
    uint32_t VAR20;
    if (VAR14 < VAR21 || VAR14 > VAR22)
    {
        FUN2(VAR2, VAR23, "");
        return VAR24;
    }
    VAR20 = FUN3(VAR13);
    if (VAR20 != VAR25 && VAR20 != VAR26)
    {
        FUN4(&VAR8->VAR27, &VAR8->VAR28, VAR14);
        if (!VAR8->VAR27)
            return FUN5(VAR29);
        for (VAR16 = 0, VAR17 = VAR24; VAR16 < VAR14 - VAR21 + 1 && VAR17 < 0; VAR16++)
            VAR17 = FUN6(VAR13 + VAR16, VAR14 - VAR16, VAR8->VAR27, VAR8->VAR28);
        if (VAR17 < 0)
        {
            FUN2(VAR2, VAR23, "");
            return VAR17;
        }
        VAR13 = VAR8->VAR27;
        VAR14 = VAR17;
    }
    VAR8->VAR19 = 0;
    if (FUN3(VAR13) == VAR25)
    {
        int VAR30;
        if ((VAR17 = FUN7(&VAR8->VAR31, VAR13, VAR14)) < 0)
            return VAR17;
        VAR8->VAR19 |= VAR32;
        VAR30 = FUN8(VAR8->VAR31.VAR30, 4);
        if (VAR14 - 4 > VAR30)
        {
            VAR13 += VAR30;
            VAR14 -= VAR30;
        }
    }
    if (!VAR8->VAR33)
    {
        VAR34 *VAR35 = NULL;
        if (FUN3(VAR13) == VAR26)
        {
            if ((VAR17 = FUN9(&VAR8->VAR36, VAR13, VAR14)) < 0)
            {
                if (VAR2->VAR37 & VAR38)
                    return VAR17;
            }
            else
            {
                VAR8->VAR19 |= VAR39;
                VAR35 = &VAR8->VAR36.VAR40[0];
            }
        }
        if (VAR35 && (VAR35->VAR41 & VAR42))
        {
            if ((VAR17 = FUN10(&VAR8->VAR43, VAR13, VAR35)) < 0)
            {
                if (VAR17 == FUN5(VAR44) && (VAR18 & VAR45) && (VAR8->VAR19 & VAR32))
                    VAR8->VAR19 |= VAR45 | VAR46;
                else if (VAR17 == FUN5(VAR29) || (VAR2->VAR37 & VAR38))
                    return VAR17;
            }
            else
            {
                VAR8->VAR19 |= VAR45;
            }
        }
        if (VAR35 && (VAR35->VAR41 & VAR47))
        {
            if ((VAR17 = FUN11(&VAR8->VAR48, VAR13, VAR35)) < 0)
            {
                if (VAR17 == FUN5(VAR29) || (VAR2->VAR37 & VAR38))
                    return VAR17;
            }
            else
            {
                VAR8->VAR19 |= VAR49;
            }
        }
        if ((VAR8->VAR19 & VAR32) && (VAR17 = FUN12(&VAR8->VAR31, VAR13, VAR35)) < 0)
            return VAR17;
    }
    if (VAR8->VAR19 & VAR49)
    {
        if ((VAR17 = FUN13(&VAR8->VAR48, VAR11)) < 0)
            return VAR17;
    }
    else if (VAR8->VAR19 & VAR45)
    {
        if (VAR8->VAR19 & VAR32)
        {
            int VAR50 = -1;
            if (VAR8->VAR43.VAR51[0].VAR52 == 96000 && VAR8->VAR31.VAR53 == 48000)
                VAR50 = 1;
            if ((VAR17 = FUN14(&VAR8->VAR31, VAR50)) < 0)
                return VAR17;
            if (!(VAR18 & VAR54) && VAR8->VAR43.VAR55 > 0 && VAR8->VAR43.VAR56 > 1)
            {
                FUN2(VAR2, VAR57, "");
                VAR8->VAR19 |= VAR46;
            }
            VAR8->VAR19 |= VAR54;
        }
        if ((VAR17 = FUN15(&VAR8->VAR43, VAR11)) < 0)
        {
            if (!(VAR8->VAR19 & VAR32))
                return VAR17;
            if (VAR17 != VAR24 || (VAR2->VAR37 & VAR38))
                return VAR17;
            if ((VAR17 = FUN16(&VAR8->VAR31, VAR11)) < 0)
                return VAR17;
        }
    }
    else if (VAR8->VAR19 & VAR32)
    {
        if ((VAR17 = FUN16(&VAR8->VAR31, VAR11)) < 0)
            return VAR17;
        if (VAR8->VAR31.VAR58 & VAR59)
            VAR8->VAR19 |= VAR54;
    }
    else
    {
        FUN2(VAR2, VAR23, "");
        if (VAR8->VAR33)
            FUN2(VAR2, VAR60, "");
        return VAR24;
    }
    *VAR4 = 1;
    return VAR6->VAR15;
}