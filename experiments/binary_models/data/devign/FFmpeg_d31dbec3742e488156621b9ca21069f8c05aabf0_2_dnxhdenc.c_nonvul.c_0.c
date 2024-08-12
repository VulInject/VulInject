static int FUN1(VAR1 *VAR2)
{
    FUN2(VAR2->VAR3.VAR4, VAR2->VAR5, 8160 * VAR2->VAR3.VAR4->VAR6 * sizeof(VAR7), VAR8);
    if (VAR2->VAR3.VAR4->VAR9 != VAR10)
        FUN2(VAR2->VAR3.VAR4, VAR2->VAR11, VAR2->VAR3.VAR12 * sizeof(VAR13), VAR8);
    VAR2->VAR14 = (VAR2->VAR15->VAR16 - 640 - 4) * 8;
    VAR2->VAR17 = 1;
    VAR2->VAR18 = 2 << VAR19;
    return 0;
VAR8:
    return -1;
}