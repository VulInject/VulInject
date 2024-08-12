VAR1 *FUN1(VAR2 *VAR3, const char *VAR4)
{
    VAR5 *VAR6;
    VAR1 *VAR7;
    if (!VAR3)
    {
        if (!VAR8)
        {
            VAR8 = FUN2(&VAR9, NULL, "");
        }
        VAR3 = VAR8;
    }
    for (VAR6 = VAR10; VAR6; VAR6 = VAR6->VAR11)
    {
        if (VAR6->VAR12->VAR13 != VAR3->VAR12)
            continue;
        if (strcmp(VAR6->VAR12->VAR4, VAR4) != 0)
            continue;
        break;
    }
    if (!VAR6)
    {
        FUN3("", VAR4, VAR3->VAR12->VAR4);
    }
    VAR7 = FUN4(VAR6->VAR12->VAR14);
    VAR7->VAR15 = VAR6;
    VAR7->VAR16 = VAR3;
    FUN5(&VAR3->VAR17, VAR7, VAR18);
    return VAR7;
}