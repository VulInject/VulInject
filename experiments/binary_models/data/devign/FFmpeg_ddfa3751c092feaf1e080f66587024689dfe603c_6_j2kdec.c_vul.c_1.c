static VAR1 FUN1(VAR2 *VAR3)
{
    if (VAR3->VAR4 - VAR3->VAR5 < 4)
        return FUN2(VAR6);
    VAR3->VAR7 = FUN3(&VAR3->VAR5);
    if ((unsigned)VAR3->VAR7 >= VAR3->VAR8 * VAR3->VAR9)
    {
        VAR3->VAR7 = 0;
        return FUN2(VAR6);
    }
    VAR3->VAR5 += 4;
    if (!FUN4(&VAR3->VAR5))
    {
        VAR10 *VAR11 = VAR3->VAR11 + VAR3->VAR7;
        memcpy(VAR11->VAR12, VAR3->VAR12, VAR3->VAR13 * sizeof(VAR14));
        memcpy(VAR11->VAR15, VAR3->VAR15, VAR3->VAR13 * sizeof(VAR16));
    }
    FUN4(&VAR3->VAR5);
    return 0;
}