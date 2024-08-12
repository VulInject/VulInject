static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    GHashTableIter VAR4;
    gpointer VAR5, VAR6;
    int VAR7;
    FUN2(VAR3->VAR8);
    VAR3->VAR8 = NULL;
    VAR3->VAR9 = FUN3(VAR3->VAR10);
    if (!VAR3->VAR9)
    {
        return;
    }
    VAR3->VAR8 = FUN4(VAR3->VAR9 * sizeof(VAR11));
    FUN5(&VAR4, VAR3->VAR10);
    for (VAR7 = 0; FUN6(&VAR4, &VAR5, &VAR6); ++VAR7)
    {
        VAR3->VAR8[VAR7].VAR5 = *(VAR12 *)VAR5;
        VAR3->VAR8[VAR7].VAR6 = *(VAR13 *)VAR6;
    }
    if (VAR3->VAR14)
    {
        VAR3->VAR15 = VAR3->VAR16[0];
        VAR3->VAR17 = VAR3->VAR18;
        VAR3->VAR19 = VAR3->VAR20;
        VAR3->VAR21 = VAR3->VAR22;
        VAR3->VAR23 = VAR3->VAR24;
        if ((VAR3->VAR25 != 0) && (VAR3->VAR26 == (VAR3->VAR18 + VAR3->VAR20)))
        {
            VAR3->VAR19 += VAR3->VAR25;
        }
    }
}