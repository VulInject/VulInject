int FUN1(VAR1 *VAR2, VAR3 *VAR4, int (*VAR5)(VAR1 *, VAR3 *, VAR3 *))
{
    int VAR6;
    VAR7 **VAR8, *VAR9;
    VAR10 *VAR11 = VAR2->VAR12[VAR4->VAR13];
    int VAR14 = VAR2->VAR15 || VAR2->VAR16;
    VAR9 = FUN2(sizeof(VAR7));
    if (!VAR9)
        return FUN3(VAR17);
    if ((VAR4->VAR18 & VAR19))
    {
        FUN4(VAR4->VAR20 == VAR21);
        FUN4(((VAR22 *)VAR4->VAR23)->VAR24);
    }
    if ((VAR6 = FUN5(&VAR9->VAR4, VAR4)) < 0)
    {
        FUN6(VAR9);
        return VAR6;
    }
    if (VAR2->VAR12[VAR4->VAR13]->VAR25)
    {
        VAR8 = &(VAR11->VAR25->VAR26);
    }
    else
    {
        VAR8 = &VAR2->VAR27->VAR28;
    }
    if (VAR14)
    {
        uint64_t VAR29 = FUN7(VAR2->VAR16, VAR30, VAR11->VAR31, VAR32);
        VAR11->VAR33 += VAR4->VAR20;
        VAR11->VAR34 += VAR4->VAR35;
        if ((VAR2->VAR15 && VAR11->VAR33 > VAR2->VAR15) || (VAR29 && VAR11->VAR34 > VAR29))
        {
            VAR11->VAR33 = 0;
            VAR9->VAR4.VAR18 |= VAR36;
            if (VAR29 && VAR11->VAR34 > VAR29)
            {
                int64_t VAR37 = (VAR11->VAR38->VAR39 == VAR40) * VAR29 / 2;
                int64_t VAR41 = FUN8(VAR4->VAR42 + VAR37, 1, VAR29) * VAR29 - VAR37;
                VAR11->VAR34 += (VAR4->VAR42 - VAR41) / 8 - VAR29;
            }
            else
                VAR11->VAR34 = 0;
        }
    }
    if (*VAR8)
    {
        if (VAR14 && !(VAR9->VAR4.VAR18 & VAR36))
            goto VAR43;
        if (FUN9(VAR2, &VAR2->VAR27->VAR44->VAR4, VAR4))
        {
            while (*VAR8 && ((VAR14 && !((*VAR8)->VAR4.VAR18 & VAR36)) || !FUN9(VAR2, &(*VAR8)->VAR4, VAR4)))
                VAR8 = &(*VAR8)->VAR26;
            if (*VAR8)
                goto VAR43;
        }
        else
        {
            VAR8 = &(VAR2->VAR27->VAR44->VAR26);
        }
    }
    FUN10(!*VAR8);
    VAR2->VAR27->VAR44 = VAR9;
VAR43:
    VAR9->VAR26 = *VAR8;
    VAR2->VAR12[VAR4->VAR13]->VAR25 = *VAR8 = VAR9;
    FUN11(VAR4);
    return 0;
}