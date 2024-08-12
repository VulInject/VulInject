static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    VAR7 *VAR8 = FUN2(VAR6);
    char *VAR9;
    int VAR10;
    VAR10 = FUN3(VAR6);
    if (VAR10)
    {
        return VAR10;
    }
    if (!VAR6->VAR2.VAR9)
    {
        VAR9 = FUN4(VAR6);
        if (!VAR9)
        {
            return -1;
        }
        VAR6->VAR2.VAR9 = VAR9;
    }
    VAR6->VAR11 = FUN5(VAR6->VAR12, &VAR6->VAR12);
    if (!VAR6->VAR11)
    {
        return -1;
    }
    FUN6(VAR6);
    return VAR8->FUN7(VAR6);
}