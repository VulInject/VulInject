static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR3 = FUN2(VAR2->VAR4->VAR4, VAR5);
    if (VAR3)
    {
        fprintf(VAR6, "", VAR7, strerror(VAR3));
        FUN3(1);
    }
    if (!FUN4(VAR2))
    {
        FUN5(VAR2->VAR8);
        FUN6(0);
        FUN7(VAR2->VAR8);
    }
}