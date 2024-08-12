static int FUN1(const char **VAR1, VAR2 **VAR3, VAR2 **VAR4, VAR5 *VAR6)
{
    int VAR7 = 0;
    while (**VAR1 == '')
    {
        char *VAR8 = FUN2(VAR1, VAR6);
        VAR2 *VAR9;
        if (!VAR8)
            return FUN3(VAR10);
        VAR9 = FUN4(VAR8, VAR4);
        if (VAR9)
        {
            FUN5(VAR8);
        }
        else
        {
            VAR9 = FUN6(sizeof(VAR2));
            VAR9->VAR8 = VAR8;
            VAR9->VAR11 = VAR7;
        }
        FUN7(VAR3, VAR9);
        *VAR1 += strspn(*VAR1, VAR12);
        VAR7++;
    }
    return VAR7;
}