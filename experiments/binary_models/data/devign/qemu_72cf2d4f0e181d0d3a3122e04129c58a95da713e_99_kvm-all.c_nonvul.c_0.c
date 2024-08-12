struct VAR1 *FUN1(VAR2 *VAR3, target_ulong VAR4)
{
    struct VAR1 *VAR5;
    FUN2(VAR5, &VAR3->VAR6->VAR7, VAR8)
    {
        if (VAR5->VAR4 == VAR4)
            return VAR5;
    }
    return NULL;
}