static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int VAR9, int VAR10, int VAR11, int VAR12)
{
    int VAR13 = 2, VAR14, VAR15, VAR16, VAR17 = 0, VAR18, VAR19;
    int64_t VAR20 = 0;
    memset(VAR4->VAR21, 0, VAR4->VAR22 * (VAR10 + 2) * sizeof(*VAR4->VAR21));
    for (VAR16 = 0; VAR16 < VAR10; VAR16++)
    {
        for (VAR15 = 0; VAR15 < VAR9; VAR15++)
        {
            if (VAR4->VAR23[(VAR16)*VAR4->VAR22 + VAR15] < 0)
            {
                VAR4->VAR21[(VAR16 + 1) * VAR4->VAR22 + VAR15 + 1] |= VAR24;
                VAR4->VAR23[(VAR16)*VAR4->VAR22 + VAR15] = -VAR4->VAR23[(VAR16)*VAR4->VAR22 + VAR15];
            }
            VAR17 = FUN2(VAR17, VAR4->VAR23[(VAR16)*VAR4->VAR22 + VAR15]);
        }
    }
    if (VAR17 == 0)
    {
        VAR6->VAR25 = 0;
        VAR19 = 0;
    }
    else
    {
        VAR6->VAR25 = FUN3(VAR17) + 1 - VAR26;
        VAR19 = VAR6->VAR25 - 1;
    }
    FUN4(&VAR4->VAR27, VAR6->VAR23);
    for (VAR14 = 0; VAR19 >= 0; VAR14++)
    {
        VAR18 = 0;
        switch (VAR13)
        {
        case 0:
            FUN5(VAR4, VAR9, VAR10, VAR11, &VAR18, VAR19);
            break;
        case 1:
            FUN6(VAR4, VAR9, VAR10, &VAR18, VAR19);
            break;
        case 2:
            FUN7(VAR4, VAR9, VAR10, VAR11, &VAR18, VAR19);
            break;
        }
        VAR6->VAR28[VAR14].VAR29 = FUN8(&VAR4->VAR27, VAR6->VAR28[VAR14].VAR30, &VAR6->VAR28[VAR14].VAR31);
        VAR20 += (VAR32)VAR18 << (2 * VAR19);
        VAR6->VAR28[VAR14].VAR33 = VAR20;
        if (++VAR13 == 3)
        {
            VAR13 = 0;
            VAR19--;
        }
    }
    VAR6->VAR34 = VAR14;
    VAR6->VAR35 = VAR14;
    VAR6->VAR28[VAR14 - 1].VAR29 = FUN8(&VAR4->VAR27, VAR6->VAR28[VAR14 - 1].VAR30, &VAR6->VAR28[VAR14 - 1].VAR31);
}