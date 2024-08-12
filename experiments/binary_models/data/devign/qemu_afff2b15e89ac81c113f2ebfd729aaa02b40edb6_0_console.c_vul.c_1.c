VAR1 *FUN1(VAR2 *VAR3, uint32_t VAR4)
{
    VAR5 *VAR6 = NULL;
    VAR7 *VAR8;
    uint32_t VAR9;
    int VAR10;
    for (VAR10 = 0; VAR10 < VAR11; VAR10++)
    {
        if (!VAR12[VAR10])
        {
            continue;
        }
        VAR8 = FUN2(FUN3(VAR12[VAR10]), "", &VAR6);
        if (FUN4(VAR8) != VAR3)
        {
            continue;
        }
        VAR9 = FUN5(FUN3(VAR12[VAR10]), "", &VAR6);
        if (VAR9 != VAR4)
        {
            continue;
        }
        return VAR12[VAR10];
    }
    return NULL;
}