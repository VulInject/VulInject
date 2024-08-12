int FUN1(char *VAR1, int VAR2, int *VAR3, int VAR4, int VAR5, VAR6 **VAR7)
{
    char VAR8[10] = "";
    int VAR9;
    if ((VAR9 = FUN2(VAR8, sizeof(VAR8))) < 0)
    {
        fprintf(VAR10, "");
        return -1;
    }
    FUN3(VAR1, VAR2, VAR8);
    if (*VAR3)
    {
        *VAR3 = 0;
        if (VAR4 && !*VAR3)
        {
            FUN4(""
                         "");
            close(VAR9);
            return -1;
        }
    }
    FUN5(VAR9, VAR11, VAR12);
    return VAR9;
}