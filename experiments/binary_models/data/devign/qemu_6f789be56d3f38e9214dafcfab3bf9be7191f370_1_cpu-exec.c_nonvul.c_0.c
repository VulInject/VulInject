static VAR1 *FUN1(VAR2 *VAR3, target_ulong VAR4, target_ulong VAR5, uint32_t VAR6)
{
    VAR7 *VAR8 = (VAR7 *)VAR3->VAR9;
    VAR1 *VAR10, **VAR11, **VAR12;
    unsigned int VAR13;
    tb_page_addr_t VAR14, VAR15;
    VAR14 = FUN2(VAR8, VAR4);
    VAR15 = VAR14 & VAR16;
    VAR13 = FUN3(VAR14);
    VAR12 = VAR11 = &VAR17.VAR18.VAR19[VAR13];
    VAR10 = *VAR12;
    while (VAR10)
    {
        if (VAR10->VAR4 == VAR4 && VAR10->VAR20[0] == VAR15 && VAR10->VAR5 == VAR5 && VAR10->VAR6 == VAR6)
        {
            if (VAR10->VAR20[1] == -1)
            {
                break;
            }
            else
            {
                target_ulong VAR21 = (VAR4 & VAR16) + VAR22;
                tb_page_addr_t VAR23 = FUN2(VAR8, VAR21);
                if (VAR10->VAR20[1] == VAR23)
                {
                    break;
                }
            }
        }
        VAR12 = &VAR10->VAR24;
        VAR10 = *VAR12;
    }
    if (VAR10)
    {
        *VAR12 = VAR10->VAR24;
        VAR10->VAR24 = *VAR11;
        *VAR11 = VAR10;
    }
    return VAR10;
}