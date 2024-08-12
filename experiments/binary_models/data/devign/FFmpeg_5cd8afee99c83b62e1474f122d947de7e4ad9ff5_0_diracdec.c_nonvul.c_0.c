static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int VAR9, int VAR10, int VAR11, int VAR12, int VAR13, int VAR14)
{
    int VAR15, VAR16, VAR17;
    int VAR18, VAR19;
    VAR20 *VAR21;
    if (!VAR13)
    {
        if (VAR14)
            VAR17 = FUN2(VAR8, VAR22);
        else
            VAR17 = FUN3(VAR6);
        if (VAR17)
            return;
    }
    if (VAR2->VAR23 && !(VAR2->VAR24 && VAR13))
    {
        int VAR25 = VAR4->VAR25;
        if (VAR14)
            VAR25 += FUN4(VAR8, VAR26, VAR27);
        else
            VAR25 += FUN5(VAR6);
        if (VAR25 < 0)
        {
            FUN6(VAR2->VAR28, VAR29, "");
            return;
        }
        VAR4->VAR25 = VAR25;
    }
    VAR4->VAR25 = FUN7(VAR4->VAR25, VAR30);
    VAR19 = VAR31[VAR4->VAR25];
    if (!VAR2->VAR32)
        VAR18 = VAR33[VAR4->VAR25];
    else
        VAR18 = VAR34[VAR4->VAR25];
    VAR21 = VAR4->VAR35 + VAR11 * VAR4->VAR36;
    for (VAR16 = VAR11; VAR16 < VAR12; VAR16++)
    {
        for (VAR15 = VAR9; VAR15 < VAR10; VAR15++)
        {
            if (VAR14)
                FUN8(VAR8, VAR19, VAR18, VAR4, VAR21 + VAR15, VAR15, VAR16);
            else
                VAR21[VAR15] = FUN9(VAR6, VAR19, VAR18);
        }
        VAR21 += VAR4->VAR36;
    }
}