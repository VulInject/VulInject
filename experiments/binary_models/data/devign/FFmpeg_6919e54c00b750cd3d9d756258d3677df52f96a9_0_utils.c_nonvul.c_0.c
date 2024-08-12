int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6)
{
    VAR7 *VAR8, **VAR9, *VAR10;
    int VAR11 = 0;
    int VAR12[VAR13];
    if (VAR5)
    {
        VAR14 *VAR15 = VAR2->VAR12[VAR5->VAR16];
        VAR10 = FUN2(sizeof(VAR7));
        VAR10->VAR5 = *VAR5;
        if (VAR5->VAR17 == VAR18)
            VAR5->VAR17 = NULL;
        else
            FUN3(&VAR10->VAR5);
        VAR9 = &VAR2->VAR19;
        while (*VAR9)
        {
            VAR14 *VAR20 = VAR2->VAR12[(*VAR9)->VAR5.VAR16];
            int64_t VAR21 = VAR20->VAR22.VAR23 * (VAR24)VAR15->VAR22.VAR25;
            int64_t VAR26 = VAR15->VAR22.VAR23 * (VAR24)VAR20->VAR22.VAR25;
            if ((*VAR9)->VAR5.VAR27 * VAR21 > VAR5->VAR27 * VAR26)
                break;
            VAR9 = &(*VAR9)->VAR28;
        }
        VAR10->VAR28 = *VAR9;
        *VAR9 = VAR10;
    }
    memset(VAR12, 0, sizeof(VAR12));
    VAR8 = VAR2->VAR19;
    while (VAR8)
    {
        if (VAR12[VAR8->VAR5.VAR16] == 0)
            VAR11++;
        VAR12[VAR8->VAR5.VAR16]++;
        VAR8 = VAR8->VAR28;
    }
    if (VAR11 && (VAR2->VAR29 == VAR11 || VAR6))
    {
        VAR8 = VAR2->VAR19;
        *VAR4 = VAR8->VAR5;
        VAR2->VAR19 = VAR8->VAR28;
        FUN4(&VAR8);
        return 1;
    }
    else
    {
        FUN5(VAR4);
        return 0;
    }
}