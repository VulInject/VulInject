static void FUN1(const char *VAR1)
{
    if (VAR2 && VAR3)
    {
        fprintf(VAR4, "");
        FUN2(1);
    }
    if (!VAR2 && (!strchr(VAR1, '') || VAR1[1] == '' || FUN3(VAR1, "", NULL)))
    {
        if (FUN4(VAR1, 0) == 0)
        {
            if (!VAR5 && !VAR3)
            {
                fprintf(VAR4, "", VAR1);
                FUN5(VAR4);
                if (!FUN6())
                {
                    fprintf(VAR4, "");
                    FUN2(1);
                }
            }
            else
            {
                fprintf(VAR4, "", VAR1);
                FUN2(1);
            }
        }
    }
}