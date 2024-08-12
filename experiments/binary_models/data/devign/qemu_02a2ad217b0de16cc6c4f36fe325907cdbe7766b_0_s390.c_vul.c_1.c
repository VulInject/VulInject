FUN1(struct VAR1 *VAR2)
{
    const struct VAR3 *VAR4;
    const struct VAR3 *VAR5;
    memset(VAR6, 0, sizeof(VAR6));
    VAR5 = VAR7 + VAR8;
    for (VAR4 = VAR7; VAR4 < VAR5; VAR4++)
    {
        VAR6[(int)VAR4->VAR4[0]] = VAR4 - VAR7;
        while ((VAR4 < VAR5) && (VAR4[1].VAR4[0] == VAR4->VAR4[0]))
            VAR4++;
    }
    switch (VAR2->VAR9)
    {
    case VAR10:
        VAR11 = 1 << VAR12;
        break;
    case VAR13:
        VAR11 = 1 << VAR14;
        break;
    default:
        FUN2();
    }
    VAR15 = 1;
}