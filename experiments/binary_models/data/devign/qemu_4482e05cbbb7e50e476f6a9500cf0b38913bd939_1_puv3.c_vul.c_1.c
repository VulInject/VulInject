static void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    if (VAR6)
    {
        FUN2("");
        FUN3(1);
    }
    if (!VAR4)
    {
        VAR4 = "";
    }
    VAR10 = FUN4(FUN5(VAR11, VAR4));
    if (!VAR10)
    {
        FUN2("");
        FUN3(1);
    }
    VAR8 = &VAR10->VAR8;
    FUN6(VAR8);
    FUN7(VAR8, VAR3);
    FUN8(VAR5);
}