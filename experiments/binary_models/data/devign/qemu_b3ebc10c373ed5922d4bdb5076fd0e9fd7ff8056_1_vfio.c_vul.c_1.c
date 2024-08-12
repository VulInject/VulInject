static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = VAR3->VAR5;
    int VAR6 = VAR3 - VAR5->VAR7;
    if (!FUN2(&VAR3->VAR8))
    {
        return;
    }
    FUN3("", VAR9, VAR5->VAR10.VAR11, VAR5->VAR10.VAR12, VAR5->VAR10.VAR13, VAR5->VAR10.VAR14, VAR6);
    if (VAR5->VAR8 == VAR15)
    {
        FUN4(&VAR5->VAR16, VAR6);
    }
    else if (VAR5->VAR8 == VAR17)
    {
        FUN5(&VAR5->VAR16, VAR6);
    }
    else
    {
        FUN6("");
    }
}