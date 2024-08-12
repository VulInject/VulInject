VAR1 *FUN1(target_phys_addr_t VAR2, target_phys_addr_t VAR3, uint8_t VAR4)
{
    VAR5 *VAR6, *VAR7 = NULL;
    target_phys_addr_t VAR8;
    target_phys_addr_t VAR9;
    target_phys_addr_t VAR10 = VAR3;
    bool VAR11 = false;
VAR12:
    VAR8 = VAR2 >> VAR13;
    VAR9 = VAR2 & (VAR14 - 1);
    FUN2(VAR2);
    if (VAR8 == VAR15->VAR16 && !VAR4 && !VAR10)
    {
        FUN3(VAR15->VAR17 + VAR9);
        return VAR15->VAR17 + VAR9;
    }
    if ((VAR9 + (VAR10 % VAR14)) > VAR14)
        VAR10 += VAR14;
    if (VAR10 % VAR14)
        VAR10 += VAR14 - (VAR10 % VAR14);
    if (!VAR10)
        VAR10 = VAR14;
    VAR6 = &VAR15->VAR6[VAR8 % VAR15->VAR18];
    while (VAR6 && VAR6->VAR4 && VAR6->VAR19 && (VAR6->VAR20 != VAR8 || VAR6->VAR3 != VAR10 || !FUN4(VAR9 >> VAR21, VAR3 >> VAR21, VAR6->VAR22)))
    {
        VAR7 = VAR6;
        VAR6 = VAR6->VAR23;
    }
    if (!VAR6)
    {
        VAR6 = FUN5(sizeof(VAR5));
        VAR7->VAR23 = VAR6;
        FUN6(VAR6, VAR10, VAR8);
    }
    else if (!VAR6->VAR4)
    {
        if (!VAR6->VAR19 || VAR6->VAR20 != VAR8 || VAR6->VAR3 != VAR10 || !FUN4(VAR9 >> VAR21, VAR3 >> VAR21, VAR6->VAR22))
        {
            FUN6(VAR6, VAR10, VAR8);
        }
    }
    if (!FUN4(VAR9 >> VAR21, VAR3 >> VAR21, VAR6->VAR22))
    {
        VAR15->VAR16 = -1;
        if (!VAR11 && VAR15->VAR24)
        {
            VAR2 = VAR15->FUN7(VAR2, VAR3, VAR15->VAR25);
            VAR11 = true;
            goto VAR12;
        }
        FUN3(NULL);
        return NULL;
    }
    VAR15->VAR16 = VAR8;
    VAR15->VAR17 = VAR6->VAR19;
    if (VAR4)
    {
        VAR26 *VAR27 = FUN5(sizeof(VAR26));
        VAR6->VAR4++;
        VAR27->VAR28 = VAR15->VAR17 + VAR9;
        VAR27->VAR20 = VAR15->VAR16;
        VAR27->VAR3 = VAR6->VAR3;
        FUN8(&VAR15->VAR29, VAR27, VAR23);
    }
    FUN3(VAR15->VAR17 + VAR9);
    return VAR15->VAR17 + VAR9;
}