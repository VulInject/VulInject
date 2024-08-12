static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5 = (VAR4 *)VAR2;
    VAR4 **VAR6;
    VAR3 = FUN2(VAR5->VAR7.VAR8, &VAR5->VAR7);
    if (VAR3 == VAR9)
    {
        while (FUN3(&VAR5->VAR7) == VAR10)
            ;
    }
    VAR6 = &VAR11->VAR12;
    for (;;)
    {
        if (*VAR6 == NULL)
        {
            break;
        }
        else if (*VAR6 == VAR5)
        {
            *VAR6 = VAR5->VAR13;
            FUN4(VAR5);
            break;
        }
        VAR6 = &VAR5->VAR13;
    }
}