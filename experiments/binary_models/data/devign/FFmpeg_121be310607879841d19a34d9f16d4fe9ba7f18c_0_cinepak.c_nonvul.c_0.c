static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = 0, VAR10 = VAR6->VAR11;
    VAR12 *VAR13 = VAR2->VAR14;
    VAR13->VAR3 = VAR8;
    VAR13->VAR11 = VAR10;
    if ((VAR9 = FUN2(VAR2, VAR13->VAR15)) < 0)
        return VAR9;
    if (VAR13->VAR16)
    {
        int VAR11;
        const VAR7 *VAR17 = FUN3(VAR6, VAR18, &VAR11);
        if (VAR17 && VAR11 == VAR19)
        {
            VAR13->VAR15->VAR20 = 1;
            memcpy(VAR13->VAR17, VAR17, VAR19);
        }
        else if (VAR17)
        {
            FUN4(VAR2, VAR21, "", VAR11);
        }
    }
    if ((VAR9 = FUN5(VAR13)) < 0)
    {
        FUN4(VAR2, VAR21, "");
    }
    if (VAR13->VAR16)
        memcpy(VAR13->VAR15->VAR3[1], VAR13->VAR17, VAR19);
    if ((VAR9 = FUN6(VAR3, VAR13->VAR15)) < 0)
        return VAR9;
    *VAR4 = 1;
    return VAR10;
}