int FUN1(int VAR1, void *VAR2, int VAR3, int VAR4)
{
    struct VAR5 *VAR6 = &VAR7[VAR1 > 3].VAR8[VAR1 & 3];
    hwaddr VAR9 = ((VAR6->VAR10 & 0x7f) << 24) | (VAR6->VAR11 << 16) | VAR6->VAR12[VAR13];
    if (VAR6->VAR14 & 0x20)
    {
        int VAR15;
        VAR16 *VAR17 = VAR2;
        FUN2(VAR9 - VAR3 - VAR4, VAR2, VAR4);
        for (VAR15 = 0; VAR15 < VAR4 >> 1; VAR15++)
        {
            uint8_t VAR18 = VAR17[VAR4 - VAR15 - 1];
            VAR17[VAR15] = VAR18;
        }
    }
    else
        FUN2(VAR9 + VAR3, VAR2, VAR4);
    return VAR4;
}