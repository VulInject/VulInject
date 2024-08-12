static int FUN1(VAR1 *VAR2)
{
    VAR2->VAR3 = FUN2(&VAR2->VAR4);
    FUN3(&VAR2->VAR4, 4);
    if (VAR2->VAR5->VAR6 & VAR7)
        FUN4(VAR2->VAR5, VAR8, "", VAR2->VAR3);
    VAR2->VAR9 = 1;
    return 0;
}