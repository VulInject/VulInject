void FUN1(VAR1 *VAR2, void *VAR3, hwaddr VAR4, int VAR5, hwaddr VAR6)
{
    if (VAR3 != VAR7.VAR3)
    {
        if (VAR5)
        {
            ram_addr_t VAR8 = FUN2(VAR3);
            while (VAR6)
            {
                unsigned VAR9;
                VAR9 = VAR10;
                if (VAR9 > VAR6)
                    VAR9 = VAR6;
                FUN3(VAR8, VAR9);
                VAR8 += VAR9;
                VAR6 -= VAR9;
            }
        }
        if (FUN4())
        {
            FUN5(VAR3);
        }
        return;
    }
    if (VAR5)
    {
        FUN6(VAR2, VAR7.VAR11, VAR7.VAR3, VAR6);
    }
    FUN7(VAR7.VAR3);
    VAR7.VAR3 = NULL;
    FUN8();
}