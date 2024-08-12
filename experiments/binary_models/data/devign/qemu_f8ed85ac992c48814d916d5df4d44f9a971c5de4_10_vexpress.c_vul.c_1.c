static void FUN1(const VAR1 *VAR2, ram_addr_t VAR3, const char *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = FUN2();
    VAR7 *VAR9 = FUN3(VAR7, 1);
    VAR7 *VAR10 = FUN3(VAR7, 1);
    if (!VAR4)
    {
        VAR4 = "";
    }
    {
        uint64_t VAR11 = VAR3;
        if (VAR11 > (30ULL * 1024 * 1024 * 1024))
        {
            fprintf(VAR12, "");
            FUN4(1);
        }
    }
    FUN5(VAR9, NULL, "", VAR3);
    FUN6(VAR8, 0x80000000, VAR9);
    FUN7(VAR4, "", 0x2c000000, VAR6, VAR2->VAR13);
    FUN8(VAR10, NULL, "", 0x10000, &VAR14);
    FUN9(VAR10);
    FUN6(VAR8, 0x2e000000, VAR10);
}