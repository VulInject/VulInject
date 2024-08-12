bool FUN1(VAR1 *VAR2)
{
    int VAR3;
    bool VAR4 = true;
    for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++)
    {
        uint32_t VAR6 = FUN2(VAR2->VAR7[VAR3]);
        const VAR8 *VAR9;
        VAR9 = FUN3(VAR2->VAR10, VAR6);
        if (!VAR9)
        {
            VAR4 = false;
            continue;
        }
        if (VAR9->VAR11 & VAR12)
        {
            continue;
        }
        VAR2->VAR13[VAR3] = FUN4(&VAR2->VAR14, VAR9);
    }
    return VAR4;
}