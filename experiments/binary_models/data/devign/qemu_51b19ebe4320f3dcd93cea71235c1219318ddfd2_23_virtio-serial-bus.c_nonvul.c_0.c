static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    if (!FUN2(VAR2))
    {
        return;
    }
    for (;;)
    {
        VAR6 = FUN3(VAR2, sizeof(VAR5));
        if (!VAR6)
        {
            break;
        }
        FUN4(VAR2, VAR6, 0);
        FUN5(VAR6);
    }
    FUN6(VAR4, VAR2);
}