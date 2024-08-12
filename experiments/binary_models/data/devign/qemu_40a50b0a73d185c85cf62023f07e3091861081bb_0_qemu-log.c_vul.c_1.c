void FUN1(int VAR1, bool VAR2)
{
    VAR3 = VAR1;
    if (VAR3 && !VAR4)
    {
        VAR4 = fopen(VAR5, VAR6 ? "" : "");
        if (!VAR4)
        {
            FUN2(VAR5);
            FUN3(1);
        }
        if (VAR2)
        {
            static char VAR7[4096];
            FUN4(VAR4, VAR7, VAR8, sizeof(VAR7));
        }
        else
        {
            FUN4(VAR4, NULL, VAR9, 0);
            FUN4(VAR4, NULL, VAR8, 0);
            VAR6 = 1;
        }
    }
    if (!VAR3 && VAR4)
    {
        fclose(VAR4);
        VAR4 = NULL;
    }
}