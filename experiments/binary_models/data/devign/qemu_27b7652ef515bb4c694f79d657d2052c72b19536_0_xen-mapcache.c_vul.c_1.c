void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL, *VAR5 = NULL;
    VAR6 *VAR7;
    target_phys_addr_t VAR8;
    target_phys_addr_t VAR9;
    int VAR10 = 0;
    if (VAR11->VAR12 == VAR2)
    {
        VAR11->VAR13 = -1;
    }
    FUN2(VAR7, &VAR11->VAR14, VAR15)
    {
        if (VAR7->VAR16 == VAR2)
        {
            VAR8 = VAR7->VAR8;
            VAR9 = VAR7->VAR9;
            VAR10 = 1;
            break;
        }
    }
    if (!VAR10)
    {
        FUN3("", VAR17, VAR2);
        FUN2(VAR7, &VAR11->VAR14, VAR15) { FUN3("" VAR18 "", VAR7->VAR8, VAR7->VAR16); }
        return;
    }
    FUN4(&VAR11->VAR14, VAR7, VAR15);
    FUN5(VAR7);
    VAR4 = &VAR11->VAR4[VAR8 % VAR11->VAR19];
    while (VAR4 && (VAR4->VAR8 != VAR8 || VAR4->VAR9 != VAR9))
    {
        VAR5 = VAR4;
        VAR4 = VAR4->VAR15;
    }
    if (!VAR4)
    {
        FUN3("", VAR2);
        return;
    }
    VAR4->VAR20--;
    if (VAR4->VAR20 > 0 || VAR5 == NULL)
    {
        return;
    }
    VAR5->VAR15 = VAR4->VAR15;
    if (FUN6(VAR4->VAR21, VAR4->VAR9) != 0)
    {
        FUN7("");
        FUN8(-1);
    }
    FUN5(VAR4->VAR22);
    FUN5(VAR4);
}