static void FUN1(ram_addr_t VAR1, const char *VAR2, VAR3 *VAR4)
{
    long VAR5;
    uint64_t VAR6;
    hwaddr VAR7;
    if (VAR2 && !FUN2())
    {
        VAR5 = FUN3(VAR2, NULL, NULL, &VAR6, NULL, NULL, 1, VAR8, 1);
        VAR7 = VAR6;
        if (VAR5 < 0)
        {
            VAR5 = FUN4(VAR2, &VAR7, NULL, NULL);
        }
        if (VAR5 < 0)
        {
            VAR5 = FUN5(VAR2, VAR9, VAR1 - VAR9);
            VAR7 = VAR9;
        }
        if (VAR5 < 0)
        {
            fprintf(VAR10, "", VAR2);
            FUN6(1);
        }
    }
    VAR4->VAR11.VAR12 = VAR7;
}