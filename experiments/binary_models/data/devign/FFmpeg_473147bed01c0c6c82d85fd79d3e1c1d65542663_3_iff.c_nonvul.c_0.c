static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    const VAR10 *VAR11 = VAR6->VAR3;
    unsigned VAR12 = VAR6->VAR13;
    const VAR10 *VAR14 = VAR11 + VAR12;
    unsigned VAR15, VAR16;
    if (VAR2->FUN2(VAR2, &VAR8->VAR17) < 0)
    {
        FUN3(VAR2, VAR18, "");
        return -1;
    }
    for (VAR15 = 0; VAR15 < VAR2->VAR19; VAR15++)
    {
        VAR10 *VAR20 = &VAR8->VAR17.VAR3[0][VAR15 * VAR8->VAR17.VAR21[0]];
        memset(VAR20, 0, VAR2->VAR22 == VAR23 ? VAR2->VAR24 : (VAR2->VAR24 * 4));
        for (VAR16 = 0; VAR16 < VAR2->VAR25 && VAR11 < VAR14; VAR16++)
        {
            if (VAR2->VAR22 == VAR23)
            {
                FUN4(VAR20, VAR11, FUN5(VAR8->VAR26, VAR14 - VAR11), VAR2->VAR25, VAR16);
            }
            else
            {
                FUN6((VAR27 *)VAR20, VAR11, FUN5(VAR8->VAR26, VAR14 - VAR11), VAR2->VAR25, VAR16);
            }
            VAR11 += VAR8->VAR26;
        }
    }
    *VAR4 = sizeof(VAR28);
    *(VAR28 *)VAR3 = VAR8->VAR17;
    return VAR12;
}