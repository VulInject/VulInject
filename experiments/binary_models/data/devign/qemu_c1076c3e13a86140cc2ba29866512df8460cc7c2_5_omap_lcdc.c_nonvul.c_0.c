static void FUN1(void *VAR1)
{
    struct VAR2 *VAR3 = (struct VAR2 *)VAR1;
    VAR4 *VAR5 = FUN2(VAR3->VAR6);
    draw_line_func VAR7;
    int VAR8, VAR9, VAR10, VAR11;
    int VAR12, VAR13, VAR14, VAR15, VAR16;
    hwaddr VAR17;
    if (!VAR3 || VAR3->VAR18 == 1 || !VAR3->VAR19 || !FUN3(VAR5))
    {
        return;
    }
    VAR16 = 0;
    if (VAR3->VAR18 != 2)
    {
        FUN4(VAR3->VAR20->VAR21[VAR3->VAR20->VAR22], (void *)VAR3->VAR23, 0x200);
        switch (VAR3->VAR23[0] >> 12 & 7)
        {
        case 3 ... 7:
            VAR16 += 0x200;
            break;
        default:
            VAR16 += 0x20;
        }
    }
    switch ((VAR3->VAR23[0] >> 12) & 7)
    {
    case 1:
        VAR7 = VAR24[FUN3(VAR5)];
        VAR15 = 2;
        break;
    case 2:
        VAR7 = VAR25[FUN3(VAR5)];
        VAR15 = 4;
        break;
    case 3:
        VAR7 = VAR26[FUN3(VAR5)];
        VAR15 = 8;
        break;
    case 4 ... 7:
        if (!VAR3->VAR27)
            VAR7 = VAR28[FUN3(VAR5)];
        else
            VAR7 = VAR29[FUN3(VAR5)];
        VAR15 = 16;
        break;
    default:
        return;
    }
    VAR12 = VAR3->VAR12;
    if (VAR12 != FUN5(VAR5) || VAR3->VAR9 != FUN6(VAR5))
    {
        FUN7(VAR3->VAR6, VAR3->VAR12, VAR3->VAR9);
        VAR5 = FUN2(VAR3->VAR6);
        VAR3->VAR30 = 1;
    }
    if (VAR3->VAR20->VAR22 == 0)
        VAR8 = VAR3->VAR20->VAR31 - VAR3->VAR20->VAR32;
    else
        VAR8 = VAR3->VAR20->VAR33 - VAR3->VAR20->VAR34;
    if (VAR16 + ((VAR12 * VAR3->VAR9 * VAR15) >> 3) > VAR8 + 2)
    {
        VAR3->VAR35 = 1;
        FUN8(VAR3);
        VAR3->VAR19 = 0;
        return;
    }
    VAR17 = VAR3->VAR20->VAR21[VAR3->VAR20->VAR22] + VAR16;
    VAR3->VAR20->VAR36 |= 1 << VAR3->VAR20->VAR22;
    if (VAR3->VAR20->VAR37 & 1)
        FUN9(VAR3->VAR20->VAR38);
    if (VAR3->VAR20->VAR39)
        VAR3->VAR20->VAR22 ^= 1;
    if (!FUN3(VAR5))
    {
        return;
    }
    VAR10 = 0;
    VAR9 = VAR3->VAR9;
    if (VAR3->VAR40 & (1 << 31))
    {
        if (VAR3->VAR40 & (1 << 29))
            VAR10 = (VAR3->VAR40 >> 16) & 0x3ff;
        else
            VAR9 = (VAR3->VAR40 >> 16) & 0x3ff;
    }
    VAR14 = VAR12 * VAR15 >> 3;
    VAR13 = FUN10(VAR5);
    if (VAR3->VAR30)
    {
        FUN11(&VAR3->VAR41, VAR3->VAR42, VAR17, VAR9, VAR14);
    }
    FUN12(VAR5, &VAR3->VAR41, VAR12, VAR9, VAR14, VAR13, 0, VAR3->VAR30, VAR7, VAR3->VAR23, &VAR10, &VAR11);
    if (VAR10 >= 0)
    {
        FUN13(VAR3->VAR6, 0, VAR10, VAR12, VAR11 - VAR10 + 1);
    }
    VAR3->VAR30 = 0;
}