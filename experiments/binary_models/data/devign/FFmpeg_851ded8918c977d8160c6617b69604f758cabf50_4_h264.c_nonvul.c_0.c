static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *const VAR6 = &VAR2->VAR6;
    int VAR7, VAR8;
    int VAR9 = 0;
    if (VAR10)
    {
        int VAR11 = VAR3 + (VAR4 & ~1) * VAR6->VAR12;
        VAR7 = VAR11 - 1;
        if ((VAR4 & 1) && VAR2->VAR13[VAR7] == VAR2->VAR14 && VAR15 == !!FUN2(VAR6->VAR16.VAR17[VAR7]))
            VAR7 += VAR6->VAR12;
        if (VAR15)
        {
            VAR8 = VAR11 - VAR6->VAR12;
            if (!(VAR4 & 1) && VAR2->VAR13[VAR8] == VAR2->VAR14 && FUN2(VAR6->VAR16.VAR17[VAR8]))
                VAR8 -= VAR6->VAR12;
        }
        else
            VAR8 = VAR3 + (VAR4 - 1) * VAR6->VAR12;
    }
    else
    {
        int VAR11 = VAR3 + VAR4 * VAR6->VAR12;
        VAR7 = VAR11 - 1;
        VAR8 = VAR11 - VAR6->VAR12;
    }
    if (VAR2->VAR13[VAR7] == VAR2->VAR14 && !FUN3(VAR6->VAR16.VAR17[VAR7]))
        VAR9++;
    if (VAR2->VAR13[VAR8] == VAR2->VAR14 && !FUN3(VAR6->VAR16.VAR17[VAR8]))
        VAR9++;
    if (VAR2->VAR18 == VAR19)
        VAR9 += 13;
    return FUN4(&VAR2->VAR20, &VAR2->VAR21[11 + VAR9]);
}