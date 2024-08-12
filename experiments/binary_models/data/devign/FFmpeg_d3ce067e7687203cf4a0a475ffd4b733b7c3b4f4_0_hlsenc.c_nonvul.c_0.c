static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR1 *VAR8 = NULL;
    VAR9 *VAR10 = VAR2->VAR11[VAR4->VAR12];
    int64_t VAR13 = VAR6->VAR14 * VAR6->VAR15;
    int VAR16 = 1;
    int VAR17, VAR18 = 1;
    int VAR12 = 0;
    if (VAR6->VAR19 - VAR6->VAR20 > VAR6->VAR21 && VAR6->VAR22 > 0)
    {
        int VAR23 = VAR6->VAR22 * VAR6->VAR20 * VAR24;
        int VAR25 = (VAR6->VAR19 - VAR6->VAR20) * VAR6->VAR26 * VAR24;
        VAR6->VAR14 = VAR6->VAR26 * VAR24;
        VAR13 = VAR23 + VAR25;
    }
    if (VAR10->VAR27->VAR28 == VAR29)
    {
        VAR8 = VAR6->VAR30;
        VAR12 = 0;
    }
    else
    {
        VAR8 = VAR6->VAR31;
        VAR12 = VAR4->VAR12;
    }
    if (VAR6->VAR32 == VAR33)
    {
        VAR6->VAR32 = VAR4->VAR34;
        VAR6->VAR13 = VAR4->VAR34;
    }
    if (VAR6->VAR35)
    {
        VAR18 = VAR10->VAR27->VAR28 == VAR36 && ((VAR4->VAR37 & VAR38) || (VAR6->VAR37 & VAR39));
        VAR16 = VAR10->VAR27->VAR28 == VAR36;
    }
    if (VAR4->VAR34 == VAR33)
        VAR16 = VAR18 = 0;
    if (VAR16)
    {
        if (VAR6->VAR40)
        {
            VAR6->VAR40 = 0;
            VAR6->VAR41 = (double)(VAR4->VAR34 - VAR6->VAR13) * VAR10->VAR42.VAR43 / VAR10->VAR42.VAR44;
            VAR6->VAR45 = (double)(VAR4->VAR41) * VAR10->VAR42.VAR43 / VAR10->VAR42.VAR44;
        }
        else
        {
            VAR6->VAR41 += (double)(VAR4->VAR41) * VAR10->VAR42.VAR43 / VAR10->VAR42.VAR44;
        }
    }
    if (VAR18 && FUN2(VAR4->VAR34 - VAR6->VAR32, VAR10->VAR42, VAR13, VAR46) >= 0)
    {
        int64_t VAR47;
        char *VAR48 = FUN3(VAR6->VAR31->VAR49);
        int VAR50 = (VAR6->VAR37 & VAR51) || (VAR6->VAR52 > 0);
        if (!VAR48)
        {
            return FUN4(VAR53);
        }
        FUN5(VAR8, NULL);
        VAR47 = FUN6(VAR6->VAR31->VAR54);
        VAR6->VAR55 = VAR47 - VAR6->VAR56;
        if (!VAR50)
        {
            FUN7(VAR2, &VAR8->VAR54);
            if (VAR6->VAR30)
            {
                FUN7(VAR2, &VAR6->VAR30->VAR54);
            }
        }
        if ((VAR6->VAR37 & VAR57) && VAR8->VAR49[0])
        {
            if (!(VAR6->VAR37 & VAR51) || (VAR6->VAR52 <= 0))
                if (VAR6->VAR31->VAR58->VAR59 && VAR6->VAR31->VAR7)
                    FUN8(VAR6->VAR31->VAR7, "", "", 0);
            FUN9(VAR2, VAR8);
        }
        VAR17 = FUN10(VAR2, VAR6, VAR6->VAR41, VAR6->VAR56, VAR6->VAR55);
        VAR6->VAR56 = VAR47;
        if (VAR17 < 0)
        {
            FUN11(VAR48);
            return VAR17;
        }
        VAR6->VAR13 = VAR4->VAR34;
        VAR6->VAR41 = 0;
        if (VAR6->VAR37 & VAR51)
        {
            VAR6->VAR15++;
        }
        else if (VAR6->VAR52 > 0)
        {
            if (VAR6->VAR56 >= VAR6->VAR52)
            {
                VAR6->VAR19++;
                FUN12(VAR6, VAR48);
                VAR17 = FUN13(VAR2);
                VAR6->VAR56 = 0;
                VAR6->VAR15--;
            }
            VAR6->VAR15++;
        }
        else
        {
            FUN12(VAR6, VAR48);
            VAR17 = FUN13(VAR2);
        }
        if (VAR17 < 0)
        {
            FUN11(VAR48);
            return VAR17;
        }
        if ((VAR17 = FUN14(VAR2, 0)) < 0)
        {
            FUN11(VAR48);
            return VAR17;
        }
    }
    VAR17 = FUN15(VAR8, VAR12, VAR4, VAR2, 0);
    return VAR17;
}