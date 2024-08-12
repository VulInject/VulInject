static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4)
{
    int64_t VAR5, VAR6, VAR7;
    int64_t VAR8, VAR9, VAR10;
    int VAR11;
    VAR12 *VAR13;
    VAR4 = (VAR4 * 90000) / VAR14;
    FUN2("", VAR3, VAR4 / 90000.0);
    if (VAR3 < 0)
    {
        VAR3 = FUN3(VAR2);
        if (VAR3 < 0)
            return -1;
    }
    VAR9 = VAR8 = VAR15;
    VAR13 = VAR2->VAR16[VAR3];
    if (VAR13->VAR17)
    {
        VAR18 *VAR19;
        VAR11 = FUN4(VAR13, VAR4);
        VAR19 = &VAR13->VAR17[VAR11];
        if (VAR19->VAR4 <= VAR4)
        {
            VAR5 = VAR19->VAR7;
            VAR8 = VAR19->VAR4;
            FUN2("", VAR5, VAR8 / 90000.0);
        }
        else
        {
            assert(VAR11 == 0);
        }
        VAR11++;
        if (VAR11 < VAR13->VAR20)
        {
            VAR19 = &VAR13->VAR17[VAR11];
            assert(VAR19->VAR4 >= VAR4);
            VAR6 = VAR19->VAR7;
            VAR9 = VAR19->VAR4;
            FUN2("", VAR6, VAR9 / 90000.0);
        }
    }
    if (VAR8 == VAR15)
    {
        VAR5 = 0;
        VAR8 = FUN5(VAR2, VAR3, &VAR5, 1);
        if (VAR8 == VAR15)
        {
            return -1;
        }
    }
    if (VAR9 == VAR15)
    {
        VAR6 = FUN6(FUN7(&VAR2->VAR21)) - 1;
        VAR9 = FUN5(VAR2, VAR3, &VAR6, 0);
    }
    while (VAR5 <= VAR6)
    {
        FUN2("", VAR5, VAR6, VAR8 / 90000.0, VAR9 / 90000.0);
        if (VAR4 <= VAR8)
        {
            VAR7 = VAR5;
            goto VAR22;
        }
        else if (VAR4 >= VAR9)
        {
            VAR7 = VAR6;
            goto VAR22;
        }
        else
        {
            VAR7 = (VAR23)((double)(VAR6 - VAR5) * (double)(VAR4 - VAR8) / (double)(VAR9 - VAR8)) + VAR5;
        }
        FUN2("", VAR7);
        VAR10 = FUN5(VAR2, VAR3, &VAR7, 1);
        if (VAR10 == VAR15)
        {
            VAR7 = VAR5;
            goto VAR22;
        }
        else if (VAR4 == VAR10)
        {
            goto VAR22;
        }
        else if (VAR4 < VAR10)
        {
            VAR6 = VAR7;
            VAR9 = FUN5(VAR2, VAR3, &VAR6, 0);
            if (VAR9 == VAR15)
            {
                break;
            }
            else if (VAR4 >= VAR9)
            {
                VAR7 = VAR6;
                goto VAR22;
            }
        }
        else
        {
            VAR5 = VAR7 + 1;
            VAR8 = FUN5(VAR2, VAR3, &VAR5, 1);
            if (VAR8 == VAR15)
            {
                goto VAR22;
            }
            else if (VAR4 <= VAR8)
            {
                goto VAR22;
            }
        }
    }
    VAR7 = VAR5;
VAR22:
    VAR5 = VAR7;
    VAR8 = FUN5(VAR2, VAR3, &VAR5, 1);
    VAR5++;
    VAR9 = FUN5(VAR2, VAR3, &VAR5, 1);
    FUN2("", VAR7, VAR8 / 90000.0, VAR4 / 90000.0, VAR9 / 90000.0);
    FUN8(&VAR2->VAR21, VAR7, VAR24);
    return 0;
}