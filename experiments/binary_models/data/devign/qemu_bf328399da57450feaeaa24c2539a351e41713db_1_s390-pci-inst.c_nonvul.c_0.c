static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    uint32_t VAR7, VAR8, VAR9, VAR10;
    int VAR11, VAR12;
    uint64_t VAR13;
    VAR11 = 0;
    if (FUN2(&VAR2->VAR14.VAR15.VAR16) != 32)
    {
        VAR7 = VAR17;
        VAR11 = -VAR18;
        goto VAR19;
    }
    if ((FUN3(&VAR2->VAR14.VAR20) & VAR21) != 0)
    {
        VAR7 = VAR22;
        VAR11 = -VAR18;
        goto VAR19;
    }
    if ((FUN3(&VAR2->VAR14.VAR20) & ~VAR21) != 0 || FUN4(&VAR2->VAR14.VAR23) != 0)
    {
        VAR7 = VAR24;
        VAR11 = -VAR18;
        goto VAR19;
    }
    VAR13 = FUN4(&VAR2->VAR14.VAR13);
    if (VAR13)
    {
        VAR6 = FUN5(VAR13);
        if (!VAR6)
        {
            VAR7 = VAR25;
            VAR11 = -VAR18;
            goto VAR19;
        }
    }
    if (FUN2(&VAR2->VAR26.VAR15.VAR16) < 48)
    {
        VAR7 = VAR27;
        VAR11 = -VAR18;
        goto VAR19;
    }
    VAR8 = FUN2(&VAR2->VAR26.VAR15.VAR16);
    if ((VAR8 - VAR28) % sizeof(VAR29) != 0)
    {
        VAR7 = VAR17;
        VAR11 = -VAR18;
        *VAR4 = 3;
        goto VAR19;
    }
    FUN6(&VAR2->VAR26.VAR20, 0);
    FUN7(&VAR2->VAR26.VAR23, 0);
    FUN6(&VAR2->VAR26.VAR30, VAR31);
    FUN8(&VAR2->VAR26.VAR32, VAR33);
    VAR2->VAR26.VAR34 = VAR35;
    VAR2->VAR26.VAR36 = sizeof(VAR29);
    VAR10 = 0;
    VAR12 = VAR13;
    VAR9 = VAR28;
    do
    {
        VAR6 = FUN5(VAR12);
        if (!VAR6)
        {
            VAR10 = 1;
            break;
        }
        FUN8(&VAR2->VAR26.VAR37[VAR12 - VAR13].VAR38, FUN9(VAR6->VAR39->VAR40 + VAR41));
        FUN8(&VAR2->VAR26.VAR37[VAR12 - VAR13].VAR42, FUN9(VAR6->VAR39->VAR40 + VAR43));
        FUN6(&VAR2->VAR26.VAR37[VAR12 - VAR13].VAR40, VAR6->VAR44 == VAR45 ? 0 : 1 << 31);
        FUN6(&VAR2->VAR26.VAR37[VAR12 - VAR13].VAR46, VAR6->VAR46);
        FUN6(&VAR2->VAR26.VAR37[VAR12 - VAR13].VAR47, VAR6->VAR47);
        VAR9 += sizeof(VAR29);
        FUN10("", VAR9, FUN2(&VAR2->VAR26.VAR37[VAR12 - VAR13].VAR42), FUN2(&VAR2->VAR26.VAR37[VAR12 - VAR13].VAR38), FUN3(&VAR2->VAR26.VAR37[VAR12 - VAR13].VAR46), FUN3(&VAR2->VAR26.VAR37[VAR12 - VAR13].VAR47));
        VAR12++;
    } while (VAR9 < VAR8);
    if (VAR10 == 1)
    {
        VAR13 = 0;
    }
    else
    {
        VAR13 = VAR12;
    }
    FUN7(&VAR2->VAR26.VAR13, VAR13);
    FUN8(&VAR2->VAR26.VAR15.VAR16, VAR9);
    FUN8(&VAR2->VAR26.VAR15.VAR48, VAR49);
VAR19:
    if (VAR11)
    {
        FUN10("", VAR11);
        FUN8(&VAR2->VAR26.VAR15.VAR48, VAR7);
    }
    return VAR11;
}