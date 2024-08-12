static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    int VAR7 = VAR8;
    VAR9 *VAR10 = (VAR9 *)VAR4;
    VAR11 *VAR12 = FUN2();
    if (!VAR12)
    {
        VAR4->VAR13.VAR14 = FUN3(VAR15);
        return;
    }
    if ((VAR16 >> VAR12->VAR17) >= 0x10000)
    {
        VAR4->VAR13.VAR14 = FUN3(VAR18);
        return;
    }
    VAR10->VAR19 = FUN3(VAR12->VAR20 ? 1 : 0);
    VAR6 = VAR16 >> VAR12->VAR17;
    VAR10->VAR6 = FUN3(VAR6);
    for (VAR5 = 0; VAR5 < VAR6; VAR5++)
    {
        VAR10->VAR21[VAR5] = FUN4(VAR7);
        VAR7 += VAR22;
    }
    VAR4->VAR13.VAR14 = FUN3(VAR23);
}