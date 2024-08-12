static void FUN1(void *VAR1, VAR2 *VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR6 *VAR7 = VAR5->VAR7;
    FUN2(VAR5);
    if (!FUN3(&VAR7->VAR8, -1))
        FUN4(VAR7);
}