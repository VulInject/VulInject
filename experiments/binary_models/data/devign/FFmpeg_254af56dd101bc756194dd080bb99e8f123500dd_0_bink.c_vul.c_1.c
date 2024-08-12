static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint8_t VAR5[16], VAR6[16], *VAR7 = VAR5, *VAR8 = VAR6;
    int VAR9, VAR10, VAR11;
    VAR4->VAR12 = FUN2(VAR2, 4);
    if (!VAR4->VAR12)
    {
        for (VAR9 = 0; VAR9 < 16; VAR9++)
            VAR4->VAR13[VAR9] = VAR9;
        return;
    }
    if (FUN3(VAR2))
    {
        VAR11 = FUN2(VAR2, 3);
        memset(VAR5, 0, sizeof(VAR5));
        for (VAR9 = 0; VAR9 <= VAR11; VAR9++)
        {
            VAR4->VAR13[VAR9] = FUN2(VAR2, 4);
            VAR5[VAR4->VAR13[VAR9]] = 1;
        }
        for (VAR9 = 0; VAR9 < 16; VAR9++)
            if (!VAR5[VAR9])
                VAR4->VAR13[++VAR11] = VAR9;
    }
    else
    {
        VAR11 = FUN2(VAR2, 2);
        for (VAR9 = 0; VAR9 < 16; VAR9++)
            VAR7[VAR9] = VAR9;
        for (VAR9 = 0; VAR9 <= VAR11; VAR9++)
        {
            int VAR14 = 1 << VAR9;
            for (VAR10 = 0; VAR10 < 16; VAR10 += VAR14 << 1)
                FUN4(VAR2, VAR8 + VAR10, VAR7 + VAR10, VAR14);
            FUN5(VAR15 *, VAR7, VAR8);
        }
        memcpy(VAR4->VAR13, VAR7, 16);
    }
}