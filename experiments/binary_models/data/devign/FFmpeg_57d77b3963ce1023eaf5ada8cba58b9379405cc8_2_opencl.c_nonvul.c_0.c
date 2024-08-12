int FUN1(const char *VAR1)
{
    int VAR2, VAR3 = 0;
    VAR4;
    if (VAR5.VAR6 >= VAR7)
    {
        FUN2(&VAR8, VAR9, "", VAR7);
        VAR3 = FUN3(VAR10);
        goto VAR11;
    }
    for (VAR2 = 0; VAR2 < VAR5.VAR6; VAR2++)
    {
        if (VAR5.VAR1[VAR2].VAR12 == VAR1)
        {
            FUN2(&VAR8, VAR13, "");
            goto VAR11;
        }
    }
    VAR5.VAR1[VAR5.VAR6].VAR12 = VAR1;
    VAR5.VAR1[VAR5.VAR6].VAR14 = 0;
    VAR5.VAR6++;
VAR11:
    VAR15;
    return VAR3;
}