static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    int VAR7, VAR8, VAR9, VAR10;
    int VAR11[4];
    for (VAR8 = 0; VAR8 < VAR4->VAR12; VAR8++)
        VAR11[VAR8] = FUN2(FUN3(FUN4(VAR2->VAR13)->VAR14[VAR8].VAR15 + 1 - VAR4->VAR16[VAR8].VAR17, 8), 0);
    for (VAR9 = 0; VAR9 < VAR2->VAR18; VAR9++)
    {
        VAR7 = VAR9 * VAR2->VAR19;
        VAR6 = (VAR5 *)(VAR2->VAR20[0] + VAR9 * VAR2->VAR21[0]);
        for (VAR8 = 0; VAR8 < VAR2->VAR19; VAR8++, VAR7++)
        {
            for (VAR10 = 0; VAR10 < VAR4->VAR12; VAR10++)
            {
                *VAR6++ = 0x8000 * VAR4->VAR16[VAR10].VAR22 + (VAR4->VAR16[VAR10].VAR20[VAR7] << VAR11[VAR10]);
            }
        }
    }
}