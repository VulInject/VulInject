static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, target_ulong VAR6, int VAR7, int VAR8)
{
    int VAR9, VAR10;
    VAR11 *VAR12 = NULL;
    VAR9 = (VAR2->VAR13 & VAR14) == 0 || (VAR2->VAR15 & VAR16) == 0;
    if (VAR7 == 2)
    {
        VAR10 = FUN2(VAR2, VAR6, VAR9, 1);
        if (VAR10 >= 0)
        {
            VAR12 = &VAR2->VAR17[VAR10];
            if (!(VAR2->VAR15 & VAR16) && !(VAR12->VAR18 & 2))
                VAR10 = VAR19;
            else
                *VAR5 = VAR20;
        }
    }
    else
    {
        VAR10 = FUN3(VAR2, VAR6, VAR9);
        if (VAR10 >= 0)
        {
            VAR12 = &VAR2->VAR21[VAR10];
            switch ((VAR12->VAR18 << 1) | ((VAR2->VAR15 & VAR16) ? 1 : 0))
            {
            case 0:
            case 2:
                VAR10 = (VAR7 == 1) ? VAR22 : VAR23;
                break;
            case 1:
            case 4:
            case 5:
                if (VAR7 == 1)
                    VAR10 = VAR22;
                else
                    *VAR5 = VAR20;
                break;
            case 3:
            case 6:
            case 7:
                *VAR5 = (VAR7 == 1) ? VAR24 : VAR20;
                break;
            }
        }
        else if (VAR10 == VAR25)
        {
            VAR10 = (VAR7 == 1) ? VAR26 : VAR27;
        }
    }
    if (VAR10 >= 0)
    {
        *VAR4 = ((VAR12->VAR28 << 10) & ~(VAR12->VAR29 - 1)) | (VAR6 & (VAR12->VAR29 - 1));
        if ((VAR7 == 1) & !VAR12->VAR30)
            VAR10 = VAR31;
        else
            VAR10 = VAR32;
    }
    return VAR10;
}