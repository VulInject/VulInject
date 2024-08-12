void FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR3 *VAR5, int VAR6, VAR3 *VAR7, int VAR8)
{
    VAR9 *VAR10 = (VAR9 *)VAR4;
    const VAR9 *VAR11 = (const VAR9 *)VAR5;
    VAR9 *VAR12 = (VAR9 *)VAR7;
    while (VAR6--)
    {
        FUN2(&VAR2->VAR13[1], VAR11, &VAR2->VAR14[VAR2->VAR15]);
        if (VAR8)
        {
            crypt(VAR2, 0, VAR16, VAR17);
            if (VAR12)
            {
                FUN2(&VAR2->VAR13[0], &VAR2->VAR13[0], VAR12);
                *VAR12 = *VAR11;
            }
            FUN2(VAR10, &VAR2->VAR13[0], &VAR2->VAR14[0]);
        }
        else
        {
            if (VAR12)
                FUN2(&VAR2->VAR13[1], &VAR2->VAR13[1], VAR12);
            crypt(VAR2, 2, VAR18, VAR19);
            FUN2(VAR10, &VAR2->VAR13[0], &VAR2->VAR14[0]);
            if (VAR12)
                *VAR12 = *VAR10;
        }
        VAR11++;
        VAR10++;
    }
}