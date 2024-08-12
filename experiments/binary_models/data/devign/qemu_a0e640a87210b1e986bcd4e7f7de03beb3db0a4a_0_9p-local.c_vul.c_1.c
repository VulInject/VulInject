static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    int VAR4;
    struct stat VAR5;
    char *VAR6;
    if (VAR2->VAR7 & VAR8)
    {
        VAR6 = FUN2(VAR2, VAR3);
        VAR4 = FUN3(VAR6, &VAR5);
        FUN4(VAR6);
        if (VAR4)
        {
            goto VAR9;
        }
        if (FUN5(VAR5.VAR10))
        {
            VAR6 = FUN6("", VAR2->VAR11, VAR3, VAR12);
            VAR4 = remove(VAR6);
            FUN4(VAR6);
            if (VAR4 < 0 && VAR13 != VAR14)
            {
                goto VAR9;
            }
        }
        VAR6 = FUN7(VAR2, VAR3);
        VAR4 = remove(VAR6);
        FUN4(VAR6);
        if (VAR4 < 0 && VAR13 != VAR14)
        {
            goto VAR9;
        }
    }
    VAR6 = FUN2(VAR2, VAR3);
    VAR4 = remove(VAR6);
    FUN4(VAR6);
VAR9:
    return VAR4;
}