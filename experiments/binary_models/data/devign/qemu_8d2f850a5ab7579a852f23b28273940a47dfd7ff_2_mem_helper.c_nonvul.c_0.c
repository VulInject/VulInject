void FUN1(VAR1)(VAR2 *VAR3, uint32_t VAR4, uint32_t VAR5)
{
    uintptr_t VAR6 = FUN2();
    uint64_t VAR7, VAR8;
    uint32_t VAR9;
    uint8_t VAR10, VAR11 = VAR3->VAR12[0];
    if (VAR3->VAR12[0] & 0xffffff00u)
    {
        FUN3(VAR3, VAR13, 6, VAR6);
    }
    VAR8 = FUN4(VAR3, VAR5);
    VAR7 = FUN4(VAR3, VAR4);
    for (VAR9 = 0; VAR9 < 0x2000; ++VAR9)
    {
        if (VAR8 + VAR9 == VAR7)
        {
            VAR3->VAR14 = 2;
            return;
        }
        VAR10 = FUN5(VAR3, VAR8 + VAR9, VAR6);
        if (VAR10 == VAR11)
        {
            VAR3->VAR14 = 1;
            FUN6(VAR3, VAR4, VAR8 + VAR9);
            return;
        }
    }
    VAR3->VAR14 = 3;
    FUN6(VAR3, VAR5, VAR8 + VAR9);
}