static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR1 *VAR8 = VAR6->VAR9[0];
    const VAR10 *VAR11 = VAR6->VAR12;
    const int VAR13 = FUN2(VAR2->VAR14);
    const int VAR15 = VAR11->VAR16;
    int VAR17;
    VAR18 *VAR19[VAR20];
    memcpy(VAR19, VAR4->VAR21, VAR13 * sizeof(VAR19[0]));
    if (VAR15 > VAR13)
    {
        if (VAR15 > FUN3(VAR4->VAR22))
        {
            VAR18 **VAR23 = FUN4(VAR15 * sizeof(*VAR4->VAR21));
            if (!VAR23)
            {
                FUN5(VAR4);
                return FUN6(VAR24);
            }
            if (VAR4->VAR21 == VAR4->VAR22)
            {
                VAR4->VAR21 = VAR23;
            }
            else
            {
                VAR4->VAR21 = VAR23;
                FUN7(VAR4->VAR21);
            }
        }
        else if (VAR4->VAR21 != VAR4->VAR22)
        {
            FUN7(VAR4->VAR21);
            VAR4->VAR21 = VAR4->VAR22;
        }
    }
    for (VAR17 = 0; VAR17 < VAR15; VAR17++)
    {
        VAR4->VAR21[VAR11->VAR25[VAR17].VAR26] = VAR19[VAR11->VAR25[VAR17].VAR27];
    }
    if (VAR4->VAR22 != VAR4->VAR21)
        memcpy(VAR4->VAR22, VAR4->VAR21, FUN8(FUN3(VAR4->VAR22), VAR15) * sizeof(VAR4->VAR22[0]));
    return FUN9(VAR8, VAR4);
}