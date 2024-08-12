void FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4)
{
    int VAR5 = strlen(VAR4);
    if (VAR5 > 0)
    {
        VAR5++;
        FUN2(VAR2, VAR3);
        FUN3(VAR2, VAR5);
        FUN4(VAR2, VAR4);
        if (VAR5 & 1)
            FUN5(VAR2, 0);
    }
}