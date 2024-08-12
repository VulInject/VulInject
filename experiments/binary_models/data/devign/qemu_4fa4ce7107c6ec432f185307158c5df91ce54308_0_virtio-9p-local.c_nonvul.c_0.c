static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    int VAR4;
    char *VAR5;
    char *VAR6 = FUN2(VAR3);
    VAR5 = FUN3("", VAR2->VAR7, FUN4(VAR6), VAR8);
    VAR4 = mkdir(VAR5, 0700);
    if (VAR4 < 0 && VAR9 == VAR10)
    {
        VAR4 = 0;
    }
    FUN5(VAR5);
    FUN5(VAR6);
    return VAR4;
}