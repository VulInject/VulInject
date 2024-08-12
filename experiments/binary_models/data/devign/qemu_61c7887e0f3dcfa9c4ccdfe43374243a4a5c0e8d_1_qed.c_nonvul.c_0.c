static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR3 *VAR5 = NULL;
    int VAR6;
    FUN2(VAR2);
    FUN3(VAR2);
    VAR6 = FUN4(VAR2, NULL, VAR2->VAR7, &VAR5);
    if (VAR5)
    {
        FUN5(VAR4, VAR5);
        FUN6(VAR4, "");
        return;
    }
    else if (VAR6 < 0)
    {
        FUN7(VAR4, -VAR6, "");
        return;
    }
}