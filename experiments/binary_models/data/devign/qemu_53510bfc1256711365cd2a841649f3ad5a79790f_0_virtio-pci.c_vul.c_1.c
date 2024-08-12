static int FUN1(VAR1 *VAR2, unsigned int VAR3, unsigned int VAR4, MSIMessage VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2->VAR8, VAR3);
    VAR9 *VAR10 = FUN3(VAR7);
    VAR11 *VAR12 = &VAR2->VAR13[VAR4];
    int VAR14;
    if (VAR12->VAR5.VAR15 != VAR5.VAR15 || VAR12->VAR5.VAR16 != VAR5.VAR16)
    {
        VAR14 = FUN4(VAR17, VAR12->VAR18, VAR5);
        if (VAR14 < 0)
        {
            return VAR14;
        }
    }
    if (VAR2->VAR8->VAR19)
    {
        VAR2->VAR8->FUN5(VAR2->VAR8, VAR3, false);
        if (VAR2->VAR8->VAR20 && VAR2->VAR8->FUN6(VAR2->VAR8, VAR3))
        {
            FUN7(VAR10);
        }
    }
    else
    {
        VAR14 = FUN8(VAR2, VAR3, VAR4);
    }
    return VAR14;
}