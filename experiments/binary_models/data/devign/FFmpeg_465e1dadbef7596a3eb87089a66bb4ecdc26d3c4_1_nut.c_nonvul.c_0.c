static void update(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int64_t VAR9)
{
    VAR10 *VAR11 = &VAR2->VAR11[VAR3];
    const int VAR12 = VAR2->VAR6[VAR6].VAR12;
    VAR11->VAR13 = VAR7;
    VAR2->VAR14[VAR5] = VAR4;
    if (VAR5 == 0)
        FUN1(VAR11->VAR15, VAR9 - VAR11->VAR16, 3);
    FUN1(VAR11->VAR17, VAR8, 2);
    VAR11->VAR16 = VAR9;
    if ((VAR12 & VAR18) && (VAR12 & VAR19))
        VAR11->VAR20 = VAR9;
}