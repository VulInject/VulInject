int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    bool VAR5 = false;
    VAR6 *VAR7;
    VAR8 *VAR9 = FUN2(VAR10);
    VAR5 = VAR10 && (VAR9->VAR11.VAR12 & VAR13);
    if (VAR5)
    {
        VAR2->VAR14 = VAR15;
    }
    else
    {
        VAR2->VAR14 = VAR16;
    }
    VAR2->VAR17 = VAR18;
    if (VAR5)
    {
        VAR2->VAR19 = VAR20;
    }
    else
    {
        VAR2->VAR19 = VAR21;
        FUN3(VAR7, &VAR4->VAR22, VAR23)
        {
            if (VAR7->VAR24 > VAR25)
            {
                VAR2->VAR19 = VAR20;
                break;
            }
        }
    }
    return 0;
}