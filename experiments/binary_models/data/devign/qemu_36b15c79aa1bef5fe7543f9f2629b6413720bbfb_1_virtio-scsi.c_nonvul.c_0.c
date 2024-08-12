static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR1 *VAR6 = FUN2(VAR3, VAR5);
    if (!FUN3(VAR5, &VAR6->VAR7))
    {
        FUN4(VAR6);
        return NULL;
    }
    return VAR6;
}