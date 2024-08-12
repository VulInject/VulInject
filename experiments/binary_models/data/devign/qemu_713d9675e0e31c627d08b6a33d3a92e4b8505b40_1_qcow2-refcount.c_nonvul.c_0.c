static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int64_t VAR7, int64_t VAR8, int64_t VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    uint64_t VAR13, VAR14, VAR15, VAR16;
    if (VAR9 <= 0)
        return;
    VAR13 = FUN2(VAR11, VAR8);
    VAR14 = FUN2(VAR11, VAR8 + VAR9 - 1);
    for (VAR15 = VAR13; VAR15 <= VAR14; VAR15 += VAR11->VAR17)
    {
        VAR16 = VAR15 >> VAR11->VAR18;
        if (VAR16 >= VAR7)
        {
            fprintf(VAR19, "" VAR20 ""
                            "",
                    VAR15);
            VAR4->VAR21++;
        }
        else
        {
            if (++VAR6[VAR16] == 0)
            {
                fprintf(VAR19, "" VAR20 "", VAR15);
                VAR4->VAR22++;
            }
        }
    }
}