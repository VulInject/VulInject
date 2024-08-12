int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7;
    int VAR8 = 18;
    if (!VAR4->VAR9 || VAR4->VAR9 > 0xffff)
        VAR4->VAR9 = FUN2(VAR10, VAR4->VAR11);
    if (!VAR4->VAR9 || VAR4->VAR9 > 0xffff)
        return -1;
    FUN3(VAR2, VAR4->VAR9);
    FUN3(VAR2, VAR4->VAR12);
    FUN4(VAR2, VAR4->VAR13);
    if (VAR4->VAR11 == VAR14 || VAR4->VAR11 == VAR15 || VAR4->VAR11 == VAR16)
    {
        VAR5 = 8;
    }
    else if (VAR4->VAR11 == VAR17 || VAR4->VAR11 == VAR18)
    {
        VAR5 = 0;
    }
    else if (VAR4->VAR11 == VAR19 || VAR4->VAR11 == VAR20 || VAR4->VAR11 == VAR21 || VAR4->VAR11 == VAR22)
    {
        VAR5 = 4;
    }
    else if (VAR4->VAR11 == VAR23)
    {
        VAR5 = 24;
    }
    else if (VAR4->VAR11 == VAR24)
    {
        VAR5 = 32;
    }
    else
    {
        VAR5 = 16;
    }
    if (VAR4->VAR11 == VAR17 || VAR4->VAR11 == VAR18)
    {
        VAR6 = VAR4->VAR25;
    }
    else if (VAR4->VAR11 == VAR21)
    {
        VAR6 = 1;
    }
    else if (VAR4->VAR26 != 0)
    {
        VAR6 = VAR4->VAR26;
    }
    else
        VAR6 = VAR4->VAR12 * VAR5 >> 3;
    if (VAR4->VAR11 == VAR14 || VAR4->VAR11 == VAR23 || VAR4->VAR11 == VAR24 || VAR4->VAR11 == VAR27)
    {
        VAR7 = VAR4->VAR13 * VAR6;
    }
    else
    {
        VAR7 = VAR4->VAR28 / 8;
    }
    FUN4(VAR2, VAR7);
    FUN3(VAR2, VAR6);
    FUN3(VAR2, VAR5);
    if (VAR4->VAR11 == VAR18)
    {
        FUN3(VAR2, 12);
        VAR8 += 12;
        FUN3(VAR2, 1);
        FUN4(VAR2, 2);
        FUN3(VAR2, 1152);
        FUN3(VAR2, 1);
        FUN3(VAR2, 1393);
    }
    else if (VAR4->VAR11 == VAR17)
    {
        FUN3(VAR2, 22);
        VAR8 += 22;
        FUN3(VAR2, 2);
        FUN4(VAR2, VAR4->VAR28);
        FUN3(VAR2, VAR4->VAR12 == 2 ? 1 : 8);
        FUN3(VAR2, 0);
        FUN3(VAR2, 1);
        FUN3(VAR2, 16);
        FUN4(VAR2, 0);
        FUN4(VAR2, 0);
    }
    else if (VAR4->VAR11 == VAR19)
    {
        FUN3(VAR2, 2);
        VAR8 += 2;
        FUN3(VAR2, ((VAR4->VAR26 - 4 * VAR4->VAR12) / (4 * VAR4->VAR12)) * 8 + 1);
    }
    else if (VAR4->VAR29)
    {
        FUN3(VAR2, VAR4->VAR29);
        FUN5(VAR2, VAR4->VAR30, VAR4->VAR29);
        VAR8 += VAR4->VAR29;
        if (VAR8 & 1)
        {
            VAR8++;
            FUN6(VAR2, 0);
        }
    }
    else
    {
        VAR8 -= 2;
    }
    return VAR8;
}