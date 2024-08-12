static int FUN1(const char *VAR1, bool VAR2, bool VAR3, int VAR4, int VAR5, bool VAR6, bool VAR7, bool VAR8, bool VAR9, VAR10 **VAR11, VAR12 **VAR13)
{
    int VAR14 = -1;
    VAR10 *VAR15 = NULL;
    VAR15 = FUN2(VAR10, 1);
    if (FUN3(VAR1, "", 5) == 0)
    {
        VAR15->VAR16 = VAR17;
        VAR15->VAR18.VAR19.VAR20 = FUN2(VAR21, 1);
        VAR15->VAR18.VAR19.VAR20->VAR22 = FUN4(VAR1 + 5);
        if (VAR2)
        {
            FUN5(VAR13, "");
            goto VAR23;
        }
        if (VAR5)
        {
            FUN5(VAR13, "");
            goto VAR23;
        }
        VAR14 = 0;
    }
    else
    {
        const char *VAR24;
        size_t VAR25;
        unsigned long long VAR26 = 0;
        VAR27 *VAR28;
        VAR24 = strrchr(VAR1, '');
        if (!VAR24)
        {
            if (VAR2)
            {
                VAR25 = 0;
                VAR24 = VAR1;
            }
            else
            {
                FUN5(VAR13, "");
                goto VAR23;
            }
        }
        else
        {
            VAR25 = VAR24 - VAR1;
            VAR24++;
            if (*VAR24 == '')
            {
                FUN5(VAR13, "");
                goto VAR23;
            }
        }
        VAR15->VAR16 = VAR29;
        VAR28 = VAR15->VAR18.VAR28.VAR20 = FUN2(VAR27, 1);
        if (VAR1[0] == '' && VAR1[VAR25 - 1] == '')
        {
            VAR28->VAR30 = FUN6(VAR1 + 1, VAR25 - 2);
        }
        else
        {
            VAR28->VAR30 = FUN6(VAR1, VAR25);
        }
        if (VAR2)
        {
            if (FUN7(VAR1, "") || FUN7(VAR1, ""))
            {
                if (VAR4 == -1)
                {
                    FUN5(VAR13, "");
                    goto VAR23;
                }
                VAR28->VAR24 = FUN8("", VAR4 + 5700);
                if (VAR5)
                {
                    VAR28->VAR31 = true;
                    VAR28->VAR5 = VAR5 + 5700;
                }
            }
            else
            {
                VAR28->VAR24 = FUN4(VAR24);
            }
        }
        else
        {
            int VAR32 = VAR3 ? 0 : 5900;
            if (FUN9(VAR24, &VAR26, 10) < 0)
            {
                FUN5(VAR13, "", VAR24);
                goto VAR23;
            }
            if (VAR26 > 65535 || VAR26 + VAR32 > 65535)
            {
                FUN5(VAR13, "", VAR24);
                goto VAR23;
            }
            VAR28->VAR24 = FUN8("", (int)VAR26 + VAR32);
            if (VAR5)
            {
                VAR28->VAR31 = true;
                VAR28->VAR5 = VAR5 + VAR32;
            }
        }
        VAR28->VAR8 = VAR8;
        VAR28->VAR6 = VAR6;
        VAR28->VAR9 = VAR9;
        VAR28->VAR7 = VAR7;
        VAR14 = VAR26;
    }
    *VAR11 = VAR15;
VAR23:
    if (VAR14 < 0)
    {
        FUN10(VAR15);
    }
    return VAR14;
}