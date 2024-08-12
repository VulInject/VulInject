static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4, *VAR5;
    VAR6 *VAR7, *VAR8;
    FUN2(VAR4, &VAR2->VAR9, VAR10, VAR5)
    {
        FUN2(VAR7, &VAR4->VAR11, VAR10, VAR8)
        {
            FUN3(VAR7);
            FUN4(VAR7);
        }
        FUN5(VAR4);
    }
}