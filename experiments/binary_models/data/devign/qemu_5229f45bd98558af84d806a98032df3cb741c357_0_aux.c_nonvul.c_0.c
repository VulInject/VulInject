VAR1 FUN1(VAR2 *VAR3, AUXCommand VAR4, uint32_t VAR5, uint8_t VAR6, VAR7 *VAR8)
{
    AUXReply VAR9 = VAR10;
    VAR11 *VAR12 = FUN2(VAR3);
    size_t VAR13;
    bool VAR14 = false;
    FUN3("" VAR15 "", VAR5, VAR4, VAR6);
    switch (VAR4)
    {
    case VAR16:
    case VAR17:
        VAR14 = VAR4 == VAR17 ? false : true;
        for (VAR13 = 0; VAR13 < VAR6; VAR13++)
        {
            if (!FUN4(&VAR3->VAR18, VAR5++, VAR19, VAR8++, 1, VAR14))
            {
                VAR9 = VAR20;
            }
            else
            {
                VAR9 = VAR10;
                break;
            }
        }
        break;
    case VAR21:
    case VAR22:
        VAR14 = VAR4 == VAR21 ? false : true;
        if (FUN5(VAR12))
        {
            FUN6(VAR12);
        }
        if (FUN7(VAR12, VAR5, VAR14))
        {
            VAR9 = VAR23;
            break;
        }
        VAR9 = VAR20;
        while (VAR6 > 0)
        {
            if (FUN8(VAR12, VAR8++, VAR14) < 0)
            {
                VAR9 = VAR23;
                break;
            }
            VAR6--;
        }
        FUN6(VAR12);
        break;
    case VAR24:
    case VAR25:
        VAR14 = VAR4 == VAR25 ? false : true;
        VAR9 = VAR23;
        if (!FUN5(VAR12))
        {
            if (FUN7(VAR12, VAR5, VAR14))
            {
                break;
            }
        }
        else if ((VAR5 != VAR3->VAR26) || (VAR3->VAR27 != VAR4))
        {
            FUN6(VAR12);
            if (FUN7(VAR12, VAR5, VAR14))
            {
                break;
            }
        }
        VAR3->VAR27 = VAR4;
        VAR3->VAR26 = VAR5;
        while (VAR6 > 0)
        {
            if (FUN8(VAR12, VAR8++, VAR14) < 0)
            {
                FUN6(VAR12);
                break;
            }
            VAR6--;
        }
        if (VAR6 == 0)
        {
            VAR9 = VAR20;
        }
        break;
    default:
        FUN3("");
        return VAR10;
    }
    FUN3("", VAR9);
    return VAR9;
}