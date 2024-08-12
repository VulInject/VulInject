static int FUN1(VAR1 *VAR2, VAR3 *VAR4, size_t VAR5)
{
    uint32_t VAR6 = FUN2(VAR4, 0);
    FUN3("", VAR6);
    if (VAR6 > 100)
    {
        FUN3("", VAR6);
        FUN4(VAR2);
        return -1;
    }
    if (VAR6 < 1)
    {
        FUN3("", VAR6);
        FUN4(VAR2);
        return -1;
    }
    FUN5(VAR2, VAR7, VAR6);
    return 0;
}