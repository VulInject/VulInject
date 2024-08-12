static void FUN1(VAR1 *VAR2, VAR3 *VAR4, float *VAR5)
{
    int VAR6, VAR7;
    for (VAR6 = VAR2->VAR8; VAR6 < VAR2->VAR9; VAR6++)
    {
        float *VAR10 = VAR5 + (VAR11[VAR6] << VAR2->VAR12);
        float VAR13 = FUN2(VAR4->VAR14[VAR6] + VAR15[VAR6]);
        for (VAR7 = 0; VAR7 < VAR16[VAR6] << VAR2->VAR12; VAR7++)
            VAR10[VAR7] *= VAR13;
    }
}