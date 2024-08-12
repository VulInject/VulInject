VAR1 FUN1(VAR2)(VAR3 *VAR4, uint32_t VAR5, uint64_t VAR6, uint32_t VAR7)
{
    uintptr_t VAR8 = FUN2();
    uint64_t VAR9 = FUN3(VAR4, VAR5 + 1);
    uint64_t VAR10 = FUN4(VAR4, VAR5);
    uint64_t VAR11 = FUN3(VAR4, VAR7 + 1);
    uint64_t VAR12 = FUN4(VAR4, VAR7);
    uint8_t VAR13 = VAR6 & 0xff;
    uint64_t VAR14 = FUN5(VAR9, VAR11);
    uint32_t VAR15 = 0;
    if (!VAR14)
    {
        return VAR15;
    }
    if (VAR14 > 0x2000)
    {
        VAR14 = 0x2000;
        VAR15 = 3;
    }
    for (; VAR14; VAR14--)
    {
        uint8_t VAR16 = VAR13;
        uint8_t VAR17 = VAR13;
        if (VAR9)
        {
            VAR16 = FUN6(VAR4, VAR10, VAR8);
        }
        if (VAR11)
        {
            VAR17 = FUN6(VAR4, VAR12, VAR8);
        }
        if (VAR16 != VAR17)
        {
            VAR15 = (VAR16 < VAR17) ? 1 : 2;
            break;
        }
        if (VAR9)
        {
            VAR10++;
            VAR9--;
        }
        if (VAR11)
        {
            VAR12++;
            VAR11--;
        }
    }
    FUN7(VAR4, VAR5 + 1, VAR9);
    FUN7(VAR4, VAR7 + 1, VAR11);
    FUN8(VAR4, VAR5, VAR10);
    FUN8(VAR4, VAR7, VAR12);
    return VAR15;
}