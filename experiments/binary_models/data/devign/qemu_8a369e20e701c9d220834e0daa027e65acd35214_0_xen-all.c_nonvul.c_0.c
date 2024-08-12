static void FUN1(ram_addr_t VAR1)
{
    VAR2 *VAR3;
    ram_addr_t VAR4, VAR5 = 0;
    VAR3 = FUN2(sizeof(*VAR3));
    FUN3(VAR3->VAR6, sizeof(VAR3->VAR6), "");
    VAR3->VAR7 = NULL;
    VAR3->VAR8 = 0;
    VAR3->VAR9 = VAR1;
    if (VAR1 >= VAR10)
    {
        VAR3->VAR9 += VAR11;
    }
    FUN4(&VAR12.VAR13, VAR3, VAR14);
    VAR12.VAR15 = FUN5(VAR12.VAR15, VAR3->VAR9 >> VAR16);
    memset(VAR12.VAR15 + (VAR3->VAR8 >> VAR16), 0xff, VAR3->VAR9 >> VAR16);
    if (VAR1 >= VAR10)
    {
        VAR5 = VAR1 - VAR10;
        VAR4 = VAR10;
    }
    else
    {
        VAR4 = VAR1;
    }
    FUN6(0, 0xa0000, 0);
    FUN6(0xc0000, VAR4 - 0xc0000, 0xc0000);
    if (VAR5 > 0)
    {
        FUN6(0x100000000ULL, VAR5, 0x100000000ULL);
    }
}