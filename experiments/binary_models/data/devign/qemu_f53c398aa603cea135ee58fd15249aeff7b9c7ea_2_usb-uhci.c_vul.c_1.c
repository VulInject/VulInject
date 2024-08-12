static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6, *VAR7;
    FUN2(VAR6, &VAR2->VAR8, VAR9, VAR7)
    {
        if (VAR6->VAR10.VAR11 == NULL || VAR6->VAR10.VAR11->VAR4 != VAR4)
        {
            continue;
        }
        FUN3(VAR2, VAR6);
        FUN4(VAR2, VAR6);
    }
}