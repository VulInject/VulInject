struct VAR1 *FUN1(int VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8, VAR9 *VAR10, VAR9 *VAR11, double *VAR12)
{
    struct VAR1 *VAR13;
    VAR13 = FUN2(sizeof(struct VAR1));
    if (VAR13)
        VAR13->VAR14 = FUN3(sizeof(VAR15));
    if (!VAR13 || !VAR13->VAR14)
    {
        FUN4(NULL, VAR16, "");
        return NULL;
    }
    if ((VAR3 != VAR6) || (VAR2 != VAR5))
    {
        if ((VAR4 != VAR17) || (VAR7 != VAR17))
        {
            FUN4(NULL, VAR18, "");
        }
        VAR13->VAR19 = FUN5(VAR5, VAR6, VAR2, VAR3);
    }
    else
    {
        VAR13->VAR19 = FUN2(sizeof(VAR20));
        VAR13->VAR19->VAR21 = VAR3;
        VAR13->VAR19->VAR22 = VAR2;
        VAR13->VAR19->VAR23 = VAR6;
        VAR13->VAR19->VAR24 = VAR5;
    }
    VAR13->VAR25 = VAR4;
    VAR13->VAR26 = VAR7;
    return VAR13;
}