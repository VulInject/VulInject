static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR5;
    struct VAR6 *VAR7;
    int64_t VAR8;
    int VAR9, VAR10;
    FUN2(VAR5, VAR2->VAR11, VAR2->VAR12, VAR3);
    VAR5->VAR13--;
    VAR5->VAR14 -= VAR2->VAR12;
    VAR7 = VAR2->VAR15.VAR7;
    for (VAR9 = 0; VAR9 < VAR2->VAR15.VAR16; VAR9++)
    {
        VAR17 *VAR18 = (VAR17 *)VAR7[VAR9].VAR19;
        FUN3(&VAR5->VAR20, VAR18, VAR21);
        VAR5->VAR22++;
    }
    VAR8 = VAR2->VAR11 / VAR5->VAR23;
    VAR10 = FUN4(VAR2->VAR12, VAR5->VAR23);
    FUN5(VAR5->VAR24, VAR8, VAR10);
    if (VAR3 >= 0)
    {
        if (VAR5->VAR25)
        {
            FUN6(VAR5->VAR25, VAR8, VAR10);
        }
        if (!VAR5->VAR26)
        {
            VAR5->VAR27.VAR11 += VAR2->VAR12;
        }
    }
    FUN7(&VAR2->VAR15);
    FUN8(VAR2);
    if (VAR5->VAR28)
    {
        FUN9(VAR5->VAR27.VAR29);
    }
}