VAR1 *FUN1(const int *VAR2)
{
    VAR1 *VAR3;
    int VAR4;
    for (VAR4 = 0; VAR2[VAR4] != -1; VAR4++)
        ;
    VAR3 = FUN2(sizeof(*VAR3));
    if (!VAR3)
        return NULL;
    if (VAR4)
    {
        VAR3->VAR3 = FUN3(sizeof(*VAR3->VAR3) * VAR4);
        if (!VAR3->VAR3)
        {
            FUN4(&VAR3);
            return NULL;
        }
    }
    VAR3->VAR5 = VAR4;
    memcpy(VAR3->VAR3, VAR2, sizeof(*VAR3->VAR3) * VAR4);
    return VAR3;
}