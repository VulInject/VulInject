int FUN1(const VAR1 *VAR2, bool VAR3, int *VAR4)
{
    int VAR5 = FUN2(VAR2);
    int VAR6 = 0;
    if (VAR2->VAR7 == VAR8 && VAR2->VAR9.VAR10.VAR11 == VAR12)
    {
        int VAR13 = VAR3 ? 0 : 0x80;
        VAR4[VAR6++] = 0xe1;
        VAR4[VAR6++] = 0x1d | VAR13;
        VAR4[VAR6++] = 0x45 | VAR13;
        return VAR6;
    }
    if (VAR5 & VAR14)
    {
        VAR4[VAR6++] = VAR15;
        VAR5 &= ~VAR14;
    }
    if (!VAR3)
    {
        VAR5 |= VAR16;
    }
    VAR4[VAR6++] = VAR5;
    return VAR6;
}