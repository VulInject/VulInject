int FUN1(int VAR1, VAR2 *VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    unsigned long VAR8 = FUN2(VAR9, VAR5->VAR10);
    unsigned long VAR11 = VAR5->VAR12 / VAR8;
    assert(!VAR5->VAR13);
    if (VAR5->VAR12 / VAR8 != VAR11)
    {
        FUN3(VAR7, "" VAR14 "", VAR5->VAR12);
        return -VAR15;
    }
    FUN4();
    if (FUN5(VAR1, VAR16, (unsigned long)VAR3->VAR1) < 0)
    {
        int VAR17 = VAR18;
        FUN3(VAR7, "");
        return -VAR17;
    }
    FUN6(VAR8);
    if (FUN5(VAR1, VAR19, VAR8) < 0)
    {
        int VAR17 = VAR18;
        FUN3(VAR7, "");
        return -VAR17;
    }
    FUN7(VAR11);
    if (VAR5->VAR12 % VAR8)
    {
        FUN8(VAR5->VAR12 % VAR8);
    }
    if (FUN5(VAR1, VAR20, VAR11) < 0)
    {
        int VAR17 = VAR18;
        FUN3(VAR7, "");
        return -VAR17;
    }
    if (FUN5(VAR1, VAR21, (unsigned long)VAR5->VAR22) < 0)
    {
        if (VAR18 == VAR23)
        {
            int VAR24 = (VAR5->VAR22 & VAR25) != 0;
            FUN9();
            if (FUN5(VAR1, VAR26, (unsigned long)&VAR24) < 0)
            {
                int VAR17 = VAR18;
                FUN3(VAR7, "");
                return -VAR17;
            }
        }
        else
        {
            int VAR17 = VAR18;
            FUN3(VAR7, "");
            return -VAR17;
        }
    }
    FUN10();
    return 0;
}