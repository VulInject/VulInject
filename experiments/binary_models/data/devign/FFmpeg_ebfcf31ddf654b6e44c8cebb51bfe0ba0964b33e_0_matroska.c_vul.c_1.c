FUN1(VAR1 *VAR2)
{
    uint64_t VAR3 = 0;
    int VAR4 = 0x80, VAR5 = 1, VAR6 = 1;
    uint8_t VAR7[] = {'', '', '', '', '', '', '', ''};
    if (VAR2->VAR8 < 5)
        return 0;
    if ((VAR2->VAR9[0] << 24 | VAR2->VAR9[1] << 16 | VAR2->VAR9[2] << 8 | VAR2->VAR9[3]) != VAR10)
        return 0;
    VAR3 = VAR2->VAR9[4];
    while (VAR5 <= 8 && !(VAR3 & VAR4))
    {
        VAR5++;
        VAR4 >>= 1;
    }
    if (VAR5 > 8)
        return 0;
    VAR3 &= (VAR4 - 1);
    while (VAR6 < VAR5)
        VAR3 = (VAR3 << 8) | VAR2->VAR9[4 + VAR6++];
    if (VAR2->VAR8 < 4 + VAR5 + VAR3)
        return 0;
    for (VAR6 = 4 + VAR5; VAR6 < 4 + VAR5 + VAR3 - sizeof(VAR7); VAR6++)
        if (!memcmp(&VAR2->VAR9[VAR6], VAR7, sizeof(VAR7)))
            return VAR11;
    return 0;
}