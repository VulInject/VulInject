static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    int VAR7;
    VAR6 = FUN2(VAR2);
    if (VAR6 == NULL)
    {
        fprintf(VAR8, "");
        return;
    }
    if (VAR4->VAR2.VAR9 > sizeof(union VAR10))
    {
        fprintf(VAR8, "", VAR4->VAR2.VAR9);
        return;
    }
    if (FUN3(&VAR2->VAR11, VAR4->VAR2.VAR12, &VAR6->VAR13, VAR4->VAR2.VAR9))
    {
        fprintf(VAR8, "");
        FUN4(VAR6);
    }
    memcpy(&VAR6->VAR4, VAR4, sizeof(VAR3));
    if (VAR4->VAR2.VAR14 == VAR15)
    {
        VAR7 = FUN5(VAR2, VAR6);
    }
    else
    {
        VAR7 = FUN6(VAR2, VAR6);
    }
    if (VAR7)
    {
        FUN7(VAR6);
    }
}