static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    int VAR8;
    if (VAR2->VAR9->VAR10 < 1)
        return 0;
    VAR7 = VAR2->VAR9->VAR11[VAR2->VAR9->VAR10 - 1];
    VAR8 = FUN2(VAR4);
    FUN3(VAR2->VAR9, "", VAR8);
    if (VAR8 == 1)
    {
        switch (VAR7->VAR12->VAR13)
        {
        case VAR14:
            VAR7->VAR12->VAR13 = VAR15;
            break;
        case VAR16:
            VAR7->VAR12->VAR13 = VAR17;
            break;
        case VAR18:
            VAR7->VAR12->VAR13 = VAR19;
            break;
        case VAR20:
            VAR7->VAR12->VAR13 = VAR21;
            break;
        default:
            break;
        }
    }
    return 0;
}