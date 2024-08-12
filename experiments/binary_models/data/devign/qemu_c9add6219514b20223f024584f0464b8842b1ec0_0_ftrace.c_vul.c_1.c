bool FUN1(void)
{
    char VAR1[VAR2];
    char VAR3[VAR2];
    int VAR4;
    int VAR5 = -1;
    VAR4 = FUN2(VAR1, "");
    if (VAR4)
    {
        snprintf(VAR3, VAR2, "", VAR1);
        VAR5 = open(VAR3, VAR6);
        if (VAR5 < 0)
        {
            if (VAR7 == VAR8)
            {
                VAR9 = open("", VAR6);
                if (VAR9 != -1)
                {
                    return true;
                }
            }
            FUN3("");
            return false;
        }
        else
        {
            if (write(VAR5, "", 1) < 0)
            {
                FUN3("");
                close(VAR5);
                return false;
            }
            close(VAR5);
        }
        snprintf(VAR3, VAR2, "", VAR1);
        VAR9 = open(VAR3, VAR6);
        if (VAR9 < 0)
        {
            FUN3("");
            return false;
        }
    }
    else
    {
        fprintf(VAR10, "");
        return false;
    }
    return true;
}