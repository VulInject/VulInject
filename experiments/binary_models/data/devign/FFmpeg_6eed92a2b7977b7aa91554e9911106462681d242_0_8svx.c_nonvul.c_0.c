static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int8_t VAR6, const VAR1 *VAR7)
{
    int VAR8 = VAR5;
    VAR1 *VAR9 = VAR2;
    while (VAR8--)
    {
        uint8_t VAR10 = *VAR4++;
        VAR6 = FUN2(VAR6 + VAR7[VAR10 & 0x0f], -128, 127);
        *VAR2++ = VAR6;
        VAR6 = FUN2(VAR6 + VAR7[VAR10 >> 4], -128, 127);
        *VAR2++ = VAR6;
    }
    return VAR2 - VAR9;
}