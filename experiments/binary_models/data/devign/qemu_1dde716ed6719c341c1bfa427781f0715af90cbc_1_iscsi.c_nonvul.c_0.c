FUN1(VAR1 *VAR2, int64_t VAR3, VAR4 *VAR5, int VAR6, VAR7 *VAR8, void *VAR9)
{
    VAR10 *VAR11 = VAR2->VAR9;
    VAR12 *VAR13;
    VAR13 = FUN2(&VAR14, VAR2, VAR8, VAR9);
    FUN3(VAR11->VAR15, VAR3, VAR6, VAR9, VAR13);
    VAR13->VAR11 = VAR11;
    VAR13->VAR5 = VAR5;
    VAR13->VAR6 = VAR6;
    VAR13->VAR3 = VAR3;
    VAR13->VAR16 = VAR17;
    if (FUN4(VAR13) != 0)
    {
        if (VAR13->VAR18)
        {
            FUN5(VAR13->VAR18);
        }
        FUN6(VAR13);
        return NULL;
    }
    FUN7(VAR11);
    return &VAR13->VAR19;
}