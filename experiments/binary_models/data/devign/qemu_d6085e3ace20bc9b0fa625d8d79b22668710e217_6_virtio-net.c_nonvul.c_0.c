static int FUN1(VAR1 *VAR2)
{
    if (!FUN2(VAR2))
        return 0;
    VAR2->VAR3 = FUN3(FUN4(VAR2->VAR4)->VAR5);
    return VAR2->VAR3;
}