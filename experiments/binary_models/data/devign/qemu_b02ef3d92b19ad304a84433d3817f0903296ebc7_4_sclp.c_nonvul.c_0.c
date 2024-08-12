static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint16_t VAR5)
{
    int VAR6, VAR7, VAR8;
    VAR9 *VAR10 = (VAR9 *)VAR4;
    VAR11 *VAR12 = FUN2();
    if (!VAR12)
    {
        VAR4->VAR13.VAR14 = FUN3(VAR15);
        return;
    }
    if (VAR5 != 1)
    {
        VAR4->VAR13.VAR14 = FUN3(VAR15);
        return;
    }
    VAR7 = VAR12->VAR16 >> VAR12->VAR17;
    VAR10->VAR7 = FUN3(VAR7);
    VAR8 = ((VAR18 >> VAR12->VAR17) << 16) + VAR19;
    for (VAR6 = 0; VAR6 < VAR7; VAR6++)
    {
        VAR10->VAR20[VAR6] = FUN4(VAR8);
        VAR8 += VAR21;
    }
    VAR4->VAR13.VAR14 = FUN3(VAR22);
}