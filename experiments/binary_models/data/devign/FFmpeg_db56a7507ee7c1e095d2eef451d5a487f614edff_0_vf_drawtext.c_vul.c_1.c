static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned int VAR5, unsigned int VAR6, unsigned int VAR7, unsigned int VAR8, int VAR9, const uint8_t VAR10[4], const uint8_t VAR11[4])
{
    int VAR12, VAR13, VAR14;
    VAR15 *VAR16;
    uint8_t VAR17;
    for (VAR12 = 0; VAR12 < VAR4->VAR18 && VAR12 + VAR6 < VAR8; VAR12++)
    {
        for (VAR13 = 0; VAR13 < VAR4->VAR7 && VAR13 + VAR5 < VAR7; VAR13++)
        {
            VAR17 = FUN2(VAR12, VAR13);
            if (!VAR17)
                continue;
            FUN3(VAR2, VAR10, VAR17, VAR13 + VAR5, VAR6 + VAR12, VAR9, VAR11[0], VAR11[1], VAR11[2], VAR11[3]);
        }
    }
    return 0;
}