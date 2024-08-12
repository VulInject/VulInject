static int FUN1(const char *VAR1, bool VAR2, bool VAR3, int VAR4, int VAR5, bool VAR6, bool VAR7, bool VAR8, bool VAR9, VAR10 **VAR11, VAR12 **VAR13)
{
    int VAR14 = -1;
    VAR10 *VAR15 = NULL;
    VAR15 = FUN2(VAR10, 1);
    if (FUN3(VAR1, "", 5) == 0)
    {
        VAR15->VAR16 = VAR17;
        VAR15->VAR18.VAR19.VAR20 = FUN4(VAR1 + 5);
        if (VAR2)
        {
            FUN5(VAR13, "");
            goto VAR21;
        }
        if (VAR5)
        {
            FUN5(VAR13, "");
            goto VAR21;
        }
        VAR14 = 0;
    }
    else
    {
        const char *VAR22;
        size_t VAR23;
        unsigned long long VAR24 = 0;
        VAR25 *VAR26;
        VAR22 = strrchr(VAR1, '');
        if (!VAR22)
        {
            if (VAR2)
            {
                VAR23 = 0;
                VAR22 = VAR1;
            }
            else
            {
                FUN5(VAR13, "");
                goto VAR21;
            }
        }
        else
        {
            VAR23 = VAR22 - VAR1;
            VAR22++;
            if (*VAR22 == '')
            {
                FUN5(VAR13, "");
                goto VAR21;
            }
        }
        VAR15->VAR16 = VAR27;
        VAR26 = &VAR15->VAR18.VAR26;
        if (VAR1[0] == '' && VAR1[VAR23 - 1] == '')
        {
            VAR26->VAR28 = FUN6(VAR1 + 1, VAR23 - 2);
        }
        else
        {
            VAR26->VAR28 = FUN6(VAR1, VAR23);
        }
        if (VAR2)
        {
            if (FUN7(VAR1, "") || FUN7(VAR1, ""))
            {
                if (VAR4 == -1)
                {
                    FUN5(VAR13, "");
                    goto VAR21;
                }
                VAR26->VAR22 = FUN8("", VAR4 + 5700);
                if (VAR5)
                {
                    VAR26->VAR29 = true;
                    VAR26->VAR5 = VAR5 + 5700;
                }
            }
            else
            {
                VAR26->VAR22 = FUN4(VAR22);
            }
        }
        else
        {
            int VAR30 = VAR3 ? 0 : 5900;
            if (FUN9(VAR22, &VAR24, 10) < 0)
            {
                FUN5(VAR13, "", VAR22);
                goto VAR21;
            }
            if (VAR24 > 65535 || VAR24 + VAR30 > 65535)
            {
                FUN5(VAR13, "", VAR22);
                goto VAR21;
            }
            VAR26->VAR22 = FUN8("", (int)VAR24 + VAR30);
            if (VAR5)
            {
                VAR26->VAR29 = true;
                VAR26->VAR5 = VAR5 + VAR30;
            }
        }
        VAR26->VAR8 = VAR8;
        VAR26->VAR6 = VAR6;
        VAR26->VAR9 = VAR9;
        VAR26->VAR7 = VAR7;
        VAR14 = VAR24;
    }
    *VAR11 = VAR15;
VAR21:
    if (VAR14 < 0)
    {
        FUN10(VAR15);
    }
    return VAR14;
}