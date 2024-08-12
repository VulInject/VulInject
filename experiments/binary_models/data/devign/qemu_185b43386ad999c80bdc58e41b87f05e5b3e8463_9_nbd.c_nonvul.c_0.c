int FUN1(int VAR1, int VAR2, uint32_t VAR3, off_t VAR4, size_t VAR5)
{
    FUN2("");
    if (FUN3(VAR1, VAR6, VAR2) < 0)
    {
        int VAR7 = VAR8;
        FUN4("");
        return -VAR7;
    }
    FUN2("", (unsigned long)VAR5);
    if (FUN3(VAR1, VAR9, VAR5) < 0)
    {
        int VAR7 = VAR8;
        FUN4("");
        return -VAR7;
    }
    FUN2("", (VAR10)(VAR4 / VAR5));
    if (FUN3(VAR1, VAR11, VAR4 / VAR5) < 0)
    {
        int VAR7 = VAR8;
        FUN4("");
        return -VAR7;
    }
    if (VAR3 & VAR12)
    {
        int VAR13 = 1;
        FUN2("");
        if (FUN3(VAR1, VAR14, (unsigned long)&VAR13) < 0)
        {
            int VAR7 = VAR8;
            FUN4("");
            return -VAR7;
        }
    }
    if (FUN3(VAR1, VAR15, VAR3) < 0 && VAR8 != VAR16)
    {
        int VAR7 = VAR8;
        FUN4("");
        return -VAR7;
    }
    FUN2("");
    return 0;
}