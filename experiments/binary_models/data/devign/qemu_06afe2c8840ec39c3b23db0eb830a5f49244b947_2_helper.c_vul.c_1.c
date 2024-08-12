static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, target_ulong VAR6, int VAR7, int VAR8)
{
    int VAR9, VAR10, VAR11;
    VAR12 *VAR13 = NULL;
    VAR9 = (VAR2->VAR14 & VAR15) == 0 && (VAR2->VAR16 & VAR17) == 0;
    VAR10 = VAR2->VAR18 == VAR6;
    if (VAR2->VAR18 == VAR6 && !(VAR7 & VAR19))
    {
        VAR11 = FUN2(VAR2, VAR6, VAR9, 1);
        if (VAR11 >= 0)
        {
            VAR13 = &VAR2->VAR20[VAR11];
            if ((VAR2->VAR16 & VAR17) & !(VAR13->VAR21 & 2))
                VAR11 = VAR22;
            else
                *VAR5 = VAR23;
        }
    }
    else
    {
        VAR11 = FUN3(VAR2, VAR6, VAR9);
        if (VAR11 >= 0)
        {
            VAR13 = &VAR2->VAR24[VAR11];
            switch ((VAR13->VAR21 << 1) | ((VAR2->VAR16 & VAR17) ? 1 : 0))
            {
            case 0:
            case 2:
                VAR11 = (VAR7 & VAR19) ? VAR25 : VAR26;
                break;
            case 1:
            case 4:
            case 5:
                if (VAR7 & VAR19)
                    VAR11 = VAR25;
                else
                    *VAR5 = VAR23;
                break;
            case 3:
            case 6:
            case 7:
                *VAR5 = VAR7 & (VAR23 | VAR19);
                break;
            }
        }
        else if (VAR11 == VAR27)
        {
            VAR11 = (VAR7 & VAR19) ? VAR28 : VAR29;
        }
    }
    if (VAR11 >= 0)
    {
        *VAR4 = ((VAR13->VAR30 << 10) & ~(VAR13->VAR31 - 1)) | (VAR6 & (VAR13->VAR31 - 1));
        if ((VAR7 & VAR19) & !VAR13->VAR32)
            VAR11 = VAR33;
        else
            VAR11 = VAR34;
    }
    return VAR11;
}