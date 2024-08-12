static int FUN1(int64_t VAR1)
{
    int VAR2;
    static int VAR3;
    FUN2(&VAR1);
    if (!VAR1 && (VAR3 > VAR4))
    {
        static bool VAR5;
        if (!VAR5 && !FUN3() && !FUN4())
        {
            fprintf(VAR6, "", VAR4);
            VAR5 = true;
        }
        VAR1 = VAR7;
    }
    if (VAR1)
    {
        VAR3 = 0;
        FUN5();
    }
    else
    {
        VAR3++;
    }
    VAR2 = FUN6((VAR8 *)VAR9->VAR10, VAR9->VAR11, VAR1);
    if (VAR1)
    {
        FUN7();
    }
    FUN8();
    return VAR2;
}