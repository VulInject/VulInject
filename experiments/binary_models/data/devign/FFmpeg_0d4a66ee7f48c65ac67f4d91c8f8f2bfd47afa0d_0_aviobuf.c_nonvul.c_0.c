int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;
    int VAR6 = VAR2->VAR7 ? VAR2->VAR7 : VAR8;
    int VAR9 = VAR2->VAR10 - VAR2->VAR5;
    VAR3 += VAR2->VAR11 - VAR2->VAR5 + VAR6;
    if (VAR3 < VAR9 || VAR2->VAR12)
        return 0;
    FUN2(!VAR2->VAR13);
    VAR5 = FUN3(VAR3);
    if (!VAR5)
        return FUN4(VAR14);
    memcpy(VAR5, VAR2->VAR5, VAR9);
    FUN5(VAR2->VAR5);
    VAR2->VAR11 = VAR5 + (VAR2->VAR11 - VAR2->VAR5);
    VAR2->VAR10 = VAR5 + (VAR2->VAR10 - VAR2->VAR5);
    VAR2->VAR5 = VAR5;
    VAR2->VAR15 = VAR3;
    return 0;
}