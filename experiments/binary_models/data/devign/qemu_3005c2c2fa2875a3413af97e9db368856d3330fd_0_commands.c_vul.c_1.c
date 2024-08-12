static VAR1 FUN1(VAR2 *VAR3, GIOCondition VAR4, gpointer VAR5)
{
    VAR6 *VAR7 = (VAR6 *)VAR5;
    gsize VAR8;
    GIOStatus VAR9;
    if (VAR4 == VAR10 || VAR4 == VAR11)
    {
        goto close;
    }
    if (VAR7->VAR12 == VAR7->VAR13)
    {
        gpointer VAR14 = NULL;
        if (!VAR7->VAR15 && VAR7->VAR12 < VAR16)
        {
            VAR14 = FUN2(VAR7->VAR17, VAR7->VAR12 + VAR18);
        }
        if (VAR14 == NULL)
        {
            gchar VAR19[VAR18];
            VAR7->VAR15 = true;
            VAR9 = FUN3(VAR3, VAR19, sizeof(VAR19), &VAR8, NULL);
            if (VAR9 == VAR20 || VAR9 == VAR21)
            {
                goto close;
            }
            return true;
        }
        VAR7->VAR12 += VAR18;
        VAR7->VAR17 = VAR14;
    }
    VAR9 = FUN3(VAR3, (VAR22 *)VAR7->VAR17 + VAR7->VAR13, VAR7->VAR12 - VAR7->VAR13, &VAR8, NULL);
    if (VAR9 == VAR20 || VAR9 == VAR21)
    {
        goto close;
    }
    VAR7->VAR13 += VAR8;
    return true;
close:
    FUN4(VAR3);
    FUN5(&VAR7->VAR23, 1);
    return false;