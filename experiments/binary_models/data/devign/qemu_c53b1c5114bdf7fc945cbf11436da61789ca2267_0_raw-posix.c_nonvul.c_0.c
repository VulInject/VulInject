static VAR1 *FUN1(VAR2 *VAR3, int64_t VAR4, VAR5 *VAR6, int VAR7, VAR8 *VAR9, void *VAR10, int VAR11)
{
    VAR12 *VAR13 = VAR3->VAR10;
    if (FUN2(VAR3) < 0)
        return NULL;
    if ((VAR3->VAR14 & VAR15))
    {
        if (!FUN3(VAR3, VAR6))
        {
            VAR11 |= VAR16;
        }
        else if (VAR13->VAR17)
        {
            return FUN4(VAR3, VAR13->VAR18, VAR13->VAR19, VAR4, VAR6, VAR7, VAR9, VAR10, VAR11);
        }
    }
    return FUN5(VAR3, VAR13->VAR19, VAR4, VAR6, VAR7, VAR9, VAR10, VAR11);
}