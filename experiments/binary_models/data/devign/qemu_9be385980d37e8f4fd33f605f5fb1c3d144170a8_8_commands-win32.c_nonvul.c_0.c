VAR1 FUN1(VAR2 **VAR3)
{
    SYSTEMTIME VAR4 = {0};
    FILETIME VAR5;
    FUN2(&VAR4);
    if (VAR4.VAR6 < 1601 || VAR4.VAR6 > 30827)
    {
        FUN3(VAR3, "");
        return -1;
    }
    if (!FUN4(&VAR4, &VAR5))
    {
        FUN3(VAR3, "", (int)FUN5());
        return -1;
    }
    return ((((VAR1)VAR5.VAR7 << 32) | VAR5.VAR8) - VAR9) * 100;
}