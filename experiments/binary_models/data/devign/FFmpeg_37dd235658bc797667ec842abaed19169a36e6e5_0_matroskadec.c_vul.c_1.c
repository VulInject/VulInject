static int FUN1(VAR1 *VAR2)
{
    MatroskaCluster VAR3 = {0};
    VAR4 *VAR5;
    VAR6 *VAR7;
    int VAR8, VAR9;
    int64_t VAR10 = FUN2(VAR2->VAR11->VAR12);
    VAR2->VAR13 = NULL;
    if (VAR2->VAR14)
    {
        VAR9 = FUN3(VAR2, VAR15, VAR16, &VAR3);
        VAR10 -= 4;
        VAR2->VAR14 = 0;
    }
    else
        VAR9 = FUN4(VAR2, VAR15, &VAR3);
    VAR5 = &VAR3.VAR7;
    VAR7 = VAR5->VAR17;
    for (VAR8 = 0; VAR8 < VAR5->VAR18; VAR8++)
        if (VAR7[VAR8].VAR19.VAR20 > 0)
        {
            int VAR21 = VAR7[VAR8].VAR22 ? !VAR7[VAR8].VAR23 : -1;
            VAR9 = FUN5(VAR2, VAR7[VAR8].VAR19.VAR24, VAR7[VAR8].VAR19.VAR20, VAR7[VAR8].VAR19.VAR10, VAR3.VAR25, VAR7[VAR8].VAR26, VAR21, VAR10);
        }
    FUN6(VAR27, &VAR3);
    if (VAR9 < 0)
        VAR2->VAR28 = 1;
    return VAR9;
}