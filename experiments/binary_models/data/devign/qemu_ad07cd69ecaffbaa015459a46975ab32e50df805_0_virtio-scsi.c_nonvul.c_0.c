static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    if (VAR6->VAR7)
    {
        FUN3(VAR2);
        if (!VAR6->VAR8)
        {
            return;
        }
    }
    FUN4(VAR6, VAR4);
}