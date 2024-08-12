void FUN1(void *VAR1, target_phys_addr_t VAR2, int VAR3, target_phys_addr_t VAR4)
{
    if (VAR1 != VAR5.VAR1)
    {
        if (VAR3)
        {
            ram_addr_t VAR6 = FUN2(VAR1);
            while (VAR4)
            {
                unsigned VAR7;
                VAR7 = VAR8;
                if (VAR7 > VAR4)
                    VAR7 = VAR4;
                if (!FUN3(VAR6))
                {
                    FUN4(VAR6, VAR6 + VAR7, 0);
                    FUN5(VAR6, (0xff & ~VAR9));
                }
                VAR6 += VAR7;
                VAR4 -= VAR7;
            }
        }
        return;
    }
    if (VAR3)
    {
        FUN6(VAR5.VAR10, VAR5.VAR1, VAR4);
    }
    FUN7(VAR5.VAR1);
    VAR5.VAR1 = NULL;
    FUN8();
}