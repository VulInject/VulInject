static int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5 = *(void **)VAR3;
    const VAR6 *VAR7 = VAR5->VAR8.VAR9;
    int VAR10 = VAR5->VAR11;
    const int VAR12 = VAR5->VAR13 != VAR14;
    VAR5->VAR15 = (3 * (VAR5->VAR16 - VAR5->VAR11) * VAR5->VAR17) >> VAR12;
    for (;;)
    {
        uint32_t VAR18;
        int VAR19;
        VAR19 = FUN2((VAR20 *)VAR5, VAR10, &VAR7, VAR5->VAR8.VAR21 - VAR7);
        FUN3();
        if (VAR19 < 0)
        {
            if (VAR5->VAR22 >= 0 && VAR5->VAR23 >= 0)
                FUN4(VAR5, VAR5->VAR22, VAR5->VAR23, VAR5->VAR24, VAR5->VAR10, VAR25 | VAR26 | VAR27);
        }
        else
        {
            FUN4(VAR5, VAR5->VAR22, VAR5->VAR23, VAR5->VAR24 - 1, VAR5->VAR10, VAR28 | VAR29 | VAR30);
        }
        if (VAR5->VAR10 == VAR5->VAR16)
            return 0;
        VAR18 = -1;
        VAR7 = FUN5(VAR7, VAR5->VAR8.VAR21, &VAR18);
        VAR10 = (VAR18 - VAR31) << VAR12;
        if (VAR5->VAR13 == VAR32)
            VAR10++;
        if (VAR10 < 0 || VAR10 >= VAR5->VAR16)
            return -1;
    }
}