FUN1(void)
{
    VAR1 *VAR2 = FUN2(sizeof(VAR1));
    int VAR3;
    if (!VAR2)
        return NULL;
    VAR3 = FUN3(&VAR2->VAR4, "", &VAR5, NULL);
    if (VAR3 < 0)
    {
        FUN4(VAR2);
        return NULL;
    }
    return VAR2;
}