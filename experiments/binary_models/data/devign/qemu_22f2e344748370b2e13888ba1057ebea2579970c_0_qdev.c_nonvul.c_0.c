static int FUN1(VAR1 *VAR2, char *VAR3, int VAR4)
{
    int VAR5 = 0;
    int VAR6;
    VAR6 = snprintf(VAR3 + VAR5, VAR4 - VAR5, ""%VAR7\"", VAR2->VAR8, VAR2->VAR9->VAR8);
    VAR5 += FUN2(VAR4 - VAR5, VAR6);
    if (VAR2->VAR10)
    {
        VAR6 = snprintf(VAR3 + VAR5, VAR4 - VAR5, ""%VAR7\"", VAR2->VAR10);
        VAR5 += FUN2(VAR4 - VAR5, VAR6);
    }
    if (VAR2->VAR11)
    {
        VAR6 = snprintf(VAR3 + VAR5, VAR4 - VAR5, ""%VAR7\"", VAR2->VAR11);
        VAR5 += FUN2(VAR4 - VAR5, VAR6);
    }
    if (VAR2->VAR12)
    {
        VAR6 = snprintf(VAR3 + VAR5, VAR4 - VAR5, "");
        VAR5 += FUN2(VAR4 - VAR5, VAR6);
    }
    return VAR5;
}