static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    if (VAR2->VAR4->VAR5)
        return -1;
    if (VAR2->VAR4->VAR6)
        return -1;
    VAR3 = open(VAR2->VAR4->VAR7, VAR8);
    if (VAR3 < 0)
    {
        FUN2("", strerror(VAR9));
        return -1;
    }
    VAR2->VAR10 = VAR3;
    if (VAR2->VAR4->VAR11)
    {
        FUN3(VAR2->VAR10, VAR12);
        FUN2("", VAR2->VAR4->VAR7);
        if (FUN4(VAR2->VAR10, VAR12) < 0)
        {
            FUN2("", strerror(VAR9));
            return -1;
        }
    }
    else
    {
        if ((VAR2->VAR4->VAR13 = FUN5(VAR3)) < 0)
        {
            FUN2("", strerror(VAR9));
            return -1;
        }
    }
    VAR2->VAR4->VAR13 = FUN6(FUN5(VAR3), VAR12);
    VAR2->VAR4->VAR14 = FUN7(VAR3, 0, VAR15);
    FUN7(VAR3, 0, VAR16);
    VAR2->VAR17 = VAR2->VAR18;
    VAR2->VAR19 = VAR2->VAR18 + VAR12;
    VAR2->VAR4->VAR5 = 1;
    VAR2->VAR20 = !!FUN8(VAR2->VAR18, "");
    return 0;
}