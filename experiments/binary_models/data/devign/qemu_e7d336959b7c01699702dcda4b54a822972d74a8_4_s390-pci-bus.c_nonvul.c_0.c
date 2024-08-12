VAR1 *FUN1(uint32_t VAR2)
{
    VAR1 *VAR3;
    int VAR4;
    VAR5 *VAR6 = FUN2();
    if (!VAR2)
    {
        return NULL;
    }
    for (VAR4 = 0; VAR4 < VAR7; VAR4++)
    {
        VAR3 = &VAR6->VAR3[VAR4];
        if (VAR3->VAR2 == VAR2)
        {
            return VAR3;
        }
    }
    return NULL;
}