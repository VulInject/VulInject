static VAR1 *FUN1(target_phys_addr_t VAR2, int VAR3)
{
    VAR4 *VAR5, *VAR6;
    int VAR7, VAR8;
    VAR5 = &VAR9;
    for (VAR7 = VAR10 - 1; VAR7 >= 0; VAR7--)
    {
        if (VAR5->VAR11.VAR12 == VAR13)
        {
            if (!VAR3)
            {
                return NULL;
            }
            VAR6 = FUN2(&VAR5->VAR11.VAR12);
            if (VAR7 == 0)
            {
                for (VAR8 = 0; VAR8 < VAR14; VAR8++)
                {
                    VAR6[VAR8].VAR11.VAR15 = VAR16;
                }
            }
        }
        else
        {
            VAR6 = VAR17[VAR5->VAR11.VAR12];
        }
        VAR5 = &VAR6[(VAR2 >> (VAR7 * VAR18)) & (VAR14 - 1)];
    }
    return &VAR5->VAR11.VAR15;
}