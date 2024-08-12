static VAR1 FUN1(VAR2 *VAR3)
{
    int VAR4 = -VAR5;
    VAR6 *VAR7 = VAR3->VAR8->VAR9;
    if (!VAR7->VAR10)
    {
        return -VAR11;
    }
    if (VAR3->VAR12 & VAR13)
    {
        do
        {
            uint64_t VAR14[2] = {VAR3->VAR15, VAR3->VAR16};
            if (FUN2(VAR3->VAR17, VAR18, VAR14) == 0)
            {
                return 0;
            }
        } while (VAR19 == VAR20);
        VAR4 = -VAR19;
    }
    else
    {
        if (VAR7->VAR21)
        {
            return FUN3(VAR7, VAR3->VAR15, VAR3->VAR16);
        }
        do
        {
            if (FUN4(VAR7->VAR22, VAR23 | VAR24, VAR3->VAR15, VAR3->VAR16) == 0)
            {
                return 0;
            }
        } while (VAR19 == VAR20);
        VAR4 = -VAR19;
    }
    if (VAR4 == -VAR25 || VAR4 == -VAR26 || VAR4 == -VAR5 || VAR4 == -VAR27)
    {
        VAR7->VAR10 = false;
        VAR4 = -VAR11;
    }
    return VAR4;
}