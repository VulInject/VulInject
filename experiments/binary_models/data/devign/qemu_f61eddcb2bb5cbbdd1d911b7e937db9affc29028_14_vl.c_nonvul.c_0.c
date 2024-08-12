static void FUN1(int VAR1)
{
    struct VAR2 *VAR3 = FUN2(VAR1);
    if (!VAR3->VAR4)
        FUN3("", VAR1);
    FUN4(FUN5(VAR3));
}