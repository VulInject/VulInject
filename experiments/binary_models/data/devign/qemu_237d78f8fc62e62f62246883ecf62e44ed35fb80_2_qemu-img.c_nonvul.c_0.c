static int FUN1(VAR1 *VAR2, int64_t VAR3, int64_t VAR4, VAR5 *VAR6)
{
    int VAR7;
    int VAR8;
    VAR1 *VAR9;
    bool VAR10;
    int64_t VAR11;
    VAR8 = 0;
    for (;;)
    {
        VAR7 = FUN2(VAR2, VAR3, VAR4, &VAR4, &VAR11, &VAR9);
        if (VAR7 < 0)
        {
            return VAR7;
        }
        assert(VAR4);
        if (VAR7 & (VAR12 | VAR13))
        {
            break;
        }
        VAR2 = FUN3(VAR2);
        if (VAR2 == NULL)
        {
            VAR7 = 0;
            break;
        }
        VAR8++;
    }
    VAR10 = !!(VAR7 & VAR14);
    *VAR6 = (VAR5){
        .VAR15 = VAR3,
        .VAR16 = VAR4,
        .VAR17 = !!(VAR7 & VAR13),
        .VAR18 = !!(VAR7 & VAR12),
        .VAR3 = VAR11,
        .VAR10 = VAR10,
        .VAR8 = VAR8,
        .VAR19 = VAR9 && VAR10,
        .VAR20 = VAR9 && VAR10 ? VAR9->VAR20 : NULL,
    };
    return 0;
}