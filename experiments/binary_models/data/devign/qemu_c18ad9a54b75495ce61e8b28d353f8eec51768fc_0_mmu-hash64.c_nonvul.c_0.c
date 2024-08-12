void FUN1(VAR1 *VAR2, void *VAR3, int VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = &VAR2->VAR8;
    VAR5 *VAR9 = NULL;
    FUN2(FUN3(VAR2));
    if (VAR3)
    {
        VAR8->VAR10 = VAR3;
    }
    else
    {
        VAR8->VAR10 = VAR11;
    }
    FUN4(VAR2, (VAR12)(VAR13)VAR3 | (VAR4 - 18), &VAR9);
    if (VAR9)
    {
        FUN5(VAR6, VAR9);
        return;
    }
    VAR8->VAR14 = -1;
    if (FUN6())
    {
        if (FUN7(VAR2) < 0)
        {
            FUN8(VAR6, "");
        }
    }
}