static void FUN1(VAR1 *VAR2, ram_addr_t VAR3, VAR4 **VAR5)
{
    VAR4 *VAR6 = FUN2();
    ram_addr_t VAR7;
    uint64_t VAR8 = FUN3(FUN4(), VAR9, &VAR10);
    if (VAR11 <= VAR8)
    {
        VAR8 = VAR11;
    }
    if (VAR3 >= VAR8)
    {
        VAR2->VAR12 = VAR3 - VAR8;
        VAR2->VAR13 = VAR8;
    }
    else
    {
        VAR2->VAR12 = 0;
        VAR2->VAR13 = VAR3;
    }
    if (!VAR2->VAR12)
    {
        VAR7 = VAR3;
    }
    else
    {
        VAR7 = (1ULL << 32) + VAR2->VAR12;
    }
    FUN5(&VAR14, NULL, "", VAR7, &VAR10);
    *VAR5 = &VAR14;
    FUN6(&VAR14);
    FUN7(&VAR15, NULL, "", &VAR14, 0, 0xa0000);
    FUN8(VAR6, 0, &VAR15);
    FUN7(&VAR16, NULL, "", &VAR14, 0xc0000, VAR2->VAR13 - 0xc0000);
    FUN8(VAR6, 0xc0000, &VAR16);
    if (VAR2->VAR12 > 0)
    {
        FUN7(&VAR17, NULL, "", &VAR14, 0x100000000ULL, VAR2->VAR12);
        FUN8(VAR6, 0x100000000ULL, &VAR17);
    }
}