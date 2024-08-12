static VAR1 *FUN1(VAR2 *VAR3)
{
    int VAR4;
    VAR5 *VAR6 = VAR3->VAR7;
    VAR1 *VAR8 = FUN2(VAR1, 1);
    VAR9 **VAR10;
    *VAR8 = (VAR1){
        .VAR11 = VAR12,
        .VAR13 = {
            .VAR14.VAR15 = FUN2(VAR16, 1),
        },
    };
    *VAR8->VAR13.VAR14.VAR15 = (VAR16){
        .VAR17 = FUN3(VAR6->VAR17),
        .VAR18 = VAR6->VAR18,
        .VAR19 = VAR6->VAR19,
    };
    VAR10 = &VAR8->VAR13.VAR14.VAR15->VAR20;
    for (VAR4 = 0; VAR4 < VAR6->VAR21; VAR4++)
    {
        *VAR10 = FUN2(VAR9, 1);
        (*VAR10)->VAR22 = FUN4(&VAR6->VAR20[VAR4]);
        (*VAR10)->VAR10 = NULL;
        VAR10 = &(*VAR10)->VAR10;
    }
    return VAR8;
}