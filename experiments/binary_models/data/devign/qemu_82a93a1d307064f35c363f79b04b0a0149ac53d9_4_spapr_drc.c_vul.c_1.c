void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    FUN2(FUN3(VAR2));
    if (VAR2->VAR7 != VAR8)
    {
        FUN4(FUN3(VAR2));
        VAR2->VAR9 = true;
        return;
    }
    if (FUN5(VAR2) != VAR10 && VAR2->VAR11 != VAR12)
    {
        FUN6(FUN3(VAR2));
        VAR2->VAR9 = true;
        return;
    }
    if (VAR2->VAR13)
    {
        VAR2->VAR9 = true;
        FUN7(FUN3(VAR2));
        return;
    }
    FUN8(VAR2);
}