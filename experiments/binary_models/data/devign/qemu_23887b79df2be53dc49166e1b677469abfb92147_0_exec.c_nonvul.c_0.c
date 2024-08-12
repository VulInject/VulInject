int FUN1(void *VAR1, VAR2 *VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7 = VAR1;
    if (FUN2())
    {
        *VAR3 = FUN3(VAR1);
        return 0;
    }
    VAR5 = VAR8.VAR9;
    if (VAR5 && VAR5->VAR7 && VAR7 - VAR5->VAR7 < VAR5->VAR10)
    {
        goto VAR11;
    }
    FUN4(VAR5, &VAR8.VAR12, VAR13)
    {
        if (VAR5->VAR7 == NULL)
        {
            continue;
        }
        if (VAR7 - VAR5->VAR7 < VAR5->VAR10)
        {
            goto VAR11;
        }
    }
    return -1;
VAR11:
    *VAR3 = VAR5->VAR14 + (VAR7 - VAR5->VAR7);
    return 0;
}