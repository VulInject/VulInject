int FUN1(int VAR1, VAR2 *VAR3, uint32_t VAR4, off_t VAR5)
{
    unsigned long VAR6 = VAR5 / VAR7;
    if (VAR5 / VAR7 != VAR6)
    {
        FUN2("", (long long)VAR5);
        return -VAR8;
    }
    FUN3("");
    if (FUN4(VAR1, VAR9, (unsigned long)VAR3->VAR1) < 0)
    {
        int VAR10 = VAR11;
        FUN2("");
        return -VAR10;
    }
    FUN3("", (unsigned long)VAR7);
    if (FUN4(VAR1, VAR12, (unsigned long)VAR7) < 0)
    {
        int VAR10 = VAR11;
        FUN2("");
        return -VAR10;
    }
    FUN3("", VAR6);
    if (VAR5 % VAR7)
    {
        FUN3("", (int)(VAR5 % VAR7));
    }
    if (FUN4(VAR1, VAR13, VAR6) < 0)
    {
        int VAR10 = VAR11;
        FUN2("");
        return -VAR10;
    }
    if (FUN4(VAR1, VAR14, (unsigned long)VAR4) < 0)
    {
        if (VAR11 == VAR15)
        {
            int VAR16 = (VAR4 & VAR17) != 0;
            FUN3("");
            if (FUN4(VAR1, VAR18, (unsigned long)&VAR16) < 0)
            {
                int VAR10 = VAR11;
                FUN2("");
                return -VAR10;
            }
        }
        else
        {
            int VAR10 = VAR11;
            FUN2("");
            return -VAR10;
        }
    }
    FUN3("");
    return 0;
}