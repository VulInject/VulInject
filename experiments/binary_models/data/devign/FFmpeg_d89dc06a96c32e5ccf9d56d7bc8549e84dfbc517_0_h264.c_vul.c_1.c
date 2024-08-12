static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR3 *VAR6, int VAR7, int VAR8, int VAR9)
{
    VAR10 *const VAR11 = &VAR2->VAR11;
    int VAR12, VAR13;
    uint64_t VAR14;
    VAR4 -= VAR7 + 1;
    VAR5 -= VAR8 + 1;
    VAR6 -= VAR8 + 1;
    VAR15 = VAR16;
    if (VAR9)
        VAR16 = VAR17;
    VAR17 = VAR15;
    for (VAR13 = 0; VAR13 < 17; VAR13++)
    {
        FUN2(VAR2->VAR18[VAR13], VAR4[VAR13 * VAR7], VAR12, VAR9);
    }
    FUN2(*(VAR19 *)(VAR2->VAR20[VAR11->VAR21] + 0), *(VAR19 *)(VAR4 + 1), VAR14, VAR9);
    FUN2(*(VAR19 *)(VAR2->VAR20[VAR11->VAR21] + 8), *(VAR19 *)(VAR4 + 9), VAR14, 1);
    if (!(VAR11->VAR22 & VAR23))
    {
        for (VAR13 = 0; VAR13 < 9; VAR13++)
        {
            FUN2(VAR2->VAR18[VAR13 + 17], VAR5[VAR13 * VAR8], VAR12, VAR9);
            FUN2(VAR2->VAR18[VAR13 + 17 + 9], VAR6[VAR13 * VAR8], VAR12, VAR9);
        }
        FUN2(*(VAR19 *)(VAR2->VAR20[VAR11->VAR21] + 16), *(VAR19 *)(VAR5 + 1), VAR14, 1);
        FUN2(*(VAR19 *)(VAR2->VAR20[VAR11->VAR21] + 24), *(VAR19 *)(VAR6 + 1), VAR14, 1);
    }
}