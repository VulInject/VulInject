static int FUN1(VAR1 *VAR2, VAR3 *VAR4, void **VAR5, VAR6 *VAR7, int64_t VAR8, int64_t VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    uint64_t VAR13, VAR14, VAR15, VAR16, VAR17;
    int VAR18;
    if (VAR9 <= 0)
    {
        return 0;
    }
    VAR13 = FUN2(VAR11, VAR8);
    VAR14 = FUN2(VAR11, VAR8 + VAR9 - 1);
    for (VAR15 = VAR13; VAR15 <= VAR14; VAR15 += VAR11->VAR19)
    {
        VAR16 = VAR15 >> VAR11->VAR20;
        if (VAR16 >= *VAR7)
        {
            VAR18 = FUN3(VAR11, VAR5, VAR7, VAR16 + 1);
            if (VAR18 < 0)
            {
                VAR4->VAR21++;
                return VAR18;
            }
        }
        VAR17 = VAR11->FUN4(*VAR5, VAR16);
        if (VAR17 == VAR11->VAR22)
        {
            fprintf(VAR23, "" VAR24 "", VAR15);
            VAR4->VAR25++;
            continue;
        }
        VAR11->FUN5(*VAR5, VAR16, VAR17 + 1);
    }
    return 0;