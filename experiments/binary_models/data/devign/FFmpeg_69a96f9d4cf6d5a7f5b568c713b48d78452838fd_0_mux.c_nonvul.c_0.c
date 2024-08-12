int FUN1(VAR1 *VAR2, VAR3 *VAR4, int (*VAR5)(VAR1 *, VAR3 *, VAR3 *))
{
    VAR6 **VAR7, *VAR8;
    VAR9 *VAR10 = VAR2->VAR11[VAR4->VAR12];
    int VAR13 = VAR2->VAR14 || VAR2->VAR15;
    VAR8 = FUN2(sizeof(VAR6));
    if (!VAR8)
        return FUN3(VAR16);
    VAR8->VAR4 = *VAR4;
    VAR4->VAR17 = NULL;
    FUN4(&VAR8->VAR4);
    if (VAR2->VAR11[VAR4->VAR12]->VAR18)
    {
        VAR7 = &(VAR10->VAR18->VAR19);
    }
    else
    {
        VAR7 = &VAR2->VAR20;
    }
    if (VAR13)
    {
        uint64_t VAR21 = FUN5(VAR2->VAR15, VAR22, VAR10->VAR23, VAR24);
        VAR10->VAR25 += VAR4->VAR26;
        VAR10->VAR27 += VAR4->VAR28;
        if ((VAR2->VAR14 && VAR10->VAR25 > VAR2->VAR14) || (VAR21 && VAR10->VAR27 > VAR21))
        {
            VAR10->VAR25 = VAR10->VAR27 = 0;
            VAR8->VAR4.VAR29 |= VAR30;
        }
    }
    if (*VAR7)
    {
        if (VAR13 && !(VAR8->VAR4.VAR29 & VAR30))
            goto VAR31;
        if (FUN6(VAR2, &VAR2->VAR32->VAR4, VAR4))
        {
            while (*VAR7 && ((VAR13 && !((*VAR7)->VAR4.VAR29 & VAR30)) || !FUN6(VAR2, &(*VAR7)->VAR4, VAR4)))
                VAR7 = &(*VAR7)->VAR19;
            if (*VAR7)
                goto VAR31;
        }
        else
        {
            VAR7 = &(VAR2->VAR32->VAR19);
        }
    }
    FUN7(!*VAR7);
    VAR2->VAR32 = VAR8;
VAR31:
    VAR8->VAR19 = *VAR7;
    VAR2->VAR11[VAR4->VAR12]->VAR18 = *VAR7 = VAR8;
    return 0;
}