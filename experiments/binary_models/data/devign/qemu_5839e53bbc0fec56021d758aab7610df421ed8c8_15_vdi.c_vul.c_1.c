static int FUN1(VAR1 *VAR2, VAR3 *VAR4, BdrvCheckMode VAR5)
{
    VAR6 *VAR7 = (VAR6 *)VAR2->VAR8;
    uint32_t VAR9 = 0;
    uint32_t VAR10;
    VAR11 *VAR12;
    FUN2("");
    if (VAR5)
    {
        return -VAR13;
    }
    VAR12 = FUN3(VAR7->VAR14.VAR15 * sizeof(VAR11));
    if (VAR7->VAR14.VAR15 && VAR12 == NULL)
    {
        VAR4->VAR16++;
        return -VAR17;
    }
    memset(VAR12, 0xff, VAR7->VAR14.VAR15 * sizeof(VAR11));
    for (VAR10 = 0; VAR10 < VAR7->VAR14.VAR15; VAR10++)
    {
        uint32_t VAR18 = FUN4(VAR7->VAR12[VAR10]);
        if (FUN5(VAR18))
        {
            if (VAR18 < VAR7->VAR14.VAR15)
            {
                VAR9++;
                if (!FUN5(VAR12[VAR18]))
                {
                    VAR12[VAR18] = VAR18;
                }
                else
                {
                    fprintf(VAR19, "" VAR20 "" VAR20 "", VAR12[VAR18], VAR18);
                    VAR4->VAR21++;
                }
            }
            else
            {
                fprintf(VAR19, "" VAR20 "" VAR20 "", VAR10, VAR18);
                VAR4->VAR21++;
            }
        }
    }
    if (VAR9 != VAR7->VAR14.VAR9)
    {
        fprintf(VAR19, "" VAR20 "" VAR20 "", VAR9, VAR7->VAR14.VAR9);
        VAR4->VAR21++;
    }
    FUN6(VAR12);
    return 0;
}