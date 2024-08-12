static void FUN1(VAR1 *VAR2, char *VAR3, int VAR4)
{
    VAR5 *VAR6;
    const char *VAR7 = "";
    int VAR8 = 0;
    VAR8 += snprintf(VAR3 + VAR8, VAR4 - VAR8, ""%VAR9\"", VAR2->VAR10);
    FUN2(VAR6, &VAR2->VAR11, VAR12)
    {
        VAR8 += snprintf(VAR3 + VAR8, VAR4 - VAR8, ""%VAR9\"", VAR7, VAR6->VAR13->VAR10);
        if (VAR6->VAR14)
            VAR8 += snprintf(VAR3 + VAR8, VAR4 - VAR8, ""%VAR9\"", VAR6->VAR14);
        VAR7 = "";
    }
}