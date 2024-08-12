void FUN1(VAR1)(VAR2 *VAR3, uint32_t VAR4, uint32_t VAR5)
{
    uintptr_t VAR6 = FUN2();
    uint32_t VAR7;
    uint16_t VAR8, VAR9 = VAR3->VAR10[0];
    uint64_t VAR11, VAR12, VAR13;
    if (VAR3->VAR10[0] & 0xffff0000u)
    {
        FUN3(VAR3, VAR14, 6, VAR6);
    }
    VAR12 = FUN4(VAR3, VAR5);
    VAR11 = FUN4(VAR3, VAR4);
    VAR13 = VAR11 + ((VAR12 ^ VAR11) & 1);
    for (VAR7 = 0; VAR7 < 0x2000; VAR7 += 2)
    {
        if (VAR12 + VAR7 == VAR13)
        {
            VAR3->VAR15 = 2;
            return;
        }
        VAR8 = FUN5(VAR3, VAR12 + VAR7, VAR6);
        if (VAR8 == VAR9)
        {
            VAR3->VAR15 = 1;
            FUN6(VAR3, VAR4, VAR12 + VAR7);
            return;
        }
    }
    VAR3->VAR15 = 3;
    FUN6(VAR3, VAR5, VAR12 + VAR7);
}