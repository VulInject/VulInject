static int FUN1(VAR1 *VAR2)
{
    unsigned VAR3, VAR4, VAR5 = 0;
    if (VAR2->VAR6 < 22 || FUN2(VAR2->VAR7) || FUN2(VAR2->VAR7 + 2) != 1)
        return 0;
    VAR4 = FUN2(VAR2->VAR7 + 4);
    if (!VAR4)
        return 0;
    for (VAR3 = 0; VAR3 < VAR4 && VAR3 * 16 + 22 <= VAR2->VAR6; VAR3++)
    {
        unsigned VAR8;
        if (FUN2(VAR2->VAR7 + 10 + VAR3 * 16) & ~1)
            return FUN3(VAR3, VAR9 / 4);
        if (VAR2->VAR7[13 + VAR3 * 16])
            return FUN3(VAR3, VAR9 / 4);
        if (FUN4(VAR2->VAR7 + 14 + VAR3 * 16) < 40)
            return FUN3(VAR3, VAR9 / 4);
        VAR8 = FUN4(VAR2->VAR7 + 18 + VAR3 * 16);
        if (VAR8 < 22)
            return FUN3(VAR3, VAR9 / 4);
        if (VAR8 + 8 > VAR2->VAR6)
            continue;
        if (VAR2->VAR7[VAR8] != 40 && FUN5(VAR2->VAR7 + VAR8) != VAR10)
            return FUN3(VAR3, VAR9 / 4);
        VAR5++;
    }
    if (VAR5 < VAR4)
        return VAR9 / 4 + FUN3(VAR5, 1);
    return VAR9 / 2 + 1;
}