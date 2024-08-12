static int FUN1(VAR1 *VAR2)
{
    unsigned int VAR3;
    VAR4 *const VAR5 = &VAR2->VAR5;
    VAR3 = FUN2(&VAR5->VAR6, 15);
    if (VAR3)
        return -1;
    FUN3(&VAR5->VAR6, 16);
    VAR2->VAR7 = FUN4(&VAR5->VAR6, 4);
    VAR5->VAR8 = FUN4(&VAR5->VAR6, 5);
    while (FUN5(&VAR5->VAR6) != 0)
    {
        FUN3(&VAR5->VAR6, 8);
    }
    if (VAR5->VAR8 == 0)
        return -1;
    VAR2->VAR9 = 0;
    VAR2->VAR10 = 0;
    return 0;
}