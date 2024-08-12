static int FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int VAR4, VAR5, VAR6;
    if (VAR3->VAR7 & VAR8)
        return 0;
    VAR5 = VAR3->VAR9 << 8;
    VAR6 = VAR3->VAR6 << 8;
    if (VAR5 < VAR6)
        VAR4 = VAR6 - VAR5;
    else
        VAR4 = (VAR3->VAR10 - VAR3->VAR11) - (VAR5 - VAR6);
    if (VAR4 < (VAR12 + 4))
        return 0;
    return VAR12;
}