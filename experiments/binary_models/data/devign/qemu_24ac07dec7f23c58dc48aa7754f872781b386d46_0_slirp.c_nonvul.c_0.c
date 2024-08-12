static void FUN1(VAR1 *VAR2)
{
    char VAR3[128];
    int VAR4;
    if (VAR2->VAR5[0] != '')
    {
        snprintf(VAR3, sizeof(VAR3), "", VAR2->VAR5);
        VAR4 = system(VAR3);
        if (VAR4 == -1 || !FUN2(VAR4))
        {
            FUN3("", VAR3);
        }
        else if (FUN4(VAR4))
        {
            FUN3("", VAR3, FUN4(VAR4));
        }
        VAR2->VAR5[0] = '';
    }
}