static VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4)
{
    VAR5 *VAR6 = FUN2(VAR3);
    VAR7 *VAR8 = FUN3(VAR6->VAR9);
    FUN4(&VAR4, VAR10);
    if (!FUN5(VAR6))
    {
        FUN6(&VAR4, VAR11);
        FUN6(&VAR4, VAR12);
        FUN6(&VAR4, VAR13);
        FUN6(&VAR4, VAR14);
        FUN6(&VAR4, VAR15);
        FUN6(&VAR4, VAR16);
        FUN6(&VAR4, VAR17);
        FUN6(&VAR4, VAR18);
    }
    if (!FUN5(VAR6) || !FUN7(VAR6))
    {
        FUN6(&VAR4, VAR19);
        FUN6(&VAR4, VAR20);
    }
    if (!FUN8(VAR8->VAR21))
    {
        return VAR4;
    }
    return FUN9(FUN8(VAR8->VAR21), VAR4);
}