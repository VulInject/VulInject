static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int64_t VAR5, int64_t VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    if (VAR3 == -1 && VAR2->VAR11 != 1)
    {
        int VAR12, VAR13 = 0;
        AVRational VAR14 = VAR2->VAR15[0]->VAR14;
        VAR5 = FUN2(VAR5, VAR16, VAR14);
        VAR4 = FUN3(VAR4, VAR14.VAR17, VAR14.VAR18 * (VAR19)VAR20, VAR21 | VAR22);
        VAR6 = FUN3(VAR6, VAR14.VAR17, VAR14.VAR18 * (VAR19)VAR20, VAR23 | VAR22);
        for (VAR12 = 0; VAR12 < VAR2->VAR11; VAR12++)
        {
            int VAR24 = FUN4(&VAR9->VAR25[VAR12], VAR2, VAR3, VAR4, VAR5, VAR6, VAR7);
            if (VAR24 < 0)
                VAR13 = VAR24;
        }
        return VAR13;
    }
    return FUN4(&VAR9->VAR25[VAR3], VAR2, VAR3, VAR4, VAR5, VAR6, VAR7);