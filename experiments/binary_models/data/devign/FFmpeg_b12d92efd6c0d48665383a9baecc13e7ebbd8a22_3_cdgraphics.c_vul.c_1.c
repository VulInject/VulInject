static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    uint8_t VAR6, VAR7, VAR8;
    uint16_t VAR9;
    int VAR10;
    int VAR11 = VAR5 ? 0 : 8;
    VAR12 *VAR13 = (VAR12 *)VAR2->VAR14.VAR4[1];
    for (VAR10 = 0; VAR10 < 8; VAR10++)
    {
        VAR9 = (VAR4[2 * VAR10] << 6) + (VAR4[2 * VAR10 + 1] & 0x3F);
        VAR6 = ((VAR9 >> 8) & 0x000F) * 17;
        VAR7 = ((VAR9 >> 4) & 0x000F) * 17;
        VAR8 = ((VAR9)&0x000F) * 17;
        VAR13[VAR10 + VAR11] = 0xFF << 24 | VAR6 << 16 | VAR7 << 8 | VAR8;
    }
    VAR2->VAR14.VAR15 = 1;
}