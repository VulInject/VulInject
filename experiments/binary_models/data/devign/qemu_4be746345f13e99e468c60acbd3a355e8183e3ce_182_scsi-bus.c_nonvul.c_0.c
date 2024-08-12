void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    FUN2(VAR2->VAR5->VAR6, VAR2->VAR7, VAR2->VAR8);
    if (VAR4)
    {
        FUN3(&VAR2->VAR9, VAR4);
    }
    if (VAR2->VAR10)
    {
        return;
    }
    FUN4(VAR2);
    FUN5(VAR2);
    VAR2->VAR10 = true;
    if (VAR2->VAR11)
    {
        FUN6(VAR2->VAR11);
    }
}