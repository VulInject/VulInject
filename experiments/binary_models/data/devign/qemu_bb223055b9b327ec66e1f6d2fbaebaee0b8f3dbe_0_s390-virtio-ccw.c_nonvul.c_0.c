static void FUN1(ram_addr_t VAR1)
{
    VAR2 *VAR3 = FUN2();
    ram_addr_t VAR4, VAR5 = 0;
    unsigned int VAR6 = 0;
    VAR7 *VAR8;
    VAR8 = FUN3("");
    while (VAR1)
    {
        VAR2 *VAR9 = FUN4(VAR2, 1);
        uint64_t VAR10 = VAR1;
        VAR4 = FUN5(VAR10, VAR11);
        FUN6(VAR9, NULL, VAR8, VAR4);
        FUN7(VAR3, VAR5, VAR9);
        VAR1 -= VAR4;
        VAR5 += VAR4;
        FUN8(VAR8);
        VAR8 = FUN3("", ++VAR6);
    }
    FUN8(VAR8);
    FUN9();
    FUN10();
}