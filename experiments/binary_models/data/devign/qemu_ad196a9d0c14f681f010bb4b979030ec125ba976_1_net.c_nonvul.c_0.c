void FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4)
{
    struct VAR5 *VAR6;
    if (!VAR7)
    {
        if (VAR2)
        {
            FUN2(VAR2, "");
        }
        else
        {
            VAR6 = FUN3(sizeof(*VAR6));
            FUN4(VAR6->VAR8, sizeof(VAR6->VAR8), VAR3);
            VAR6->VAR9 = VAR10;
            VAR6->VAR11 = VAR12;
            VAR12 = VAR6;
        }
        return;
    }
    if (!strcmp(VAR3, ""))
    {
        FUN5(VAR2, VAR4);
        return;
    }
    FUN6(VAR2, VAR3);
}