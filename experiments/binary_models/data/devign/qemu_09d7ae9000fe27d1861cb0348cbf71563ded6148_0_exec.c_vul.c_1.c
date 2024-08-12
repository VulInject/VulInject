static VAR1 FUN1(ram_addr_t VAR2)
{
    VAR3 *VAR4, *VAR5;
    ram_addr_t VAR6, VAR7 = VAR8;
    if (FUN2(&VAR9.VAR10))
        return 0;
    FUN3(VAR4, &VAR9.VAR10, VAR11)
    {
        ram_addr_t VAR12, VAR11 = VAR8;
        VAR12 = VAR4->VAR6 + VAR4->VAR13;
        FUN3(VAR5, &VAR9.VAR10, VAR11)
        {
            if (VAR5->VAR6 >= VAR12)
            {
                VAR11 = FUN4(VAR11, VAR5->VAR6);
            }
        }
        if (VAR11 - VAR12 >= VAR2 && VAR11 - VAR12 < VAR7)
        {
            VAR6 = VAR12;
            VAR7 = VAR11 - VAR12;
        }
    }
    return VAR6;
}