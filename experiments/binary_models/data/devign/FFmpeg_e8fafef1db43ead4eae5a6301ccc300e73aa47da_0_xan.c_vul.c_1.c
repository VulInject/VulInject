static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9)
{
    int VAR10;
    int VAR11;
    int VAR12, VAR13;
    int VAR14, VAR15;
    int VAR16 = VAR2->VAR17->VAR16;
    VAR18 *VAR19, *VAR20;
    if (VAR6 + VAR9 < 0 || VAR6 + VAR9 >= VAR2->VAR17->VAR21 || VAR5 + VAR8 < 0 || VAR5 + VAR8 >= VAR2->VAR17->VAR16)
        return;
    VAR19 = VAR4->VAR22[0];
    VAR20 = VAR2->VAR23->VAR22[0];
    if (!VAR20)
        VAR20 = VAR19;
    VAR10 = VAR4->VAR24[0];
    VAR11 = VAR10 - VAR16;
    VAR12 = VAR6 * VAR10 + VAR5;
    VAR14 = VAR5;
    VAR13 = (VAR6 + VAR9) * VAR10 + VAR5 + VAR8;
    VAR15 = VAR5 + VAR8;
    if (VAR20 == VAR19 && FUN2(VAR12 - VAR13) < VAR7)
    {
        FUN3(VAR2->VAR17, "");
        return;
    }
    while (VAR7 && VAR12 < VAR2->VAR25 && VAR13 < VAR2->VAR25)
    {
        int VAR26 = FUN4(VAR7, VAR16 - VAR14, VAR16 - VAR15);
        memcpy(VAR19 + VAR12, VAR20 + VAR13, VAR26);
        VAR7 -= VAR26;
        VAR12 += VAR26;
        VAR13 += VAR26;
        VAR14 += VAR26;
        VAR15 += VAR26;
        if (VAR14 >= VAR16)
        {
            VAR12 += VAR11;
            VAR14 = 0;
        }
        if (VAR15 >= VAR16)
        {
            VAR13 += VAR11;
            VAR15 = 0;
        }
    }
}