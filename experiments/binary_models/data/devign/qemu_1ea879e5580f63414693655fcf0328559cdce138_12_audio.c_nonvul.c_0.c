static VAR1 *FUN1(VAR2 *VAR3, struct VAR4 *VAR5)
{
    VAR1 *VAR6;
    for (VAR6 = VAR3->VAR7.VAR8; VAR6; VAR6 = VAR6->VAR9.VAR10)
    {
        if (FUN2(&VAR6->VAR11.VAR12, VAR5))
        {
            return VAR6;
        }
    }
    return NULL;
}