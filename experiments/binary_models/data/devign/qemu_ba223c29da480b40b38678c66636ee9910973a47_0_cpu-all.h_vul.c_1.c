void FUN1(void *VAR1, target_phys_addr_t VAR2, int VAR3, target_phys_addr_t VAR4)
{
    if (VAR1 != VAR5.VAR1)
    {
        if (VAR3)
        {
            unsigned long VAR6 = (VAR7 *)VAR1 - VAR8;
            while (VAR4)
            {
                unsigned VAR9;
                VAR9 = VAR10;
                if (VAR9 > VAR4)
                    VAR9 = VAR4;
                if (!FUN2(VAR6))
                {
                    FUN3(VAR6, VAR6 + VAR9, 0);
                    VAR11[VAR6 >> VAR12] |= (0xff & ~VAR13);
                }
                VAR6 += VAR9;
                VAR4 -= VAR9;
            }
        }
        return;
    }
    if (VAR3)
    {
        FUN4(VAR5.VAR14, VAR5.VAR1, VAR4);
    }
    FUN5(VAR5.VAR1);
    VAR5.VAR1 = NULL;