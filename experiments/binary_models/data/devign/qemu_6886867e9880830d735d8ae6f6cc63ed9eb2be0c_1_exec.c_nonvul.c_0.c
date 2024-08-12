void FUN1(VAR1 *VAR2, void *VAR3, hwaddr VAR4, int VAR5, hwaddr VAR6)
{
    if (VAR3 != VAR7.VAR3)
    {
        VAR8 *VAR9;
        ram_addr_t VAR10;
        VAR9 = FUN2(VAR3, &VAR10);
        assert(VAR9 != NULL);
        if (VAR5)
        {
            FUN3(VAR10, VAR6);
        }
        if (FUN4())
        {
            FUN5(VAR3);
        }
        FUN6(VAR9);
        return;
    }
    if (VAR5)
    {
        FUN7(VAR2, VAR7.VAR11, VAR7.VAR3, VAR6);
    }
    FUN8(VAR7.VAR3);
    VAR7.VAR3 = NULL;
    FUN6(VAR7.VAR9);
    FUN9();
}