VAR1 FUN1(VAR2 *VAR3)
{
    int64_t VAR4;
    int64_t VAR5;
    if (!VAR3->VAR6->VAR7)
    {
        return -1;
    }
    FUN2(&VAR3->VAR8);
    if (!VAR3->VAR9)
    {
        FUN3(&VAR3->VAR8);
        return -1;
    }
    VAR5 = VAR3->VAR9->VAR5;
    FUN3(&VAR3->VAR8);
    VAR4 = VAR5 - FUN4(VAR3->VAR6->VAR10);
    if (VAR4 <= 0)
    {
        return 0;
    }
    return VAR4;
}