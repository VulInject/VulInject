static int FUN1(VAR1 *VAR2, bool VAR3)
{
    VAR4 *VAR5 = VAR6;
    ram_addr_t VAR7 = VAR8;
    bool VAR9 = false;
    int VAR10 = 0;
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
                VAR18 = false;
            }
        }
        else
        {
            int VAR19;
            VAR20 *VAR21;
            int VAR22 = (VAR5 == VAR23) ? VAR24 : 0;
            VAR21 = FUN5(VAR12) + VAR7;
            VAR10 = -1;
            VAR19 = FUN6(VAR2, VAR5->VAR7, VAR7, VAR25, &VAR10);
            if (VAR19 != VAR26)
            {
                if (VAR19 != VAR27)
                {
                    if (VAR10 > 0)
                    {
                        VAR28.VAR29++;
                    }
                    else if (VAR10 == 0)
                    {
                        VAR28.VAR30++;
                    }
                }
            }
            else if (FUN7(VAR21, VAR25))
            {
                VAR28.VAR30++;
                VAR10 = FUN8(VAR2, VAR5, VAR7, VAR22, VAR31);
                FUN9(VAR2, 0);
                VAR10++;
            }
            else if (!VAR18 && FUN10())
            {
                VAR13 = VAR5->VAR7 + VAR7;
                VAR10 = FUN11(VAR2, VAR21, VAR13, VAR5, VAR7, VAR22, VAR3);
                if (!VAR3)
                {
                    VAR21 = FUN12(VAR32.VAR33, VAR13);
                }
            }
            if (VAR10 == -1)
            {
                VAR10 = FUN8(VAR2, VAR5, VAR7, VAR22, VAR34);
                FUN13(VAR2, VAR21, VAR25);
                VAR10 += VAR25;
                VAR28.VAR29++;
            }
            if (VAR10 > 0)
            {
                VAR23 = VAR5;
                break;
            }
        }
    }
    VAR6 = VAR5;
    VAR8 = VAR7;
    return VAR10;
}