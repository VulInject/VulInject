int FUN1(VAR1 *VAR2, double *VAR3, int VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    VAR5 = FUN2(VAR2->VAR9);
    VAR6 = FUN2(VAR2->VAR10);
    if (VAR5 < 0 || VAR5 > VAR11 || VAR6 < 0 || VAR6 > VAR11)
    {
        FUN3(VAR2, VAR12, "");
        return FUN4(VAR13);
    }
    switch (VAR2->VAR14)
    {
    case VAR15:
        if (!VAR2->VAR16->VAR17[0])
        {
            FUN3(VAR2, VAR12, "");
            return FUN4(VAR13);
        }
        for (VAR8 = 0; VAR8 < VAR6; VAR8++)
            for (VAR7 = 0; VAR7 < VAR5; VAR7++)
                VAR3[VAR8 * VAR4 + VAR7] = VAR2->VAR16->VAR17[VAR8][VAR7] / 256.0;
        break;
    case VAR18:
        if (!VAR2->VAR16->VAR19[0])
        {
            FUN3(VAR2, VAR12, "");
            return FUN4(VAR13);
        }
        for (VAR8 = 0; VAR8 < VAR6; VAR8++)
            for (VAR7 = 0; VAR7 < VAR5; VAR7++)
                VAR3[VAR8 * VAR4 + VAR7] = VAR2->VAR16->VAR19[VAR8][VAR7] / 32768.0;
        break;
    case VAR20:
        if (!VAR2->VAR16->VAR21[0])
        {
            FUN3(VAR2, VAR12, "");
            return FUN4(VAR13);
        }
        for (VAR8 = 0; VAR8 < VAR6; VAR8++)
            for (VAR7 = 0; VAR7 < VAR5; VAR7++)
                VAR3[VAR8 * VAR4 + VAR7] = VAR2->VAR16->VAR21[VAR8][VAR7];
        break;
    default:
        FUN3(VAR2, VAR12, "");
        return FUN4(VAR13);
    }
    return 0;
}