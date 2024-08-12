static int FUN1(VAR1 *VAR2)
{
    int VAR3 = -1;
    char *VAR4;
    char VAR5[VAR6];
    if (VAR2->VAR7->VAR8)
    {
        VAR3 = FUN2(VAR2->VAR7->VAR8, VAR9);
        if (VAR3 < 0)
        {
            FUN3("", strerror(VAR10));
        }
        return VAR3;
    }
    VAR4 = strrchr(VAR2->VAR11, '');
    if (VAR4)
    {
        VAR4++;
        if (snprintf(VAR5, sizeof(VAR5), "", VAR4) < sizeof(VAR5))
        {
            VAR3 = FUN2(VAR5, VAR9);
            if (VAR3 >= 0)
            {
                VAR2->VAR7->VAR8 = FUN4(VAR5);
            }
            else
            {
                FUN3(""
                             "",
                             VAR5, strerror(VAR10));
            }
        }
    }
    else
    {
        FUN3("", VAR2->VAR11);
    }
    return VAR3;
}