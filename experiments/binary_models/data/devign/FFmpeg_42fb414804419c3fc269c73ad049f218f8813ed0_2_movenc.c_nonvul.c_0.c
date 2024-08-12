static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    offset_t VAR7 = FUN2(VAR2);
    int VAR8;
    FUN3(VAR2, 0);
    FUN4(VAR2, "");
    FUN5(VAR2, VAR4, VAR6);
    if (VAR4->VAR9 == VAR10)
    {
        for (VAR8 = 0; VAR8 < VAR4->VAR11; VAR8++)
        {
            if (VAR4->VAR12[VAR8].VAR13 <= 0)
                continue;
            if (VAR4->VAR12[VAR8].VAR14->VAR15 == VAR16 || VAR4->VAR12[VAR8].VAR14->VAR15 == VAR17)
            {
                FUN6(VAR2, "", "", 0);
                break;
            }
        }
        FUN6(VAR2, "", VAR6->VAR18, 0);
        FUN6(VAR2, "", VAR6->VAR19, 0);
        FUN6(VAR2, "", VAR6->VAR20, 0);
        FUN7(VAR2, VAR6->VAR21, 0);
        if (VAR4->VAR12[0].VAR14 && !(VAR4->VAR12[0].VAR14->VAR22 & VAR23))
            FUN6(VAR2, "", VAR24, 0);
        FUN6(VAR2, "", VAR6->VAR25, 0);
        FUN6(VAR2, "", VAR6->VAR26, 0);
    }
    return FUN8(VAR2, VAR7);
}