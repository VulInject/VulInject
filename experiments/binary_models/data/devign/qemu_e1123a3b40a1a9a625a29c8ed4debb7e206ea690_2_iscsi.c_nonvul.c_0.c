static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    struct VAR6 *VAR7 = VAR4->VAR7;
    FUN2(VAR2);
    if (FUN3(VAR7))
    {
        FUN4(VAR7);
    }
    FUN5(VAR7);
    FUN6(VAR4->VAR8);
    FUN7(VAR4);
    memset(VAR4, 0, sizeof(VAR3));
}