static int FUN1(VAR1 *VAR2, int VAR3, const VAR4 *VAR5, int VAR6, int64_t VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR2->VAR13[VAR3];
    VAR14 *VAR15 = VAR12->VAR10;
    int VAR16;
    while (VAR6 > 0)
    {
        if (VAR15->VAR17 == -1)
        {
            VAR15->VAR17 = VAR7;
        }
        VAR16 = VAR9->VAR18 - VAR15->VAR19;
        if (VAR16 > VAR6)
            VAR16 = VAR6;
        memcpy(VAR15->VAR20 + VAR15->VAR19, VAR5, VAR16);
        VAR15->VAR19 += VAR16;
        VAR5 += VAR16;
        VAR6 -= VAR16;
        while (VAR15->VAR19 >= VAR9->VAR18)
        {
            if (VAR15->VAR17 == -1)
                VAR15->VAR17 = VAR7;
            FUN2(VAR2, VAR3);
        }
    }
    return 0;
}