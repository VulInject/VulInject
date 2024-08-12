VAR1 *FUN1(BlockInterfaceType VAR2, int VAR3, int VAR4)
{
    VAR1 *VAR5;
    FUN2(VAR5, &VAR6, VAR7)
    {
        if (VAR5->VAR2 == VAR2 && VAR5->VAR3 == VAR3 && VAR5->VAR4 == VAR4)
            return VAR5;
    }
    return NULL;
}