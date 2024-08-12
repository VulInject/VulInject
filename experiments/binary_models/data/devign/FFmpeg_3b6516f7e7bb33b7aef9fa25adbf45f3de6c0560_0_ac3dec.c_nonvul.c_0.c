static inline void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    float VAR5 = VAR2->VAR5;
    if (VAR2->VAR6 == 1 && VAR3 > 1)
        VAR5 *= VAR7;
    for (VAR4 = 1; VAR4 <= VAR3; VAR4++)
    {
        if (VAR2->VAR8[VAR4])
        {
            int VAR9;
            float *VAR10 = VAR2->VAR11 + 128;
            for (VAR9 = 0; VAR9 < 128; VAR9++)
                VAR10[VAR9] = VAR2->VAR12[VAR4][2 * VAR9];
            FUN2(&VAR2->VAR13, VAR2->VAR11, VAR10);
            VAR2->VAR14.FUN3(VAR2->VAR15[VAR4 - 1], VAR2->VAR16[VAR4 - 1], VAR2->VAR11, VAR2->VAR17, VAR5, 128);
            for (VAR9 = 0; VAR9 < 128; VAR9++)
                VAR10[VAR9] = VAR2->VAR12[VAR4][2 * VAR9 + 1];
            FUN2(&VAR2->VAR13, VAR2->VAR16[VAR4 - 1], VAR10);
        }
        else
        {
            FUN2(&VAR2->VAR18, VAR2->VAR11, VAR2->VAR12[VAR4]);
            VAR2->VAR14.FUN3(VAR2->VAR15[VAR4 - 1], VAR2->VAR16[VAR4 - 1], VAR2->VAR11, VAR2->VAR17, VAR5, 128);
            memcpy(VAR2->VAR16[VAR4 - 1], VAR2->VAR11 + 128, 128 * sizeof(float));
        }
    }
}