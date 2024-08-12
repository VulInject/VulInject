int FUN1(VAR1 *VAR2, int VAR3, VAR1 *VAR4, int VAR5, bool VAR6)
{
    SCSISense VAR7;
    bool VAR8;
    VAR8 = (VAR2[0] & 2) == 0;
    if (VAR3 && VAR6 == VAR8)
    {
        memcpy(VAR4, VAR2, FUN2(VAR5, VAR3));
        return FUN2(VAR5, VAR3);
    }
    if (VAR3 == 0)
    {
        VAR7 = FUN3(VAR9);
    }
    else
    {
        VAR7 = FUN4(VAR2, VAR3);
    }
    return FUN5(VAR4, VAR5, VAR7, VAR6);
}