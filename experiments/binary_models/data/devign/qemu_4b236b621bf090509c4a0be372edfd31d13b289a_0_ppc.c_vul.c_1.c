VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4)
{
    VAR5 *VAR6 = FUN2(VAR3);
    VAR7 *VAR8;
    VAR8 = FUN3(sizeof(VAR7));
    VAR3->VAR8 = VAR8;
    VAR8->VAR9 = VAR10;
    if (VAR3->VAR11 & VAR12)
    {
        VAR8->VAR9 |= VAR13;
    }
    VAR8->VAR14 = FUN4(VAR15, &VAR16, VAR6);
    if (0)
    {
        VAR8->VAR17 = FUN4(VAR15, &VAR18, VAR6);
    }
    else
    {
        VAR8->VAR17 = NULL;
    }
    FUN5(VAR3, VAR4);
    return &VAR19;
}