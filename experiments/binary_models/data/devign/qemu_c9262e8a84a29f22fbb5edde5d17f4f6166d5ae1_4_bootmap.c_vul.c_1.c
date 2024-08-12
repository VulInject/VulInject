static VAR1 *FUN1(void)
{
    VAR2 *VAR3 = (VAR2 *)VAR4;
    uint32_t VAR5 = FUN2();
    int VAR6;
    if (!VAR5)
    {
        return NULL;
    }
    FUN3(VAR5, VAR4, "");
    if (!FUN4(VAR3))
    {
        FUN5("");
        return NULL;
    }
    for (VAR6 = 1; VAR6 < VAR7; VAR6++)
    {
        if (VAR3[VAR6].VAR8 == VAR9)
        {
            if (FUN6(&VAR3[VAR6].VAR10.VAR11))
            {
                return &VAR3[VAR6].VAR10.VAR11;
            }
        }
    }
    FUN5("");
    return NULL;
}