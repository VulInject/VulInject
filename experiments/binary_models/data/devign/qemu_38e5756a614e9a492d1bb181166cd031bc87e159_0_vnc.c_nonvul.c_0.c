FUN1(VAR1 *VAR2, bool VAR3, bool VAR4, bool VAR5, VAR6 **VAR7)
{
    if (VAR3)
    {
        if (VAR2->VAR8)
        {
            VAR2->VAR9 = VAR10;
            if (FUN2(FUN3(VAR2->VAR8), VAR11))
            {
                FUN4("");
                VAR2->VAR12 = VAR13;
            }
            else if (FUN2(FUN3(VAR2->VAR8), VAR14))
            {
                FUN4("");
                VAR2->VAR12 = VAR15;
            }
            else
            {
                FUN5(VAR7, "", FUN6(FUN3(VAR2->VAR8)));
                return -1;
            }
        }
        else
        {
            FUN4("");
            VAR2->VAR9 = VAR16;
            VAR2->VAR12 = VAR17;
        }
        if (VAR5)
        {
            VAR2->VAR18 = VAR16;
        }
        else
        {
            VAR2->VAR18 = VAR17;
        }
    }
    else if (VAR4)
    {
        if (VAR2->VAR8)
        {
            VAR2->VAR9 = VAR10;
            if (FUN2(FUN3(VAR2->VAR8), VAR11))
            {
                FUN4("");
                VAR2->VAR12 = VAR19;
            }
            else if (FUN2(FUN3(VAR2->VAR8), VAR14))
            {
                FUN4("");
                VAR2->VAR12 = VAR20;
            }
            else
            {
                FUN5(VAR7, "", FUN6(FUN3(VAR2->VAR8)));
                return -1;
            }
        }
        else
        {
            FUN4("");
            VAR2->VAR9 = VAR21;
            VAR2->VAR12 = VAR17;
        }
        if (VAR5)
        {
            VAR2->VAR18 = VAR21;
        }
        else
        {
            VAR2->VAR18 = VAR17;
        }
    }
    else
    {
        if (VAR2->VAR8)
        {
            VAR2->VAR9 = VAR10;
            if (FUN2(FUN3(VAR2->VAR8), VAR11))
            {
                FUN4("");
                VAR2->VAR12 = VAR22;
            }
            else if (FUN2(FUN3(VAR2->VAR8), VAR14))
            {
                FUN4("");
                VAR2->VAR12 = VAR23;
            }
            else
            {
                FUN5(VAR7, "", FUN6(FUN3(VAR2->VAR8)));
                return -1;
            }
        }
        else
        {
            FUN4("");
            VAR2->VAR9 = VAR24;
            VAR2->VAR12 = VAR17;
        }
        if (VAR5)
        {
            VAR2->VAR18 = VAR24;
        }
        else
        {
            VAR2->VAR18 = VAR17;
        }
    }
    return 0;
}