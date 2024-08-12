static int FUN1(VAR1 *VAR2, bool VAR3)
{
    VAR4 *VAR5 = VAR6;
    ram_addr_t VAR7 = VAR8;
    bool VAR9 = false;
    int VAR10 = -1;
    VAR11 *VAR12;
    ram_addr_t VAR13;
    if (!VAR5)
        VAR5 = FUN2(&VAR14.VAR15);
    while (true)
    {
        VAR12 = VAR5->VAR12;
        VAR7 = FUN3(VAR12, VAR7);
        if (VAR9 && VAR5 == VAR6 && VAR7 >= VAR8)
        {
            break;
        }
        if (VAR7 >= VAR5->VAR16)
        {
            VAR7 = 0;
            VAR5 = FUN4(VAR5, VAR17);
            if (!VAR5)
            {
                VAR5 = FUN2(&VAR14.VAR15);
                VAR9 = true;
            }
        }
        else
        {
            VAR18 *VAR19;
            int VAR20 = (VAR5 == VAR21) ? VAR22 : 0;
            VAR19 = FUN5(VAR12) + VAR7;
            if (FUN6(VAR19))
            {
                VAR23.VAR24++;
                FUN7(VAR2, VAR5, VAR7, VAR20, VAR25);
                FUN8(VAR2, *VAR19);
                VAR10 = 1;
            }
            else if (FUN9())
            {
                VAR13 = VAR5->VAR7 + VAR7;
                VAR10 = FUN10(VAR2, VAR19, VAR13, VAR5, VAR7, VAR20, VAR3);
                if (!VAR3)
                {
                    VAR19 = FUN11(VAR26.VAR27, VAR13);
                }
            }
            if (VAR10 == -1)
            {
                FUN7(VAR2, VAR5, VAR7, VAR20, VAR28);
                FUN12(VAR2, VAR19, VAR29);
                VAR10 = VAR29;
                VAR23.VAR30++;
            }
            if (VAR10 != 0)
            {
                VAR21 = VAR5;
                break;
            }
        }
    }
    VAR6 = VAR5;
    VAR8 = VAR7;
    return VAR10;
}