static int FUN1(VAR1 *VAR2)
{
    uint64_t VAR3 = 0;
    int VAR4 = 0x80, VAR5 = 1, VAR6 = 1, VAR7;
    if (FUN2(VAR2->VAR8) != VAR9)
        return 0;
    VAR3 = VAR2->VAR8[4];
    while (VAR5 <= 8 && !(VAR3 & VAR4))
    {
        VAR5++;
        VAR4 >>= 1;
    }
    if (VAR5 > 8)
        return 0;
    VAR3 &= (VAR4 - 1);
    while (VAR6 < VAR5)
        VAR3 = (VAR3 << 8) | VAR2->VAR8[4 + VAR6++];
    if (VAR2->VAR10 < 4 + VAR5 + VAR3)
        return 0;
    for (VAR7 = 0; VAR7 < FUN3(VAR11); VAR7++)
    {
        int VAR12 = strlen(VAR11[VAR7]);
        for (VAR6 = 4 + VAR5; VAR6 <= 4 + VAR5 + VAR3 - VAR12; VAR6++)
            if (!memcmp(VAR2->VAR8 + VAR6, VAR11[VAR7], VAR12))
                return VAR13;
    }
    return VAR13 / 2;