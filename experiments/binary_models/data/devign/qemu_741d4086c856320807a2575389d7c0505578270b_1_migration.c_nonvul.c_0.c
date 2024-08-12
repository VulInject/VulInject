static bool FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    if (VAR2->VAR5 && (VAR2->VAR6 > 9))
    {
        FUN2(VAR4, VAR7, "", "");
        return false;
    }
    if (VAR2->VAR8 && (VAR2->VAR9 < 1))
    {
        FUN2(VAR4, VAR7, "", "");
        return false;
    }
    if (VAR2->VAR10 && (VAR2->VAR11 < 1))
    {
        FUN2(VAR4, VAR7, "", "");
        return false;
    }
    if (VAR2->VAR12 && (VAR2->VAR13 < 1 || VAR2->VAR13 > 99))
    {
        FUN2(VAR4, VAR7, "", "");
        return false;
    }
    if (VAR2->VAR14 && (VAR2->VAR15 < 1 || VAR2->VAR15 > 99))
    {
        FUN2(VAR4, VAR7, "", "");
        return false;
    }
    if (VAR2->VAR16 && (VAR2->VAR17 > VAR18))
    {
        FUN2(VAR4, ""
                         "",
                   VAR18);
        return false;
    }
    if (VAR2->VAR19 && (VAR2->VAR20 > VAR21))
    {
        FUN2(VAR4, ""
                         "",
                   VAR21);
        return false;
    }
    if (VAR2->VAR22 && (VAR2->VAR23 < 1))
    {
        FUN2(VAR4, VAR7, "", "");
        return false;
    }
    if (VAR2->VAR24 && (VAR2->VAR25 < 1 || VAR2->VAR25 > 10000))
    {
        FUN2(VAR4, VAR7, "", "");
        return false;
    }
    if (VAR2->VAR26 && (VAR2->VAR27 < FUN3() || !FUN4(VAR2->VAR27)))
    {
        FUN2(VAR4, VAR7, "", ""
                                                                            "");
        return false;
    }
    return true;
}