int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5;
    if (VAR4 != 0 && VAR4 != 1)
    {
        FUN2();
    }
    if (VAR3 == VAR6)
    {
        if (VAR4 == VAR2->VAR7)
        {
            return FUN3(VAR2);
        }
        VAR2->VAR7 = VAR4;
        if (VAR2->VAR8 == 0)
        {
            return FUN3(VAR2);
        }
        if (VAR4 == 0)
        {
            FUN4("");
            VAR2->VAR9 = VAR10;
            VAR2->VAR11 = -1;
        }
        else
        {
            FUN5(VAR2);
        }
        return FUN6(VAR2, 1);
    }
    VAR5 = VAR2->VAR7;
    if (VAR2->VAR8 == VAR4)
    {
        return FUN3(VAR2);
    }
    VAR2->VAR8 = VAR4;
    if (VAR4 == 0)
    {
        return FUN6(VAR2, 1);
    }
    switch (VAR2->VAR9)
    {
    case VAR12:
    case VAR13:
        return FUN6(VAR2, 1);
    case VAR10 ... VAR14:
        VAR2->VAR15 = (VAR2->VAR15 << 1) | VAR5;
        VAR2->VAR9++;
        return FUN6(VAR2, 1);
    case VAR16:
    {
        int VAR17;
        if (VAR2->VAR11 < 0)
        {
            VAR2->VAR11 = VAR2->VAR15;
            FUN4("", VAR2->VAR11);
            VAR17 = FUN7(VAR2->VAR18, VAR2->VAR11 >> 1, VAR2->VAR11 & 1);
        }
        else
        {
            FUN4("", VAR2->VAR15);
            VAR17 = FUN8(VAR2->VAR18, VAR2->VAR15);
        }
        if (VAR17)
        {
            FUN4("");
            FUN5(VAR2);
            return FUN6(VAR2, 1);
        }
        if (VAR2->VAR11 & 1)
        {
            VAR2->VAR9 = VAR19;
        }
        else
        {
            VAR2->VAR9 = VAR10;
        }
        return FUN6(VAR2, 0);
    }
    case VAR19:
        VAR2->VAR15 = FUN9(VAR2->VAR18);
        FUN4("", VAR2->VAR15);
    case VAR20 ... VAR21:
        VAR5 = VAR2->VAR15 >> 7;
        VAR2->VAR9++;
        VAR2->VAR15 <<= 1;
        return FUN6(VAR2, VAR5);
    case VAR22:
        VAR2->VAR9 = VAR19;
        if (VAR5 != 0)
        {
            FUN4("");
            VAR2->VAR9 = VAR13;
            FUN10(VAR2->VAR18);
        }
        else
        {
            FUN4("");
        }
        return FUN6(VAR2, 1);
    }
    FUN2();
}