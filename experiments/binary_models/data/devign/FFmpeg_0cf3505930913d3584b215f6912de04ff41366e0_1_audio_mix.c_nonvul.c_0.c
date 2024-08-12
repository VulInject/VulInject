int FUN1(VAR1 *VAR2, double *VAR3, int VAR4)
{
    int VAR5, VAR6;
    if (VAR2->VAR7 <= 0 || VAR2->VAR7 > VAR8 || VAR2->VAR9 <= 0 || VAR2->VAR9 > VAR8)
    {
        FUN2(VAR2->VAR10, VAR11, "");
        return FUN3(VAR12);
    }
    if (!VAR2->VAR13##VAR14[0])
    {
        FUN2(VAR2->VAR10, VAR11, "");
        return FUN3(VAR12);
    }
    for (VAR6 = 0; VAR6 < VAR2->VAR9; VAR6++)
        for (VAR5 = 0; VAR5 < VAR2->VAR7; VAR5++)
            VAR3[VAR6 * VAR4 + VAR5] = VAR2->VAR13##VAR14[VAR6][VAR5] * (VAR15);
    switch (VAR2->VAR16)
    {
    case VAR17:
        FUN4(VAR18, 1.0 / 256.0);
        break;
    case VAR19:
        FUN4(VAR20, 1.0 / 32768.0);
        break;
    case VAR21:
        FUN4(VAR22, 1.0);
        break;
    default:
        FUN2(VAR2->VAR10, VAR11, "");
        return FUN3(VAR12);
    }
    return 0;
}