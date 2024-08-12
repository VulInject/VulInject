static int FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned VAR5, unsigned VAR6, unsigned VAR7)
{
    int VAR8;
    if (VAR7 == 0)
        return VAR9;
    VAR8 = VAR4->VAR10 * (VAR11)VAR5 / VAR7;
    VAR4->VAR12 += VAR8 + 1;
    VAR4->VAR10 = VAR4->VAR10 * (VAR11)(VAR6 + VAR5) / VAR7 - (VAR8 + 1);
    while (VAR4->VAR10 < VAR13 && FUN2(VAR2) > 0)
    {
        unsigned VAR14 = FUN3(VAR2);
        VAR4->VAR15 = (VAR4->VAR15 << 8) | VAR14;
        VAR4->VAR12 <<= 8;
        VAR4->VAR10 <<= 8;
    }
    return 0;
}