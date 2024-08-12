static int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    if (VAR6->VAR8 == 1)
        VAR2->VAR9 = 0;
    else
        VAR2->VAR9 = 1;
    VAR6->VAR10 = -1;
    FUN2(VAR6->VAR11, VAR3, sizeof(VAR6->VAR11));
    if (VAR6->VAR12)
    {
        int VAR13 = strlen(VAR6->VAR12);
        if (VAR13 < 2 || strcmp("", VAR6->VAR12 + VAR13 - 2))
            FUN3(VAR2, VAR14, "");
    }
    return FUN4(VAR2);
}