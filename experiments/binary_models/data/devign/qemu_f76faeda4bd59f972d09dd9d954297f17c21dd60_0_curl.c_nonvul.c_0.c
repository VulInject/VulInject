static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR1 *VAR6 = NULL;
    int VAR7, VAR8;
    do
    {
        for (VAR7 = 0; VAR7 < VAR9; VAR7++)
        {
            for (VAR8 = 0; VAR8 < VAR10; VAR8++)
                if (VAR5->VAR11[VAR7].VAR12[VAR8])
                    continue;
            if (VAR5->VAR11[VAR7].VAR13)
                continue;
            VAR6 = &VAR5->VAR11[VAR7];
            VAR6->VAR13 = 1;
            break;
        }
        if (!VAR6)
        {
            FUN2(FUN3(VAR3), true);
        }
    } while (!VAR6);
    if (!VAR6->VAR14)
    {
        VAR6->VAR14 = FUN4();
        if (!VAR6->VAR14)
        {
            return NULL;
        }
        FUN5(VAR6->VAR14, VAR15, VAR5->VAR16);
        FUN5(VAR6->VAR14, VAR17, (long)VAR5->VAR18);
        if (VAR5->VAR19)
        {
            FUN5(VAR6->VAR14, VAR20, VAR5->VAR19);
        }
        FUN5(VAR6->VAR14, VAR21, (long)VAR5->VAR22);
        FUN5(VAR6->VAR14, VAR23, (void *)VAR24);
        FUN5(VAR6->VAR14, VAR25, (void *)VAR6);
        FUN5(VAR6->VAR14, VAR26, (void *)VAR6);
        FUN5(VAR6->VAR14, VAR27, 1);
        FUN5(VAR6->VAR14, VAR28, 1);
        FUN5(VAR6->VAR14, VAR29, 1);
        FUN5(VAR6->VAR14, VAR30, VAR6->VAR31);
        FUN5(VAR6->VAR14, VAR32, 1);
        FUN5(VAR6->VAR14, VAR33, VAR34);
        FUN5(VAR6->VAR14, VAR35, VAR34);
        FUN5(VAR6->VAR14, VAR36, 1);
    }
    VAR6->VAR5 = VAR5;
    return VAR6;
}