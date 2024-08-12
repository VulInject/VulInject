static void FUN1(void *VAR1, int VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR1;
    FUN2(VAR5->VAR6, VAR2, VAR5->VAR7[VAR2].VAR8);
    FUN3(FUN4(VAR5, VAR2), VAR3);
}