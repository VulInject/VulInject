static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    VAR9 *VAR10 = FUN3(VAR8);
    VAR11 *VAR12 = FUN4(VAR4);
    if (VAR10->VAR13 && !VAR10->VAR14)
    {
        if (FUN5(VAR12->VAR15.VAR16, VAR17, VAR6))
        {
            return;
        }
        FUN6(VAR12->VAR15.VAR16, VAR10->VAR18);
    }
    if (FUN7(VAR8, VAR19))
    {
        FUN8(VAR10, VAR12, VAR20, VAR21);
    }
}