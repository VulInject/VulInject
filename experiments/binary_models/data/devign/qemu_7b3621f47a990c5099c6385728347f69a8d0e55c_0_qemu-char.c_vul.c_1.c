static void FUN1(struct VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    FUN2(VAR2);
    VAR6 = FUN3(VAR4->VAR6);
    FUN4(VAR4->VAR6);
    close(VAR6);
    if (VAR4->VAR7)
    {
        FUN5(VAR4->VAR7);
        VAR4->VAR7 = 0;
    }
    FUN6(VAR4);
    FUN7(VAR2, VAR8);
}