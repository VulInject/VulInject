static int FUN1(VAR1 *VAR2, int VAR3, ...)
{
    VAR4 *VAR5 = (VAR4 *)VAR2;
    switch (VAR3)
    {
    case VAR6:
    {
        va_list VAR7;
        int VAR8;
        FUN2(VAR7, VAR3);
        VAR8 = FUN3(VAR7, int);
        FUN4(VAR7);
        if (VAR8 && FUN5(VAR2))
        {
            VAR8 = 0;
        }
        VAR2->VAR8 = VAR8;
    }
    break;
    case VAR9:
        if (VAR2->VAR8)
        {
            VAR2->VAR8 = 0;
            FUN6(VAR5->VAR10, NULL, NULL, NULL);
        }
        break;
    }
    return 0;
}