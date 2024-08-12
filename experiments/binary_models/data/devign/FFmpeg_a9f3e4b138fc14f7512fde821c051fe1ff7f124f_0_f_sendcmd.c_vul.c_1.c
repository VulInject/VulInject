static int FUN1(VAR1 *VAR2, int VAR3, const char **VAR4, void *VAR5)
{
    char *VAR6;
    int VAR7;
    *VAR4 += strspn(*VAR4, VAR8);
    if (!**VAR4)
        return 0;
    memset(VAR2, 0, sizeof(VAR1));
    VAR2->VAR9 = VAR3;
    VAR6 = FUN2(VAR4, VAR10);
    if (VAR6 && VAR6[0])
    {
        char *VAR11, *VAR12;
        VAR11 = FUN3(VAR6, "", &VAR12);
        if ((VAR7 = FUN4(&VAR2->VAR13, VAR11, 1)) < 0)
        { "" , VAR11 , VAR3 ) ;
            if (VAR12)
            {
                if ((VAR7 = FUN4(&VAR2->VAR14, VAR12, 1)) < 0)
                { "" , VAR12 , VAR3 ) ;
                }
                else
                {
                    VAR2->VAR14 = VAR15;
                    if (VAR2->VAR14 < VAR2->VAR13)
                    { "" "" , VAR12 , VAR3 , VAR11 ) ;
                    }
                    else
                    { "" , VAR3 ) ;
                        VAR7 = FUN5(&VAR2->VAR16, &VAR2->VAR17, VAR3, VAR4, VAR5);
                    VAR12:
                        FUN6(VAR6);
                        return VAR7;