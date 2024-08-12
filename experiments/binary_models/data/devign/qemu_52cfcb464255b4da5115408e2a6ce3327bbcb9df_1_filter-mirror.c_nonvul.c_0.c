static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    if (!VAR6->VAR7)
    {
        FUN3(VAR4, ""
                         "");
        return;
    }
    VAR6->VAR8 = FUN4(VAR6->VAR7);
    if (VAR6->VAR8 == NULL)
    {
        FUN5(VAR4, VAR9, "", VAR6->VAR7);
        return;
    }
    if (FUN6(VAR6->VAR8) != 0)
    {
        FUN3(VAR4, VAR10, VAR6->VAR7);
        return;
    }
}