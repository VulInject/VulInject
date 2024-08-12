static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int *VAR5;
    VAR6 *VAR7;
    int VAR8, VAR9, VAR10;
    int VAR11[4];
    for (VAR9 = 0; VAR9 < VAR4->VAR12; VAR9++)
        VAR11[VAR9] = FUN2(FUN3(FUN4(VAR2->VAR13)->VAR14[VAR9].VAR15 + 1 - VAR4->VAR16[VAR9].VAR17, 8), 0);
    for (VAR8 = 0; VAR8 < VAR4->VAR12; VAR8++)
    {
        VAR5 = VAR4->VAR16[VAR8].VAR18;
        for (VAR10 = 0; VAR10 < VAR4->VAR16[VAR8].VAR19; VAR10++)
        {
            VAR7 = (VAR6 *)(VAR2->VAR18[VAR8] + VAR10 * VAR2->VAR20[VAR8]);
            for (VAR9 = 0; VAR9 < VAR4->VAR16[VAR8].VAR21; VAR9++)
            {
                *VAR7 = 0x8000 * VAR4->VAR16[VAR8].VAR22 + (*VAR5 << VAR11[VAR8]);
                VAR7++;
                VAR5++;
            }
        }
    }
}