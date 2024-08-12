static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9;
    VAR10 *VAR11 = VAR2->VAR11 + 256 - VAR2->VAR12;
    if (!VAR2->VAR12)
        return 0;
    VAR6 = FUN2(VAR4, VAR2->VAR12 + 1);
    for (VAR5 = 0; VAR5 < VAR6; VAR5++)
    {
        VAR7 = FUN3(VAR4, 8);
        VAR8 = FUN3(VAR4, 8);
        VAR9 = FUN3(VAR4, 8);
        *VAR11++ = (0xFF << 24) | (VAR7 << 16) | (VAR8 << 8) | VAR9;
    }
    return !!VAR6;
}