void FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4, *VAR5;
    struct VAR6 *VAR7, *VAR8;
    if (VAR2->VAR9)
    {
        FUN2(VAR2);
    }
    FUN3(VAR2->VAR10);
    FUN4(VAR4, &VAR2->VAR11, VAR12, VAR5)
    {
        FUN4(VAR7, &VAR4->VAR13, VAR12, VAR8)
        {
            FUN5(VAR7, VAR12);
            FUN3(VAR7);
        }
        FUN5(VAR4, VAR12);
        FUN3(VAR4);
    }
}