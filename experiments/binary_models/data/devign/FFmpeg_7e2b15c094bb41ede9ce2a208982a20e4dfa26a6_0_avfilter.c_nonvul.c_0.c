int FUN1(VAR1 *VAR2, unsigned VAR3, VAR1 *VAR4, unsigned VAR5)
{
    VAR6 *VAR7;
    if (VAR2->VAR8 <= VAR3 || VAR4->VAR9 <= VAR5 || VAR2->VAR10[VAR3] || VAR4->VAR11[VAR5])
        return -1;
    if (VAR2->VAR12[VAR3].VAR13 != VAR4->VAR14[VAR5].VAR13)
    {
        FUN2(VAR2, VAR15, "", VAR2->VAR16, VAR3, VAR4->VAR16, VAR5);
        return FUN3(VAR17);
    }
    VAR7 = FUN4(sizeof(*VAR7));
    if (!VAR7)
        return FUN3(VAR18);
    VAR2->VAR10[VAR3] = VAR4->VAR11[VAR5] = VAR7;
    VAR7->VAR2 = VAR2;
    VAR7->VAR4 = VAR4;
    VAR7->VAR3 = &VAR2->VAR12[VAR3];
    VAR7->VAR5 = &VAR4->VAR14[VAR5];
    VAR7->VAR13 = VAR2->VAR12[VAR3].VAR13;
    assert(VAR19 == -1 && VAR20 == -1);
    VAR7->VAR21 = -1;
    return 0;
}