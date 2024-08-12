bool FUN1(VAR1 *VAR2)
{
    int VAR3;
    bool VAR4 = true;
    for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++)
    {
        uint32_t VAR6 = FUN2(VAR2->VAR7[VAR3]);
        uint64_t VAR8 = VAR2->VAR9[VAR3];
        const VAR10 *VAR11;
        VAR11 = FUN3(VAR2->VAR12, VAR6);
        if (!VAR11)
        {
            VAR4 = false;
            continue;
        }
        if (VAR11->VAR13 & VAR14)
        {
            continue;
        }
        FUN4(&VAR2->VAR15, VAR11, VAR8);
        if (FUN5(&VAR2->VAR15, VAR11) != VAR8)
        {
            VAR4 = false;
        }
    }
    return VAR4;
}