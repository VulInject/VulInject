static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR5;
    struct VAR6 *VAR7;
    int64_t VAR8;
    int VAR9, VAR10, VAR11;
    FUN2(VAR5, VAR2->VAR12, VAR2->VAR13, VAR3);
    VAR5->VAR14--;
    VAR5->VAR15 -= VAR2->VAR13;
    VAR7 = VAR2->VAR16.VAR7;
    for (VAR9 = 0; VAR9 < VAR2->VAR16.VAR17; VAR9++)
    {
        VAR18 *VAR19 = (VAR18 *)VAR7[VAR9].VAR20;
        FUN3(&VAR5->VAR21, VAR19, VAR22);
        VAR5->VAR23++;
    }
    VAR11 = VAR5->VAR24 >> VAR25;
    VAR8 = VAR2->VAR12 / VAR11;
    VAR10 = FUN4(VAR2->VAR13, VAR11);
    FUN5(VAR5->VAR26, VAR8, VAR10);
    if (VAR3 >= 0)
    {
        if (VAR5->VAR27)
        {
            FUN6(VAR5->VAR27, VAR8, VAR10);
        }
        VAR5->VAR28.VAR29 += (VAR30)VAR2->VAR13 * VAR31;
    }
    FUN7(&VAR2->VAR16);
    FUN8(VAR2);
    if (VAR5->VAR32)
    {
        FUN9(VAR5->VAR28.VAR33, NULL);
    }
}