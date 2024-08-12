static VAR1 *FUN1(VAR2 *VAR3)
{
    VAR4 *VAR5;
    FUN2(VAR5, &VAR3->VAR6, VAR7)
    {
        if (VAR5->VAR8 == &VAR9)
        {
            return VAR5->VAR10;
        }
    }
    return NULL;
}