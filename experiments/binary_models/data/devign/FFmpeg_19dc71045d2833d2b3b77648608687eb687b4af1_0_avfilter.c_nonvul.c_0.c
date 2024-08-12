void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6[4], *VAR7[4];
    int VAR8, VAR9, VAR10, VAR11;
    if (VAR2->VAR12)
    {
        FUN2(VAR2->VAR13, &VAR10, &VAR11);
        VAR6[0] = VAR2->VAR12->VAR14[0] + VAR3 * VAR2->VAR12->VAR15[0];
        VAR7[0] = VAR2->VAR16->VAR14[0] + VAR3 * VAR2->VAR16->VAR15[0];
        for (VAR8 = 1; VAR8 < 4; VAR8++)
        {
            if (VAR2->VAR12->VAR14[VAR8])
            {
                VAR6[VAR8] = VAR2->VAR12->VAR14[VAR8] + (VAR3 >> VAR11) * VAR2->VAR12->VAR15[VAR8];
                VAR7[VAR8] = VAR2->VAR16->VAR14[VAR8] + (VAR3 >> VAR11) * VAR2->VAR16->VAR15[VAR8];
            }
            else
                VAR6[VAR8] = VAR7[VAR8] = NULL;
        }
        for (VAR8 = 0; VAR8 < 4; VAR8++)
        {
            if (!VAR6[VAR8])
                continue;
            for (VAR9 = 0; VAR9 < VAR4 >> (VAR8 == 0 ? 0 : VAR11); VAR9++)
            {
                memcpy(VAR7[VAR8], VAR6[VAR8], VAR2->VAR16->VAR15[VAR8]);
                VAR6[VAR8] += VAR2->VAR12->VAR15[VAR8];
                VAR7[VAR8] += VAR2->VAR16->VAR15[VAR8];
            }
        }
    }
    if (!FUN3(VAR2).VAR17)
        return;
    FUN3(VAR2).FUN4(VAR2, VAR3, VAR4);
}