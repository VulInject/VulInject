VAR1 *FUN1(VAR2 *VAR3, ram_addr_t VAR4, int *VAR5)
{
    VAR6 *VAR7;
    int VAR8;
    FUN2(VAR7, &VAR3->VAR3.VAR9, VAR10)
    {
        VAR1 *VAR11 = (VAR1 *)VAR7->VAR12;
        for (VAR8 = 0; VAR8 < VAR13; VAR8++)
        {
            if (!FUN3(VAR11->VAR14, VAR8))
                break;
            if (FUN3(VAR11->VAR14, VAR8) == VAR4)
            {
                if (VAR5)
                {
                    *VAR5 = VAR8;
                }
                return VAR11;
            }
        }
    }
    return NULL;
}