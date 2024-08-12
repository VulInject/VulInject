static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9, VAR10, VAR11, VAR12 = VAR6->VAR13;
    int64_t VAR14, VAR15;
    if (VAR6->VAR13 >= VAR6->VAR16)
        return -1;
    if (VAR6->VAR13 != VAR6->VAR17 + 1)
    {
        FUN2(VAR2->VAR18, VAR6->VAR19[VAR6->VAR13].VAR15, VAR20);
        VAR6->VAR11 = VAR6->VAR19[VAR6->VAR13].VAR21;
    }
    VAR6->VAR17 = VAR6->VAR13;
    VAR6->VAR13++;
    VAR11 = VAR6->VAR11;
    VAR15 = FUN3(VAR2->VAR18);
    VAR14 = FUN4(VAR2->VAR18);
    if (VAR11 <= 12)
    {
        VAR10 = (VAR14 >> (12 - VAR11)) & 0xFFFFF;
    }
    else
    {
        VAR14 = (VAR14 << 32) | FUN4(VAR2->VAR18);
        VAR10 = (VAR14 >> (44 - VAR11)) & 0xFFFFF;
    }
    VAR11 += 20;
    FUN2(VAR2->VAR18, VAR15, VAR20);
    VAR9 = ((VAR10 + VAR11 + 31) & ~31) >> 3;
    if (VAR12 == VAR6->VAR22)
    {
        VAR6->VAR19[VAR12].VAR15 = VAR15;
        VAR6->VAR19[VAR12].VAR9 = VAR9;
        VAR6->VAR19[VAR12].VAR21 = VAR11 - 20;
        FUN5(VAR2->VAR23[0], VAR12, VAR12, VAR9, 0, VAR24);
        VAR6->VAR22++;
    }
    VAR6->VAR11 = (VAR11 + VAR10) & 0x1F;
    if (FUN6(VAR4, VAR9) < 0)
        return FUN7(VAR25);
    VAR4->VAR26[0] = VAR11;
    VAR4->VAR26[1] = (VAR6->VAR13 > VAR6->VAR16);
    VAR4->VAR27 = 0;
    VAR4->VAR28 = VAR12;
    VAR8 = FUN8(VAR2->VAR18, VAR4->VAR26 + 4, VAR9);
    if (VAR6->VAR11)
        FUN2(VAR2->VAR18, -4, VAR29);
    if (VAR8 < VAR9)
    {
        FUN9(VAR4);
        return FUN7(VAR25);
    }
    VAR4->VAR9 = VAR8 + 4;
    return 0;