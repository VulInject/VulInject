static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    for (VAR3 = 0; VAR3 < 2; VAR3++)
    {
        for (VAR4 = 0; VAR4 < VAR2->VAR6[VAR3]; VAR4++)
        {
            VAR7 *VAR8 = &VAR2->VAR9[VAR3][VAR4];
            VAR7 *VAR10 = &VAR2->VAR9[VAR3][16 + 2 * VAR4];
            VAR10[0] = *VAR8;
            for (VAR5 = 0; VAR5 < 3; VAR5++)
                VAR10[0].VAR11[VAR5] <<= 1;
            VAR10[1] = VAR10[0];
            for (VAR5 = 0; VAR5 < 3; VAR5++)
                VAR10[1].VAR12[VAR5] += VAR8->VAR11[VAR5];
            VAR2->VAR13[VAR3][16 + 2 * VAR4] = VAR2->VAR13[VAR3][16 + 2 * VAR4 + 1] = VAR2->VAR13[VAR3][VAR4];
            VAR2->VAR14[VAR3][16 + 2 * VAR4] = VAR2->VAR14[VAR3][16 + 2 * VAR4 + 1] = VAR2->VAR14[VAR3][VAR4];
            for (VAR5 = 0; VAR5 < 2; VAR5++)
            {
                VAR2->VAR15[VAR3][16 + 2 * VAR4][VAR5] = VAR2->VAR15[VAR3][16 + 2 * VAR4 + 1][VAR5] = VAR2->VAR15[VAR3][VAR4][VAR5];
                VAR2->VAR16[VAR3][16 + 2 * VAR4][VAR5] = VAR2->VAR16[VAR3][16 + 2 * VAR4 + 1][VAR5] = VAR2->VAR16[VAR3][VAR4][VAR5];
            }
        }
    }
    for (VAR5 = 0; VAR5 < VAR2->VAR6[1]; VAR5++)
    {
        for (VAR4 = 0; VAR4 < VAR2->VAR6[0]; VAR4++)
            VAR2->VAR17[VAR5][16 + 2 * VAR4] = VAR2->VAR17[VAR5][16 + 2 * VAR4 + 1] = VAR2->VAR17[VAR5][VAR4];
        memcpy(VAR2->VAR17[16 + 2 * VAR5], VAR2->VAR17[VAR5], sizeof(*VAR2->VAR17));
        memcpy(VAR2->VAR17[16 + 2 * VAR5 + 1], VAR2->VAR17[VAR5], sizeof(*VAR2->VAR17));
    }
}