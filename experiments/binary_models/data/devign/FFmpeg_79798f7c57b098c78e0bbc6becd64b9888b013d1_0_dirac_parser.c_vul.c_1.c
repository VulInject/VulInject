static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR4->VAR8 + VAR5;
    VAR6 *VAR9 = VAR4->VAR8 + VAR4->VAR10;
    if (VAR7 < VAR4->VAR8 || (VAR7 + 13 > VAR9))
        return 0;
    VAR2->VAR11 = VAR7[4];
    VAR2->VAR12 = FUN2(VAR7 + 5);
    VAR2->VAR13 = FUN2(VAR7 + 9);
    if (VAR2->VAR11 == 0x10 && VAR2->VAR12 == 0)
        VAR2->VAR12 = 13;
    return 1;
}