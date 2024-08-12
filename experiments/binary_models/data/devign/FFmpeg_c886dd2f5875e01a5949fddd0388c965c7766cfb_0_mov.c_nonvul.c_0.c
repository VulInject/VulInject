static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13 = NULL;
    int VAR14;
    VAR6->VAR15 = VAR2;
VAR16:
    VAR11 = FUN2(VAR2, &VAR13);
    if (!VAR11)
    {
        VAR6->VAR17 = 0;
        if (!VAR6->VAR18)
            return VAR19;
        if (FUN3(VAR2->VAR20, VAR6->VAR18, VAR21) != VAR6->VAR18)
        {
            FUN4(VAR6->VAR15, VAR22, "" VAR23 "", VAR6->VAR18);
            return VAR24;
        }
        VAR6->VAR18 = 0;
        if (FUN5(VAR6, VAR2->VAR20, (VAR25){FUN6(""), VAR26}) < 0 || FUN7(VAR2->VAR20))
            return VAR19;
        FUN4(VAR2, VAR27, "" VAR23 "", FUN8(VAR2->VAR20));
        goto VAR16;
    }
    VAR9 = VAR13->VAR7;
    VAR9->VAR28++;
    if (VAR6->VAR18)
    {
        VAR11->VAR29 = FUN9(VAR11->VAR29, VAR6->VAR18);
        VAR11->VAR30 = FUN9(VAR11->VAR30, (VAR6->VAR18 - VAR11->VAR29));
    }
    if (VAR13->VAR31 != VAR32)
    {
        if (FUN3(VAR9->VAR20, VAR11->VAR29, VAR21) != VAR11->VAR29)
        {
            FUN4(VAR6->VAR15, VAR22, "" VAR23 "", VAR9->VAR33, VAR11->VAR29);
            return VAR24;
        }
        VAR14 = FUN10(VAR9->VAR20, VAR4, VAR11->VAR30);
        if (VAR14 < 0)
            return VAR14;
        if (VAR9->VAR34)
        {
            VAR35 *VAR36;
            VAR36 = FUN11(VAR4, VAR37, VAR38);
            if (!VAR36)
            {
                FUN4(VAR6->VAR15, VAR22, "");
            }
            else
            {
                memcpy(VAR36, VAR9->VAR39, VAR38);
                VAR9->VAR34 = 0;
            }
        }
        if (VAR6->VAR40 && VAR9->VAR41)
        {
            FUN12(VAR6->VAR40, VAR4, VAR4->VAR42, VAR4->VAR30, VAR4->VAR29);
            FUN13(&VAR4->VAR42);
            VAR4->VAR30 = 0;
            VAR14 = FUN14(VAR6->VAR40, VAR4);
            if (VAR14 < 0)
                return VAR14;
        }
    }
    VAR4->VAR43 = VAR9->VAR33;
    VAR4->VAR44 = VAR11->VAR45;
    if (VAR9->VAR46 && VAR9->VAR47 < VAR9->VAR48)
    {
        VAR4->VAR49 = VAR4->VAR44 + VAR9->VAR50 + VAR9->VAR46[VAR9->VAR47].VAR51;
        VAR9->VAR52++;
        if (VAR9->VAR47 < VAR9->VAR48 && VAR9->VAR46[VAR9->VAR47].VAR53 == VAR9->VAR52)
        {
            VAR9->VAR47++;
            VAR9->VAR52 = 0;
        }
        if (VAR9->VAR54)
            VAR4->VAR44 = VAR55;
    }
    else
    {
        int64_t VAR56 = (VAR9->VAR28 < VAR13->VAR57) ? VAR13->VAR58[VAR9->VAR28].VAR45 : VAR13->VAR51;
        VAR4->VAR51 = VAR56 - VAR4->VAR44;
        VAR4->VAR49 = VAR4->VAR44;
    }
    if (VAR13->VAR31 == VAR32)
        goto VAR16;
    VAR4->VAR59 |= VAR11->VAR59 & VAR60 ? VAR61 : 0;
    VAR4->VAR29 = VAR11->VAR29;
    return 0;
}