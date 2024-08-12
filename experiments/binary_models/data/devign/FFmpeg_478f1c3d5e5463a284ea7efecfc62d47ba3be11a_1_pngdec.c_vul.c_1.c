static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10;
    if ((VAR5 % 3) != 0 || VAR5 > 256 * 3)
        return VAR11;
    VAR6 = VAR5 / 3;
    for (VAR7 = 0; VAR7 < VAR6; VAR7++)
    {
        VAR8 = FUN2(&VAR4->VAR12);
        VAR9 = FUN2(&VAR4->VAR12);
        VAR10 = FUN2(&VAR4->VAR12);
        VAR4->VAR13[VAR7] = (0xFFU << 24) | (VAR8 << 16) | (VAR9 << 8) | VAR10;
    }
    for (; VAR7 < 256; VAR7++)
        VAR4->VAR13[VAR7] = (0xFFU << 24);
    VAR4->VAR14 |= VAR15;
    FUN3(&VAR4->VAR12, 4);
    return 0;
}