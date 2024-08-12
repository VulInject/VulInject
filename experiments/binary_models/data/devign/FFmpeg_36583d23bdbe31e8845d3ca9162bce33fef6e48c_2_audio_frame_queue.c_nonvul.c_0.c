void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, int *VAR6)
{
    int64_t VAR7 = VAR8;
    int VAR9 = 0;
    int VAR10;
    if (VAR2->VAR11 || VAR2->VAR12)
    {
        if (VAR2->VAR13->VAR5 != VAR8)
            VAR7 = VAR2->VAR13->VAR5;
    }
    if (!VAR2->VAR11)
        FUN2(VAR2->VAR14, VAR15, "", VAR3);
    if (VAR5)
        *VAR5 = FUN3(VAR2->VAR14, VAR7);
    for (VAR10 = 0; VAR3 && VAR10 < VAR2->VAR11; VAR10++)
    {
        int VAR16 = FUN4(VAR2->VAR13[VAR10].VAR6, VAR3);
        VAR2->VAR13[VAR10].VAR6 -= VAR16;
        VAR3 -= VAR16;
        VAR9 += VAR16;
        if (VAR2->VAR13[VAR10].VAR5 != VAR8)
            VAR2->VAR13[VAR10].VAR5 += VAR16;
    }
    VAR10 -= VAR10 && VAR2->VAR13[VAR10 - 1].VAR6;
    memmove(VAR2->VAR13, VAR2->VAR13 + VAR10, sizeof(*VAR2->VAR13) * (VAR2->VAR11 - VAR10));
    VAR2->VAR11 -= VAR10;
    if (VAR3)
    {
        FUN5(!VAR2->VAR11);
        if (VAR2->VAR13[0].VAR5 != VAR8)
            VAR2->VAR13[0].VAR5 += VAR3;
        FUN2(VAR2->VAR14, VAR17, "", VAR3);
    }
    if (VAR6)
        *VAR6 = FUN3(VAR2->VAR14, VAR9);
}