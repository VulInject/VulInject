static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = (VAR7 *)VAR2;
    int VAR9[3], VAR10, VAR11;
    int VAR12;
    VAR11 = FUN2(VAR6->VAR13.VAR14->VAR14, VAR6->VAR13.VAR14->VAR15, VAR9);
    if (VAR8->VAR16 + VAR11 > VAR17)
    {
        fprintf(VAR18, "");
        return;
    }
    for (VAR10 = 0; VAR10 < VAR11; VAR10++)
    {
        VAR12 = (VAR8->VAR19 + VAR8->VAR16) & VAR20;
        VAR8->VAR16++;
        VAR8->VAR21.VAR22[VAR12] = VAR9[VAR10];
    }
    VAR8->FUN3(VAR8);
}