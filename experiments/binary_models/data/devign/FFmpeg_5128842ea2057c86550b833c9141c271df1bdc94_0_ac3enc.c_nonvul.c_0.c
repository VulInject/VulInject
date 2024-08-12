static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4;
    int VAR5, VAR6;
    VAR4 = 8 * VAR2->VAR7 - (VAR2->VAR8 + VAR2->VAR9);
    VAR5 = VAR2->VAR10 << 4;
    while (VAR5 >= 0 && FUN2(VAR2, VAR5) > VAR4)
    {
        VAR5 -= 64;
    }
    if (VAR5 < 0)
        return FUN3(VAR11);
    FUN4(VAR12 *, VAR2->VAR13, VAR2->VAR14);
    for (VAR6 = 64; VAR6 > 0; VAR6 >>= 2)
    {
        while (VAR5 + VAR6 <= 1023 && FUN2(VAR2, VAR5 + VAR6) <= VAR4)
        {
            VAR5 += VAR6;
            FUN4(VAR12 *, VAR2->VAR13, VAR2->VAR14);
        }
    }
    FUN4(VAR12 *, VAR2->VAR13, VAR2->VAR14);
    FUN5(VAR2);
    VAR2->VAR10 = VAR5 >> 4;
    for (VAR3 = 0; VAR3 < VAR2->VAR15; VAR3++)
        VAR2->VAR16[VAR3] = VAR5 & 0xF;
    return 0;
}