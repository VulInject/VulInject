static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2);
    VAR4->VAR5 = FUN3(VAR6, VAR7, NULL, VAR4);
    FUN4(VAR4->VAR5, 96 * VAR8, 16 * VAR8);
    return 0;
}