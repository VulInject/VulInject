static void FUN1(const VAR1 *VAR2, const VAR1 *VAR3, VAR4 *VAR5, int VAR6)
{
    const VAR1 *VAR7 = VAR8 + VAR9;
    uint8_t VAR10, VAR11, VAR12;
    int VAR13, VAR14, VAR15, VAR16;
    int VAR17, VAR18, VAR19;
    for (VAR13 = VAR6; VAR13 > 0; VAR13--)
    {
        VAR14 = *VAR2++;
        VAR16 = *VAR2++;
        VAR15 = *VAR2++;
        FUN2(VAR15, VAR16);
        FUN3(VAR10, VAR11, VAR12, VAR14);
        *VAR5++ = (*VAR3++ << 24) | (VAR10 << 16) | (VAR11 << 8) | VAR12;
    }
}