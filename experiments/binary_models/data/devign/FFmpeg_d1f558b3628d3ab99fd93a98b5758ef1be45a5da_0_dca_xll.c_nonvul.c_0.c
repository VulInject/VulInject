static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    if (VAR5 > VAR7)
        return FUN2(VAR8);
    if (!VAR2->VAR9 && !(VAR2->VAR9 = FUN3(VAR7 + VAR10)))
        return FUN2(VAR11);
    memcpy(VAR2->VAR9, VAR4, VAR5);
    VAR2->VAR12 = VAR5;
    VAR2->VAR13 = VAR6;
    return 0;
}