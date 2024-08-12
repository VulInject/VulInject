FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, void *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10 = FUN2(VAR2);
    VAR11 *VAR12 = NULL;
    VAR11 **VAR13 = &VAR12;
    unsigned long VAR14;
    VAR14 = FUN3(VAR10->VAR12, VAR15);
    VAR13 = FUN4(VAR13, VAR14);
    if (VAR14 == VAR15)
    {
        goto VAR16;
    }
    do
    {
        VAR14 = FUN5(VAR10->VAR12, VAR15, VAR14 + 1);
        if (VAR14 == VAR15)
        {
            break;
        }
        VAR13 = FUN4(VAR13, VAR14);
    } while (true);
VAR16:
    FUN6(VAR4, VAR5, &VAR12, VAR8);
}