int FUN1(VAR1 *VAR2, int64_t VAR3)
{
    VAR4 *VAR5;
    int VAR6 = VAR2->VAR7 ? VAR2->VAR7 : VAR8;
    int VAR9 = VAR2->VAR10 - VAR2->VAR5;
    ptrdiff_t VAR11 = VAR2->VAR12 ? VAR2->VAR12 - VAR2->VAR5 : -1;
    VAR3 += VAR2->VAR13 - VAR2->VAR5 + VAR6;
    if (VAR3 < VAR9 || VAR2->VAR14 || !VAR2->VAR15)
        return 0;
    FUN2(!VAR2->VAR16);
    VAR5 = FUN3(VAR3);
    if (!VAR5)
        return FUN4(VAR17);
    memcpy(VAR5, VAR2->VAR5, VAR9);
    FUN5(VAR2->VAR5);
    VAR2->VAR13 = VAR5 + (VAR2->VAR13 - VAR2->VAR5);
    VAR2->VAR10 = VAR5 + (VAR2->VAR10 - VAR2->VAR5);
    VAR2->VAR5 = VAR5;
    VAR2->VAR18 = VAR3;
    return 0;