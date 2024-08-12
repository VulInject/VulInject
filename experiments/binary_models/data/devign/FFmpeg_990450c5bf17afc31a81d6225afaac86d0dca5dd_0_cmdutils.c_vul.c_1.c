static int FUN1(VAR1 **VAR2, VAR3 *VAR4, VAR1 **VAR5)
{
    VAR1 *VAR6 = FUN2(sizeof(*VAR6));
    int VAR7, VAR8;
    const int VAR9 = VAR10[VAR4->VAR11].VAR12[0].VAR13 + 1;
    int VAR14, VAR15;
    int VAR16 = 32;
    int VAR17 = VAR4->VAR18, VAR19 = VAR4->VAR20;
    if (!VAR6)
        return FUN3(VAR21);
    if (!(VAR4->VAR22 & VAR23))
    {
        VAR17 += 2 * VAR16;
        VAR19 += 2 * VAR16;
    }
    FUN4(VAR4, &VAR17, &VAR19);
    if ((VAR8 = FUN5(VAR6->VAR24, VAR6->VAR25, VAR17, VAR19, VAR4->VAR11, 32)) < 0)
    {
        FUN6(&VAR6);
        return VAR8;
    }
    memset(VAR6->VAR24[0], 128, VAR8);
    FUN7(VAR4->VAR11, &VAR14, &VAR15);
    for (VAR7 = 0; VAR7 < FUN8(VAR6->VAR26); VAR7++)
    {
        const int VAR27 = VAR7 == 0 ? 0 : VAR14;
        const int VAR28 = VAR7 == 0 ? 0 : VAR15;
        if (VAR4->VAR22 & VAR23)
            VAR6->VAR26[VAR7] = VAR6->VAR24[VAR7];
        else
            VAR6->VAR26[VAR7] = VAR6->VAR24[VAR7] + FUN9((VAR6->VAR25[VAR7] * VAR16 >> VAR28) + (VAR9 * VAR16 >> VAR27), 32);
    }
    VAR6->VAR17 = VAR4->VAR18;
    VAR6->VAR19 = VAR4->VAR20;
    VAR6->VAR11 = VAR4->VAR11;
    VAR6->VAR2 = VAR2;
    *VAR5 = VAR6;
    return 0;
}