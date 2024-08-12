static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6, VAR7 *VAR8, int64_t VAR9, int64_t VAR10)
{
    VAR11 *VAR12 = VAR2->VAR13;
    uint64_t VAR14, VAR15, VAR16, VAR17;
    int VAR18;
    if (VAR10 <= 0)
    {
        return 0;
    }
    VAR14 = FUN2(VAR12, VAR9);
    VAR15 = FUN2(VAR12, VAR9 + VAR10 - 1);
    for (VAR16 = VAR14; VAR16 <= VAR15; VAR16 += VAR12->VAR19)
    {
        VAR17 = VAR16 >> VAR12->VAR20;
        if (VAR17 >= *VAR8)
        {
            VAR18 = FUN3(VAR12, VAR6, VAR8, VAR17 + 1);
            if (VAR18 < 0)
            {
                VAR4->VAR21++;
                return VAR18;
            }
        }
        if (++(*VAR6)[VAR17] == 0)
        {
            fprintf(VAR22, "" VAR23 "", VAR16);
            VAR4->VAR24++;
        }
    }
    return 0;
}