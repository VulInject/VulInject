static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(FUN3(*VAR4), FUN4(VAR2));
    int VAR5;
    VAR4->VAR6 = VAR7;
    VAR4->VAR8 = ((VAR4->VAR9 - 1) << VAR10) | ((VAR4->VAR11 - 1) << VAR12) | (VAR4->VAR13 << VAR14);
    VAR4->VAR15 = 0;
    VAR4->VAR16 = -1 & VAR4->VAR17;
    VAR4->VAR18 = VAR4->VAR19;
    for (VAR5 = 0; VAR5 < VAR4->VAR20; VAR5++)
    {
        VAR4->VAR21[VAR5].VAR22 = VAR4->VAR23;
        VAR4->VAR21[VAR5].VAR24 = VAR4->VAR25;
    }
    for (VAR5 = 0; VAR5 < VAR26; VAR5++)
    {
        VAR4->VAR27[VAR5].VAR28 = 15;
        memset(&VAR4->VAR27[VAR5].VAR29, 0, sizeof(VAR30));
        VAR4->VAR27[VAR5].VAR29.VAR31 = -1;
        memset(&VAR4->VAR27[VAR5].VAR32, 0, sizeof(VAR30));
        VAR4->VAR27[VAR5].VAR32.VAR31 = -1;
    }
    for (VAR5 = 0; VAR5 < VAR33; VAR5++)
    {
        VAR4->VAR34[VAR5].VAR35 = 0;
        VAR4->VAR34[VAR5].VAR36 = VAR37;
    }
    VAR4->VAR6 = 0;
}