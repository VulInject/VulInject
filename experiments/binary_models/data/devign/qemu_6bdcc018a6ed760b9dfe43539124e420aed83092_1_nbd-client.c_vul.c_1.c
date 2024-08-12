static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    int VAR7 = FUN3(VAR6, VAR4->VAR8);
    VAR6->VAR9[VAR7] = NULL;
    VAR6->VAR10--;
    FUN4(&VAR6->VAR11);
    if (VAR6->VAR12)
    {
        FUN5(VAR6->VAR12);
    }
}