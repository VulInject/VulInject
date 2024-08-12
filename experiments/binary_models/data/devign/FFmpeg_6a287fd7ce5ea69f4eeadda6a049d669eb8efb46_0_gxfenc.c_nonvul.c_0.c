static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    AVPacket VAR10;
    int VAR11;
    for (VAR11 = 0; VAR11 < VAR2->VAR12; VAR11++)
    {
        VAR13 *VAR14 = VAR2->VAR15[VAR11];
        VAR16 *VAR17 = &VAR8->VAR15[VAR11];
        if (VAR14->VAR18->VAR19 == VAR20)
        {
            if (VAR5 && VAR5->VAR21 == VAR11)
            {
                FUN2(&VAR17->VAR22, VAR5->VAR23, VAR5->VAR24);
                VAR5 = NULL;
            }
            if (VAR6 || FUN3(&VAR17->VAR22) >= VAR25)
            {
                if (!VAR5 && FUN4(VAR8, VAR17, &VAR10, VAR6) > 0)
                {
                    VAR5 = &VAR10;
                    break;
                }
            }
        }
        else if (VAR5)
        {
            if (VAR5->VAR26 < 0 && !VAR17->VAR27)
            {
                VAR17->VAR27 = FUN5(VAR5->VAR26, VAR14->VAR18->VAR28, VAR14->VAR28);
                VAR5->VAR26 = VAR17->VAR27;
            }
            VAR5->VAR26 -= VAR17->VAR27;
        }
    }
    return FUN6(VAR2, VAR4, VAR5, VAR6);
}