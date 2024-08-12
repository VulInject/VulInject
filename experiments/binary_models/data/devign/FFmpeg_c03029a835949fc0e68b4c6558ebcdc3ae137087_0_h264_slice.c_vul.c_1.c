int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7 + VAR2->VAR8;
    int VAR9 = VAR6 == VAR2->VAR7 && !VAR2->VAR10;
    int VAR11;
    VAR6->VAR12 = VAR4->VAR12;
    VAR11 = FUN2(VAR2, VAR6, VAR4);
    if (VAR11 < 0)
        return VAR11;
    if (VAR6->VAR13 > 0)
        return 0;
    if (VAR6->VAR14 == 0 || !VAR2->VAR10)
    {
        if (VAR2->VAR15)
        {
            FUN3(VAR2->VAR16, VAR17, "");
            return VAR18;
        }
    }
    if (VAR6->VAR14 == 0)
    {
        if (VAR2->VAR10)
        {
            if (VAR2->VAR8)
            {
                H264SliceContext VAR19;
                VAR11 = FUN4(VAR2);
                if (VAR11 < 0 && (VAR2->VAR16->VAR20 & VAR21))
                    return VAR11;
                memcpy(&VAR19, VAR2->VAR7, sizeof(VAR19));
                memcpy(VAR2->VAR7, VAR6, sizeof(VAR19));
                memcpy(VAR6, &VAR19, sizeof(VAR19));
                VAR6 = VAR2->VAR7;
            }
            if (VAR2->VAR22 && FUN5(VAR2) && VAR2->VAR23)
            {
                VAR11 = FUN6(VAR2, VAR2->VAR7, 1);
                if (VAR11 < 0)
                    return VAR11;
            }
            else if (VAR2->VAR22 && !FUN5(VAR2) && !VAR2->VAR23 && VAR2->VAR24 == VAR25)
            {
                FUN3(VAR2, VAR26, "");
                VAR11 = FUN6(VAR2, VAR2->VAR7, 1);
                FUN7(&VAR2->VAR22->VAR27, VAR28, 0);
                FUN7(&VAR2->VAR22->VAR27, VAR28, 1);
                VAR2->VAR22 = NULL;
                if (VAR11 < 0)
                    return VAR11;
            }
            else
                return VAR18;
        }
        if (!VAR2->VAR23)
        {
            if (VAR2->VAR22 && !VAR2->VAR29)
            {
                FUN7(&VAR2->VAR22->VAR27, VAR28, VAR2->VAR30 == VAR31);
            }
            VAR2->VAR22 = NULL;
        }
    }
    if (!VAR2->VAR10)
        FUN8(VAR6 == VAR2->VAR7);
    if (VAR2->VAR10 == 0 && !VAR2->VAR23)
    {
        if ((VAR2->VAR16->VAR32 >= VAR33 && !VAR2->VAR34) || (VAR2->VAR16->VAR32 >= VAR35 && VAR6->VAR36 == VAR37) || (VAR2->VAR16->VAR32 >= VAR38 && VAR6->VAR36 != VAR39) || (VAR2->VAR16->VAR32 >= VAR40 && VAR2->VAR24 != VAR25 && VAR2->VAR41.VAR42.VAR43 < 0) || VAR2->VAR16->VAR32 >= VAR44)
        {
            return 0;
        }
    }
    if (!VAR9)
    {
        const VAR45 *VAR46 = (const VAR45 *)VAR2->VAR47.VAR48[VAR6->VAR49]->VAR50;
        if (VAR2->VAR47.VAR46->VAR51 != VAR46->VAR51 || VAR2->VAR47.VAR46->VAR52 != VAR46->VAR52)
        {
            FUN3(VAR2->VAR16, VAR17, "");
            return VAR18;
        }
        if (VAR2->VAR47.VAR53 != (const VAR54 *)VAR2->VAR47.VAR55[VAR2->VAR47.VAR46->VAR51]->VAR50)
        {
            FUN3(VAR2->VAR16, VAR17, "");
            return VAR18;
        }
    }
    if (VAR2->VAR10 == 0)
    {
        VAR11 = FUN9(VAR2, VAR6, VAR4, VAR9);
        if (VAR11 < 0)
            return VAR11;
    }
    else
    {
        if (VAR2->VAR30 != VAR6->VAR30 || VAR2->VAR29 != (VAR4->VAR56 == 0))
        {
            FUN3(VAR2->VAR16, VAR17, "", VAR2->VAR30, VAR6->VAR30);
            return VAR18;
        }
        else if (!VAR2->VAR22)
        {
            FUN3(VAR2->VAR16, VAR17, "", VAR2->VAR10 + 1);
            return VAR18;
        }
    }
    VAR11 = FUN10(VAR2, VAR6, VAR4);
    if (VAR11 < 0)
        return VAR11;
    VAR2->VAR8++;
    return 0;
}