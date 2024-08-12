void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5, VAR6, VAR7;
    uint16_t VAR8;
    if (VAR3 < 14 + 20)
    {
        return;
    }
    if ((VAR2[14] & 0xf0) != 0x40)
        return;
    VAR4 = (VAR2[14] & 0x0f) * 4;
    VAR5 = (VAR2[16] << 8 | VAR2[17]) - VAR4;
    VAR6 = VAR2[23];
    switch (VAR6)
    {
    case VAR9:
        VAR7 = 16;
        break;
    case VAR10:
        VAR7 = 6;
        break;
    default:
        return;
    }
    if (VAR5 < VAR7 + 2 || 14 + VAR4 + VAR5 > VAR3)
    {
        return;
    }
    VAR2[14 + VAR4 + VAR7] = 0;
    VAR2[14 + VAR4 + VAR7 + 1] = 0;
    VAR8 = FUN2(VAR5, VAR6, VAR2 + 14 + 12, VAR2 + 14 + VAR4);
    VAR2[14 + VAR4 + VAR7] = VAR8 >> 8;
    VAR2[14 + VAR4 + VAR7 + 1] = VAR8 & 0xff;
}