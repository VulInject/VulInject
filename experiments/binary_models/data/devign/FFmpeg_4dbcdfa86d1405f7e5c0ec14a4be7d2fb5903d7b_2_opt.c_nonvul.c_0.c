static int FUN1(void *VAR1, const char *VAR2, const VAR3 **VAR4, double *VAR5, int *VAR6, VAR7 *VAR8)
{
    const VAR3 *VAR9 = FUN2(VAR1, VAR2, NULL, 0, 0);
    void *VAR10;
    if (!VAR9)
        goto VAR11;
    VAR10 = ((VAR12 *)VAR1) + VAR9->VAR13;
    if (VAR4)
        *VAR4 = VAR9;
    switch (VAR9->VAR14)
    {
    case VAR15:
        *VAR8 = *(unsigned int *)VAR10;
        return 0;
    case VAR16:
        *VAR8 = *(int *)VAR10;
        return 0;
    case VAR17:
        *VAR8 = *(VAR7 *)VAR10;
        return 0;
    case VAR18:
        *VAR5 = *(float *)VAR10;
        return 0;
    case VAR19:
        *VAR5 = *(double *)VAR10;
        return 0;
    case VAR20:
        *VAR8 = ((VAR21 *)VAR10)->VAR5;
        *VAR6 = ((VAR21 *)VAR10)->VAR6;
        return 0;
    }
VAR11:
    *VAR6 = *VAR8 = 0;
    return -1;
}