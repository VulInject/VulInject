void FUN1(int VAR1)
{
    VAR2 = VAR1;
    if (VAR2 && !VAR3)
    {
        VAR3 = fopen(VAR4, VAR5 ? "" : "");
        if (!VAR3)
        {
            FUN2(VAR4);
            FUN3(1);
        }
        {
            static char VAR6[4096];
            FUN4(VAR3, VAR6, VAR7, sizeof(VAR6));
        }
        FUN4(VAR3, NULL, VAR7, 0);
        VAR5 = 1;
    }
    if (!VAR2 && VAR3)
    {
        fclose(VAR3);
        VAR3 = NULL;
    }
}