static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = VAR3->VAR6;
    int16_t VAR7;
    int8_t VAR8, VAR9;
    int VAR10;
    int VAR11, VAR12;
    VAR10 = 0;
    if (FUN2(VAR3->VAR13[0], 0, &VAR7, &VAR8, &VAR9) >= 0)
    {
        FUN3(VAR5, 0x19, 0x1b, VAR7, VAR8, VAR9);
        VAR10 |= 0xf0;
    }
    if (FUN2(VAR3->VAR13[0], 1, &VAR7, &VAR8, &VAR9) >= 0)
    {
        FUN3(VAR5, 0x1a, 0x24, VAR7, VAR8, VAR9);
        VAR10 |= 0x0f;
    }
    FUN4(VAR5, 0x12, VAR10);
    VAR10 = 0;
    for (VAR11 = 0; VAR11 < 4; VAR11++)
    {
        if (FUN2(VAR3->VAR13[VAR11 / 2], VAR11 % 2, &VAR7, &VAR8, &VAR9) >= 0)
        {
            VAR12 = FUN5(VAR3->VAR13[VAR11 / 2], VAR11 % 2) - 1;
            assert((VAR12 & ~3) == 0);
            VAR10 |= VAR12 << (VAR11 * 2);
        }
    }
    FUN4(VAR5, 0x39, VAR10);
    FUN6(VAR5, FUN7());
    FUN8(VAR14, VAR1);
}