static void FUN1(const char *VAR1)
{
    char *VAR2;
    uint8_t VAR3;
    uint8_t VAR4;
    uint16_t VAR5;
    int VAR6;
    uint32_t VAR7;
    VAR2 = FUN2("", VAR1 ? VAR1 : "", VAR8);
    FUN3(VAR2);
    for (VAR6 = 0; VAR6 < VAR9; ++VAR6)
    {
        VAR3 = FUN4(VAR10 + VAR11);
        VAR4 = FUN4(VAR10 + VAR11 + 1);
        VAR5 = (VAR4 << 8) | VAR3;
        if (VAR5 == VAR12)
        {
            break;
        }
        FUN5(VAR13);
    }
    FUN6(VAR5, ==, VAR12);
    for (VAR7 = 0xf0000; VAR7 < 0x100000; VAR7 += 0x10)
    {
        uint8_t VAR14[] = "";
        int VAR6;
        for (VAR6 = 0; VAR6 < sizeof VAR14 - 1; ++VAR6)
        {
            VAR14[VAR6] = FUN4(VAR7 + VAR6);
        }
        if (!memcmp(VAR14, "", sizeof VAR14))
        {
            break;
        }
    }
    FUN6(VAR7, <, 0x100000);
    FUN7(VAR15);
    FUN8(VAR2);
}