static int FUN1(VAR1 *VAR2, int *VAR3, VAR4 ***VAR5)
{
    int VAR6, VAR7, VAR8 = 0;
    VAR4 **VAR9;
    int VAR10 = -1, VAR11 = -1, VAR12 = -1;
    for (VAR6 = 0; VAR6 < VAR2->VAR13; VAR6++)
        if (VAR2->VAR14[VAR6]->VAR15 == VAR16)
            VAR8++;
    if (!VAR8)
        return VAR17;
    *VAR5 = FUN2(VAR8 * sizeof(**VAR5));
    VAR9 = FUN2(VAR8 * sizeof(*VAR9));
    if (!*VAR5 || !VAR9)
    {
        FUN3(VAR5);
        FUN4(VAR9);
        return FUN5(VAR18);
    }
    for (VAR6 = VAR7 = 0; VAR6 < VAR2->VAR13; VAR6++)
        if (VAR2->VAR14[VAR6]->VAR15 == VAR16)
            VAR9[VAR7++] = (VAR4 *)VAR2->VAR14[VAR6];
    *VAR3 = 0;
    for (VAR6 = 0; VAR6 < VAR8; VAR6++)
    {
        int VAR19 = -1, VAR20 = -1, VAR21 = -1, VAR22 = -1;
        for (VAR7 = 0; VAR7 < VAR8; VAR7++)
        {
            VAR4 *VAR23 = VAR9[VAR7];
            if ((VAR6 == 0 || VAR23->VAR24 > VAR10 || VAR23->VAR25 > VAR11 || VAR23->VAR26 > VAR12) && (VAR19 == -1 || VAR23->VAR24 < VAR20 || VAR23->VAR25 < VAR21 || VAR23->VAR26 < VAR22))
            {
                VAR19 = VAR7;
                VAR20 = VAR23->VAR24;
                VAR21 = VAR23->VAR25;
                VAR22 = VAR23->VAR26;
            }
        }
        if (VAR19 == -1)
            break;
        (*VAR5)[(*VAR3)++] = VAR9[VAR19];
        VAR10 = VAR20;
        VAR11 = VAR21;
        VAR12 = VAR22;
    }
    FUN4(VAR9);
    return 0;
}