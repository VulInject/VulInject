static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = FUN2(&(VAR2->VAR5), VAR3);
    VAR4 *VAR6 = FUN2(&(VAR2->VAR5), 0);
    if (VAR5->VAR7 < 0)
        free(VAR5->VAR8);
    FUN3(&(VAR2->VAR5), VAR3);
    FUN4(VAR2, VAR3, -1);
    if (VAR2->VAR9 && VAR6 != (VAR4 *)VAR2->VAR5.VAR10)
        VAR2->VAR9 = FUN2(&(VAR2->VAR5), VAR2->VAR9 - VAR6);
    return 0;
}