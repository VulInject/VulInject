static void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5;
    if (VAR2->VAR6)
    {
        VAR5 = VAR3 + VAR4;
        VAR3 = VAR3 >> 9;
        VAR5 = (VAR5 + 511) >> 9;
        FUN2(VAR2->VAR6, VAR3, VAR2->VAR7 + (VAR3 << 9), VAR5 - VAR3);
    }
}