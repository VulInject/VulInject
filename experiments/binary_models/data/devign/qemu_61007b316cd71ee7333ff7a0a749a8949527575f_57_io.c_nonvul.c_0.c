int FUN1(VAR1 *VAR2, int64_t VAR3, const VAR4 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR8;
    int VAR9;
    if (!VAR8)
    {
        return -VAR10;
    }
    if (!VAR8->VAR11)
    {
        return -VAR12;
    }
    VAR9 = FUN2(VAR2, VAR3, VAR6);
    if (VAR9 < 0)
    {
        return VAR9;
    }
    assert(FUN3(&VAR2->VAR13));
    return VAR8->FUN1(VAR2, VAR3, VAR5, VAR6);
}