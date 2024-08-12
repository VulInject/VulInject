static int FUN1(VAR1 *VAR2)
{
    int VAR3 = 0;
    FUN2(&VAR2->VAR4);
    FUN3(&VAR2->VAR5);
    if (VAR2->VAR6 != -1)
    {
        close(VAR2->VAR6);
    }
    if (VAR2->VAR7)
    {
        FUN4();
    }
    return VAR3;
}