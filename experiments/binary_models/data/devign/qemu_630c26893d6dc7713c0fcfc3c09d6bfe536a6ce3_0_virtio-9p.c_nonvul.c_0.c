static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6;
    if (VAR5)
    {
        VAR5 = -VAR7;
        goto VAR8;
    }
    FUN2(&VAR4->VAR9, &VAR4->VAR10);
    if (FUN3(VAR4->VAR9.VAR11))
    {
        VAR4->VAR12->VAR13.VAR14 = FUN4(VAR2, &VAR4->VAR12->VAR15);
        FUN5(VAR2, VAR4, VAR5);
    }
    else
    {
        if (VAR2->VAR16 == VAR17)
        {
            VAR6 = VAR4->VAR18;
            VAR6 &= ~(VAR19 | VAR20 | VAR21);
        }
        else
        {
            VAR6 = FUN6(VAR4->VAR18);
        }
        VAR4->VAR12->VAR13.VAR22 = FUN7(VAR2, &VAR4->VAR12->VAR15, VAR6);
        FUN8(VAR2, VAR4, VAR5);
    }
    return;
VAR8:
    FUN9(VAR2, VAR4->VAR23, VAR5);
    FUN10(VAR4);
}