static void FUN1(target_phys_addr_t VAR1, int VAR2, int VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR7 = FUN2(NULL, "");
    FUN3(VAR7, "", VAR1);
    FUN4(VAR7, "", VAR2);
    FUN5(VAR7, "", VAR3);
    FUN5(VAR7, "", VAR4);
    FUN5(VAR7, "", VAR5);
    FUN6(VAR7);
    VAR9 = FUN7(VAR7);
    FUN8(VAR9, 0, VAR1 + 0x00800000ULL);
    FUN8(VAR9, 1, VAR1 + 0x00200000ULL);
    FUN8(VAR9, 2, VAR1 + 0x00700000ULL);
    FUN8(VAR9, 3, VAR1 + 0x00301000ULL);
    if (VAR5 == 24)
    {
        FUN8(VAR9, 4, VAR1 + 0x02000000ULL);
        FUN8(VAR9, 5, VAR1 + 0x0a000000ULL);
    }
    else
    {
        FUN8(VAR9, 4, VAR1 + 0x00300000ULL);
    }
}