static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    int VAR10, VAR11;
    if (FUN2(VAR2->VAR12, VAR2->VAR13, 0, VAR2) || VAR2->VAR14 < 0)
        return -1;
    if (!VAR6->VAR15 && (VAR10 = FUN3(VAR2, VAR6, &VAR6->VAR15)) < 0)
        return VAR10;
    VAR9 = VAR6->VAR15;
    VAR6->VAR15 = VAR9->VAR16;
    VAR9->VAR16 = NULL;
    if (VAR9->VAR17 != VAR2->VAR12 || VAR9->VAR18 != VAR2->VAR13 || VAR9->VAR14 != VAR2->VAR14)
    {
        FUN4(&VAR9->VAR19[0]);
        FUN5(VAR9);
        VAR6->VAR20 = 0;
        if ((VAR10 = FUN3(VAR2, VAR6, &VAR9)) < 0)
            return VAR10;
    }
    VAR9->VAR21++;
    VAR4->VAR7 = VAR9;
    VAR4->VAR22 = VAR23;
    VAR4->VAR24 = VAR4->VAR25;
    VAR4->VAR26 = VAR2->VAR27 ? VAR2->VAR27->VAR28 : VAR29;
    for (VAR11 = 0; VAR11 < FUN6(VAR9->VAR25); VAR11++)
    {
        VAR4->VAR19[VAR11] = VAR9->VAR19[VAR11];
        VAR4->VAR25[VAR11] = VAR9->VAR25[VAR11];
        VAR4->VAR30[VAR11] = VAR9->VAR30[VAR11];
    }
    return 0;
}