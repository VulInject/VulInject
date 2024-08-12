static int FUN1(const char **VAR1, VAR2 **VAR3, VAR2 **VAR4, VAR5 *VAR6)
{
    int VAR7 = 0;
    while (**VAR1 == '')
    {
        char *VAR8 = FUN2(VAR1, VAR6);
        VAR2 *VAR9;
        if (!VAR8)
            return -1;
        VAR9 = FUN3(VAR8, VAR4);
        if (VAR9)
        {
            if (VAR9->VAR10 != VAR11)
            {
                FUN4(VAR6, VAR12, ""%VAR13\"", VAR9->VAR8);
                return -1;
            }
        }
        else
        {
            VAR9 = FUN5(sizeof(VAR2));
            VAR9->VAR8 = VAR8;
            VAR9->VAR10 = VAR14;
            VAR9->VAR15 = VAR7;
        }
        FUN6(VAR3, VAR9);
        *VAR1 += FUN7(*VAR1);
        VAR7++;
    }
    return VAR7;