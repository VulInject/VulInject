void FUN1(VAR1 *VAR2)
{
    FUN2(&VAR2->VAR3);
    FUN3(&VAR2->VAR4);
    VAR2->VAR5 = -1;
    VAR2->VAR6 = -1;
    if (VAR2->VAR7 == 0)
    {
        VAR2->VAR7 = 1024;
    }
    VAR2->VAR8 = (16 * 1024 * 1024);
    VAR2->VAR9 = FUN4(VAR2->VAR8);
}