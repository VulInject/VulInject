static int FUN1(const char **VAR1, VAR2 **VAR3, VAR2 **VAR4, VAR2 **VAR5, VAR6 *VAR7)
{
    int VAR8, VAR9 = 0;
    while (**VAR1 == '')
    {
        char *VAR10 = FUN2(VAR1, VAR7);
        VAR2 *VAR11;
        VAR2 *VAR12 = *VAR3;
        *VAR3 = (*VAR3)->VAR13;
        if (!VAR10)
            VAR11 = FUN3(VAR10, VAR4);
        if (VAR11)
        {
            if ((VAR8 = FUN4(VAR12->VAR14, VAR12->VAR15, VAR11->VAR14, VAR11->VAR15, VAR7)) < 0)
                return VAR8;
            FUN5(VAR11->VAR10);
            FUN5(VAR10);
            FUN5(VAR11);
            FUN5(VAR12);
        }
        else
        {
            VAR12->VAR10 = VAR10;
            FUN6(VAR5, VAR12);
            *VAR1 += strspn(*VAR1, VAR16);
            VAR9++;
            return VAR9;