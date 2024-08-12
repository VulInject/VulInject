static int FUN1(VAR1 *VAR2, int VAR3, const VAR4 *VAR5, int VAR6, int64_t VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR2->VAR13[VAR3];
    VAR14 *VAR15 = VAR12->VAR10;
    int64_t VAR16;
    int VAR17;
    if (VAR3 == VAR9->VAR18)
        VAR9->VAR19 = VAR7;
    FUN2("", VAR3, VAR7 / 90000.0, VAR9->VAR19 / 90000.0);
    VAR16 = VAR20;
    if (VAR15->VAR21 == VAR20)
    {
        VAR15->VAR21 = VAR7;
        VAR15->VAR22 = VAR16;
    }
    while (VAR6 > 0)
    {
        VAR17 = VAR9->VAR23 - VAR15->VAR24;
        if (VAR17 > VAR6)
            VAR17 = VAR6;
        memcpy(VAR15->VAR25 + VAR15->VAR24, VAR5, VAR17);
        VAR15->VAR24 += VAR17;
        VAR5 += VAR17;
        VAR6 -= VAR17;
        while (VAR15->VAR24 >= VAR9->VAR23)
        {
            FUN3(VAR2, VAR3, VAR15->VAR21, VAR15->VAR22, VAR9->VAR19);
            VAR15->VAR21 = VAR20;
            VAR15->VAR22 = VAR20;
        }
    }
    return 0;
}