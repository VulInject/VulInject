static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6, VAR7 *VAR8, int64_t VAR9, int64_t VAR10)
{
    VAR11 *VAR12 = VAR2->VAR13;
    uint64_t VAR14, VAR15, VAR16, VAR17;
    if (VAR10 <= 0)
    {
        return 0;
    }
    VAR14 = FUN2(VAR12, VAR9);
    VAR15 = FUN2(VAR12, VAR9 + VAR10 - 1);
    for (VAR16 = VAR14; VAR16 <= VAR15; VAR16 += VAR12->VAR18)
    {
        VAR17 = VAR16 >> VAR12->VAR19;
        if (VAR17 >= *VAR8)
        {
            int64_t VAR20 = *VAR8;
            VAR5 *VAR21;
            *VAR8 = VAR17 + 1;
            VAR21 = FUN3(*VAR6, *VAR8 * sizeof(**VAR6));
            if (!VAR21)
            {
                *VAR8 = VAR20;
                VAR4->VAR22++;
                return -VAR23;
            }
            *VAR6 = VAR21;
            memset(*VAR6 + VAR20, 0, (*VAR8 - VAR20) * sizeof(**VAR6));
        }
        if (++(*VAR6)[VAR17] == 0)
        {
            fprintf(VAR24, "" VAR25 "", VAR16);
            VAR4->VAR26++;
        }
    }
    return 0;
}