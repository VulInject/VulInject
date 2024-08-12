void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    switch (VAR4->VAR7)
    {
    case VAR8:
        if (VAR4->VAR9 == 0)
            VAR4->VAR9 = 64000;
        if (VAR4->VAR10 == 0)
            VAR4->VAR10 = 22050;
        if (VAR4->VAR11 == 0)
            VAR4->VAR11 = 1;
        break;
    case VAR12:
        if (VAR4->VAR9 == 0)
            VAR4->VAR9 = 64000;
        if (VAR4->VAR13 == 0)
            VAR4->VAR13 = 5 * VAR14;
        if (VAR4->VAR15 == 0 || VAR4->VAR16 == 0)
        {
            VAR4->VAR15 = 160;
            VAR4->VAR16 = 128;
        }
        if (VAR4->VAR17 == 0)
            VAR4->VAR17 = VAR4->VAR9 / 4;
        if (VAR4->VAR18 == 0)
            VAR4->VAR18 = 3;
        if (VAR4->VAR19 == 0)
            VAR4->VAR19 = 31;
        if (VAR4->VAR20 == 0)
            VAR4->VAR20 = 3;
        VAR4->VAR21 = 0.5;
        VAR4->VAR22 = 0.5;
        break;
    default:
        FUN2();
    }
    VAR6 = FUN3(sizeof(VAR5));
    if (!VAR6)
        return;
    VAR2->VAR23[VAR2->VAR24++] = VAR6;
    memcpy(&VAR6->VAR25, VAR4, sizeof(VAR3));
}