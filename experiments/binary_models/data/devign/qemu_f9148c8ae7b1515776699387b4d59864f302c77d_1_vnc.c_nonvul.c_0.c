FUN1(VAR1 *VAR2, bool VAR3, bool VAR4, bool VAR5, bool VAR6, bool VAR7)
{
    if (VAR3)
    {
        if (VAR5)
        {
            VAR2->VAR8 = VAR9;
            if (VAR7)
            {
                VAR2->VAR10 = true;
            }
            if (VAR6)
            {
                FUN2("");
                VAR2->VAR11 = VAR12;
            }
            else
            {
                FUN2("");
                VAR2->VAR11 = VAR13;
            }
        }
        else
        {
            FUN2("");
            VAR2->VAR8 = VAR14;
            VAR2->VAR11 = VAR15;
        }
        if (VAR7)
        {
            VAR2->VAR16 = VAR14;
        }
        else
        {
            VAR2->VAR16 = VAR15;
        }
    }
    else if (VAR4)
    {
        if (VAR5)
        {
            VAR2->VAR8 = VAR9;
            if (VAR7)
            {
                VAR2->VAR10 = true;
            }
            if (VAR6)
            {
                FUN2("");
                VAR2->VAR11 = VAR17;
            }
            else
            {
                FUN2("");
                VAR2->VAR11 = VAR18;
            }
        }
        else
        {
            FUN2("");
            VAR2->VAR8 = VAR19;
            VAR2->VAR11 = VAR15;
        }
        if (VAR7)
        {
            VAR2->VAR16 = VAR19;
        }
        else
        {
            VAR2->VAR16 = VAR15;
        }
    }
    else
    {
        if (VAR5)
        {
            VAR2->VAR8 = VAR9;
            if (VAR7)
            {
                VAR2->VAR10 = true;
            }
            if (VAR6)
            {
                FUN2("");
                VAR2->VAR11 = VAR20;
            }
            else
            {
                FUN2("");
                VAR2->VAR11 = VAR21;
            }
        }
        else
        {
            FUN2("");
            VAR2->VAR8 = VAR22;
            VAR2->VAR11 = VAR15;
        }
        if (VAR7)
        {
            VAR2->VAR16 = VAR22;
        }
        else
        {
            VAR2->VAR16 = VAR15;
        }
    }
}