static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    VAR6->VAR7 = true;
    FUN4(VAR2, &VAR4->VAR8, sizeof(VAR4->VAR8), VAR9);
}