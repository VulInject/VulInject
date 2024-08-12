static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    if (VAR8->VAR9.VAR10 && FUN3(FUN4(VAR4), VAR11))
    {
        if (FUN3(FUN4(VAR4), VAR12))
        {
            FUN5(VAR2, VAR4);
        }
        else
        {
            FUN6(VAR2, &VAR8->VAR9, VAR4, VAR6);
        }
    }
    else if (FUN3(FUN4(VAR4), VAR13))
    {
        FUN7(VAR2, &VAR8->VAR14, VAR4, VAR6);
    }
    else if (FUN3(FUN4(VAR4), VAR15))
    {
        if (VAR8->VAR16)
        {
            FUN8(VAR2, &VAR8->VAR17, VAR4, VAR6);
        }
        else
        {
            FUN9(VAR2, &VAR8->VAR18, VAR4, VAR6);
        }
    }
    else
    {
        FUN10(VAR6, ""
                         "",
                   FUN11(FUN4(VAR4)));
    }
}