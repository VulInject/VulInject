static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4)
{
    int VAR5;
    char *VAR6, *VAR7;
    if (VAR2->VAR8 & VAR9)
    {
        VAR5 = FUN2(VAR2, VAR4);
        if (VAR5 < 0)
        {
            return VAR5;
        }
        VAR6 = FUN3(VAR2, VAR3);
        VAR7 = FUN3(VAR2, VAR4);
        VAR5 = FUN4(VAR6, VAR7);
        FUN5(VAR6);
        FUN5(VAR7);
        if (VAR5 < 0 && VAR10 != VAR11)
        {
            return VAR5;
        }
    }
    VAR6 = FUN6(VAR2, VAR3);
    VAR7 = FUN6(VAR2, VAR4);
    VAR5 = FUN4(VAR6, VAR7);
    FUN5(VAR6);
    FUN5(VAR7);
    return VAR5;
}