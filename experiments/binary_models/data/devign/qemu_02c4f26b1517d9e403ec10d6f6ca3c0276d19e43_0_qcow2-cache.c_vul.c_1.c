VAR1 *FUN1(VAR2 *VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR3->VAR7;
    VAR1 *VAR8;
    int VAR9;
    VAR8 = FUN2(sizeof(*VAR8));
    VAR8->VAR10 = VAR4;
    VAR8->VAR11 = FUN2(sizeof(*VAR8->VAR11) * VAR4);
    for (VAR9 = 0; VAR9 < VAR8->VAR10; VAR9++)
    {
        VAR8->VAR11[VAR9].VAR12 = FUN3(VAR3->VAR13, VAR6->VAR14);
        if (VAR8->VAR11[VAR9].VAR12 == NULL)
        {
            goto VAR15;
        }
    }
    return VAR8;
VAR15:
    for (VAR9 = 0; VAR9 < VAR8->VAR10; VAR9++)
    {
        FUN4(VAR8->VAR11[VAR9].VAR12);
    }
    FUN5(VAR8->VAR11);
    FUN5(VAR8);
    return NULL;
}