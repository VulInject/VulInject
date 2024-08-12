static int FUN1(VAR1 *VAR2)
{
    hwaddr VAR3 = VAR2->VAR4 & VAR5;
    static const uint8_t VAR6[] = {0xb8, 0x1, 0, 0, 0, 0xf, 0x1, 0xc1};
    static const uint8_t VAR7[] = {0xb8, 0x1, 0, 0, 0, 0x90, 0xe7, 0x7e};
    uint8_t VAR8[2];
    const VAR9 *VAR10;
    const VAR9 *VAR11;
    off_t VAR12;
    VAR9 *VAR13;
    VAR13 = FUN2(VAR2->VAR14);
    FUN3(VAR3, VAR13, VAR2->VAR14);
    for (VAR12 = 0; VAR12 < VAR2->VAR14 - sizeof(VAR6); VAR12++)
    {
        if (FUN4())
        {
            VAR10 = VAR7;
            VAR8[0] = VAR7[7];
            VAR8[1] = VAR7[7];
            VAR11 = &VAR6[5];
        }
        else
        {
            VAR10 = VAR6;
            VAR8[0] = VAR6[7];
            VAR8[1] = 0xd9;
            VAR11 = &VAR7[5];
        }
        if (memcmp(VAR13 + VAR12, VAR10, 7) == 0 && (VAR13[VAR12 + 7] == VAR8[0] || VAR13[VAR12 + 7] == VAR8[1]))
        {
            FUN5(VAR3 + VAR12 + 5, VAR11, 3);
        }
    }
    FUN6(VAR13);
    return 0;
}