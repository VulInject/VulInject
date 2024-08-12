void FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7 = VAR2->VAR8->VAR7;
    const char *VAR9 = "";
    if (VAR2->VAR10)
    {
        FUN2("", VAR2->VAR10);
        VAR9 = VAR3;
    }
    if (VAR7[0].VAR11 == NULL)
    {
        FUN3(VAR5, &VAR2->VAR12, VAR13)
        {
            FUN2("", VAR9, VAR5->VAR11);
            FUN4(VAR5->VAR14);
            VAR9 = VAR3;
        }
        return;
    }
    for (; VAR7 && VAR7->VAR11; VAR7++)
    {
        const char *VAR15;
        VAR5 = FUN5(VAR2, VAR7->VAR11);
        VAR15 = VAR5 ? VAR5->VAR14 : VAR7->VAR16;
        if (!VAR15)
        {
            continue;
        }
        if (VAR7->VAR17 == VAR18)
        {
            FUN2("", VAR9, VAR7->VAR11);
            FUN4(VAR15);
        }
        else if ((VAR7->VAR17 == VAR19 || VAR7->VAR17 == VAR20) && VAR5)
        {
            FUN2("" VAR21, VAR9, VAR7->VAR11, VAR5->VAR15.VAR22);
        }
        else
        {
            FUN2("", VAR9, VAR7->VAR11, VAR15);
        }
        VAR9 = VAR3;
    }
}