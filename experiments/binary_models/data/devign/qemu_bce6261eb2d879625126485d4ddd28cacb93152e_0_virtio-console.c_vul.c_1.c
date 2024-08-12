static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR9 *VAR10 = FUN4(VAR2);
    if (VAR6->VAR11 == 0 && !VAR10->VAR12)
    {
        FUN5(VAR4, ""
                         "");
        return;
    }
    if (VAR8->VAR13)
    {
        VAR8->VAR13->VAR14 = 1;
        FUN6(VAR8->VAR13, VAR15, VAR16, VAR17, VAR8);
    }
}