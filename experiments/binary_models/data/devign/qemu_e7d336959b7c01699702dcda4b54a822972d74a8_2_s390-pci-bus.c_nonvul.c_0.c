VAR1 *FUN1(uint32_t VAR2)
{
    VAR1 *VAR3;
    int VAR4;
    int VAR5 = 0;
    VAR6 *VAR7 = FUN2();
    for (VAR4 = 0; VAR4 < VAR8; VAR4++)
    {
        VAR3 = &VAR7->VAR3[VAR4];
        if (VAR3->VAR9 == 0)
        {
            continue;
        }
        if (VAR5 == VAR2)
        {
            return VAR3;
        }
        VAR5++;
    }
    return NULL;
}