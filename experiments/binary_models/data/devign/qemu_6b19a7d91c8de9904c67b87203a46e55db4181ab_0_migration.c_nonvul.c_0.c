static bool FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = NULL;
    bool VAR7[VAR8] = {0}, VAR9;
    int VAR10;
    if (!FUN2(&VAR2->VAR11, VAR4))
    {
        return false;
    }
    for (VAR10 = 0; VAR10 < VAR8; VAR10++)
    {
        if (VAR2->VAR12[VAR10])
        {
            VAR6 = FUN3(VAR6, VAR10, true);
        }
    }
    VAR9 = FUN4(VAR7, VAR6, VAR4);
    FUN5(VAR6);
    return VAR9;
}