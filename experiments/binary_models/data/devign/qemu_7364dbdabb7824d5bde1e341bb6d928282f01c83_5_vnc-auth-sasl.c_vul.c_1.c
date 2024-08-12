static int FUN1(VAR1 *VAR2, VAR3 *VAR4, size_t VAR5)
{
    uint32_t VAR6 = FUN2(VAR4, 0);
    FUN3("", VAR6);
    if (VAR6 > VAR7)
    {
        FUN3("", VAR6);
        FUN4(VAR2);
        return -1;
    }
    if (VAR6 == 0)
        return FUN5(VAR2, NULL, 0);
    else
        FUN6(VAR2, VAR8, VAR6);
    return 0;
}