static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    VAR5 = FUN2(VAR2->VAR6, VAR4, VAR7);
    if (VAR5 < 0)
        return VAR5;
    VAR4->VAR8 = 0;
    if (VAR5 > VAR9 && memcmp(&VAR4->VAR10[VAR5 - VAR9], "", 3) == 0)
        VAR5 -= VAR9;
    VAR4->VAR11 = VAR5;
    return VAR5;
}