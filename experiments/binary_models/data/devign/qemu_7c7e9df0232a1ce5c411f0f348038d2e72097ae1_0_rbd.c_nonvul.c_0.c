static int FUN1(rados_t VAR1, const char *VAR2)
{
    char *VAR3, *VAR4;
    char VAR5[VAR6];
    char VAR7[VAR8];
    int VAR9 = 0;
    VAR4 = FUN2(VAR2);
    VAR3 = VAR4;
    while (VAR3)
    {
        VAR9 = FUN3(VAR5, sizeof(VAR5), VAR3, '', "", &VAR3);
        if (VAR9 < 0)
        {
            break;
        }
        if (!VAR3)
        {
            FUN4("", VAR5);
            VAR9 = -VAR10;
            break;
        }
        VAR9 = FUN3(VAR7, sizeof(VAR7), VAR3, '', "", &VAR3);
        if (VAR9 < 0)
        {
            break;
        }
        if (strcmp(VAR5, "") == 0)
        {
            VAR9 = FUN5(VAR1, VAR7);
            if (VAR9 < 0)
            {
                FUN4("", VAR7);
                break;
            }
        }
        else if (strcmp(VAR5, "") == 0)
        {
        }
        else
        {
            VAR9 = FUN6(VAR1, VAR5, VAR7);
            if (VAR9 < 0)
            {
                FUN4("", VAR5);
                VAR9 = -VAR10;
                break;
            }
        }
    }
    FUN7(VAR4);
    return VAR9;
}