static int FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10;
    VAR10 = FUN2(VAR2);
    if (VAR10 < 0)
        return VAR10;
    VAR10 = pread(VAR8->VAR11, VAR5, VAR6, VAR3);
    if (VAR10 == VAR6)
        return VAR10;
    if ((VAR10 == 0) && VAR2->VAR12)
    {
        int64_t VAR13 = FUN3(VAR2);
        if (VAR3 >= VAR13)
        {
            memset(VAR5, 0, VAR6);
            return VAR6;
        }
    }
    FUN4("" VAR14 "" VAR14 "", VAR8->VAR11, VAR2->VAR15, VAR3, VAR5, VAR6, VAR2->VAR16, VAR10, VAR17, strerror(VAR17));
    if (VAR8->VAR18 != VAR19)
    {
        VAR10 = pread(VAR8->VAR11, VAR5, VAR6, VAR3);
        if (VAR10 == VAR6)
            return VAR10;
        VAR10 = pread(VAR8->VAR11, VAR5, VAR6, VAR3);
        if (VAR10 == VAR6)
            return VAR10;
        FUN4("" VAR14 "" VAR14 "", VAR8->VAR11, VAR2->VAR15, VAR3, VAR5, VAR6, VAR2->VAR16, VAR10, VAR17, strerror(VAR17));
    }
    return (VAR10 < 0) ? -VAR17 : VAR10;
}