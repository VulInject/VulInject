int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5;
    AudioData VAR6;
    if (VAR3 < 0 || VAR3 > VAR7 / 2 / VAR2->VAR8 / VAR2->VAR9)
        return FUN2(VAR10);
    if (VAR2->VAR3 >= VAR3)
        return 0;
    VAR3 *= 2;
    VAR5 = FUN3(VAR3 * VAR2->VAR8, VAR11);
    VAR6 = *VAR2;
    FUN4(VAR2->VAR8);
    FUN4(VAR2->VAR9);
    VAR2->VAR12 = FUN5(VAR5, VAR2->VAR9);
    if (!VAR2->VAR12)
        return FUN2(VAR13);
    for (VAR4 = 0; VAR4 < VAR2->VAR9; VAR4++)
    {
        VAR2->VAR14[VAR4] = VAR2->VAR12 + VAR4 * (VAR2->VAR15 ? VAR5 : VAR2->VAR8);
        if (VAR2->VAR3 && VAR2->VAR15)
            memcpy(VAR2->VAR14[VAR4], VAR6.VAR14[VAR4], VAR2->VAR3 * VAR2->VAR8);
    }
    if (VAR2->VAR3 && !VAR2->VAR15)
        memcpy(VAR2->VAR14[0], VAR6.VAR14[0], VAR2->VAR3 * VAR2->VAR9 * VAR2->VAR8);
    FUN6(&VAR6.VAR12);
    VAR2->VAR3 = VAR3;
    return 1;
}