static int FUN1(VAR1 *VAR2)
{
    static int VAR3 = 1;
    VAR4 *VAR5 = FUN2(VAR4, VAR6, VAR2);
    ram_addr_t VAR7 = FUN3(VAR5->VAR8.VAR9 * 2 - 1);
    VAR5->VAR10 = VAR3++;
    if (VAR7 < 16 * 1024 * 1024)
    {
        VAR7 = 16 * 1024 * 1024;
    }
    VAR5->VAR8.VAR9 = VAR7;
    VAR5->VAR8.VAR11 = FUN4(&VAR5->VAR6.VAR12, "", VAR5->VAR8.VAR9);
    VAR5->VAR8.VAR13 = FUN5(VAR5->VAR8.VAR11);
    return FUN6(VAR5);
}