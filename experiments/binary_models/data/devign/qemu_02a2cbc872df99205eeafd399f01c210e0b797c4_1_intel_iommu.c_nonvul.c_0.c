static bool FUN1(VAR1 *VAR2)
{
    VTDInvDesc VAR3;
    uint8_t VAR4;
    FUN2(VAR5, "" VAR6, VAR2->VAR7);
    if (!FUN3(VAR2->VAR8, VAR2->VAR7, &VAR3))
    {
        VAR2->VAR9 = VAR10;
        return false;
    }
    VAR4 = VAR3.VAR11 & VAR12;
    VAR2->VAR9 = VAR4;
    switch (VAR4)
    {
    case VAR13:
        FUN2(VAR5, "" VAR14 "" VAR14, VAR3.VAR15, VAR3.VAR11);
        if (!FUN4(VAR2, &VAR3))
        {
            return false;
        }
        break;
    case VAR16:
        FUN2(VAR5, "" VAR14 "" VAR14, VAR3.VAR15, VAR3.VAR11);
        if (!FUN5(VAR2, &VAR3))
        {
            return false;
        }
        break;
    case VAR17:
        FUN2(VAR5, "" VAR14 "" VAR14, VAR3.VAR15, VAR3.VAR11);
        if (!FUN6(VAR2, &VAR3))
        {
            return false;
        }
        break;
    case VAR18:
        FUN2(VAR5, ""
                         "" VAR14 "" VAR14,
                    VAR3.VAR15, VAR3.VAR11);
        if (!FUN7(VAR2, &VAR3))
        {
            return false;
        }
        break;
    default:
        FUN2(VAR19, ""
                             "" VAR14 "" VAR14 "" VAR20,
                    VAR3.VAR15, VAR3.VAR11, VAR4);
        return false;
    }
    VAR2->VAR7++;
    if (VAR2->VAR7 == VAR2->VAR21)
    {
        VAR2->VAR7 = 0;
    }
    return true;
}