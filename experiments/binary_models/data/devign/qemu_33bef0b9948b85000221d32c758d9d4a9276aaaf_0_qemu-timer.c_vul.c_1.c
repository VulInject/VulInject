bool FUN1(VAR1 *VAR2)
{
    int64_t VAR3;
    if (!FUN2(&VAR2->VAR4))
    {
        return false;
    }
    FUN3(&VAR2->VAR5);
    if (!VAR2->VAR4)
    {
        FUN4(&VAR2->VAR5);
        return false;
    }
    VAR3 = VAR2->VAR4->VAR3;
    FUN4(&VAR2->VAR5);
    return VAR3 < FUN5(VAR2->VAR6->VAR7);
}