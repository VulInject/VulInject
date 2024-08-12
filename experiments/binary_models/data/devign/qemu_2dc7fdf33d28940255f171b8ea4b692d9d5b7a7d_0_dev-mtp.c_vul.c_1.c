static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7)
{
    VAR1 *VAR8 = FUN2(VAR5);
    off_t VAR9;
    FUN3(VAR3->VAR10.VAR11, VAR7->VAR12, VAR7->VAR13, VAR5->argv[1], VAR5->argv[2]);
    VAR8->VAR14 = open(VAR7->VAR13, VAR15);
    if (VAR8->VAR14 == -1)
    {
        return NULL;
    }
    VAR9 = VAR5->argv[1];
    if (VAR9 > VAR7->VAR16.VAR17)
    {
        VAR9 = VAR7->VAR16.VAR17;
    }
    FUN4(VAR8->VAR14, VAR9, VAR18);
    VAR8->VAR19 = VAR5->argv[2];
    if (VAR8->VAR19 > VAR7->VAR16.VAR17 - VAR9)
    {
        VAR8->VAR19 = VAR7->VAR16.VAR17 - VAR9;
    }
    return VAR8;