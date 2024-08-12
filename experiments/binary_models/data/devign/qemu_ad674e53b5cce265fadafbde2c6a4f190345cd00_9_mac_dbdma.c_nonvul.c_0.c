static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    if (FUN2(VAR2))
        goto VAR5;
    VAR4->VAR6 = FUN3(VAR2->VAR7[VAR8]);
    FUN4(VAR2);
    FUN5(VAR2);
    FUN6(VAR2);
VAR5:
    FUN7(VAR9);
}