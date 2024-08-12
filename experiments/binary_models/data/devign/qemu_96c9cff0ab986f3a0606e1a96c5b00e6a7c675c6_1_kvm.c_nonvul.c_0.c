static void FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR6;
    VAR7 *VAR8 = FUN2(VAR2);
    memset(VAR4, 0, sizeof(*VAR4));
    if (FUN3(VAR8->VAR9))
    {
        VAR4->VAR10 = 0;
        VAR4->VAR11 = 64;
        VAR4->VAR12[0].VAR13 = 12;
        VAR4->VAR12[0].VAR14 = 0;
        VAR4->VAR12[0].VAR15[0].VAR13 = 12;
        VAR4->VAR12[0].VAR15[0].VAR16 = 0;
        VAR4->VAR12[1].VAR13 = 24;
        VAR4->VAR12[1].VAR14 = VAR17;
        VAR4->VAR12[1].VAR15[0].VAR13 = 24;
        VAR4->VAR12[1].VAR15[0].VAR16 = 0;
    }
    else
    {
        int VAR18 = 0;
        VAR4->VAR10 = VAR19;
        if (VAR6->VAR20 & VAR21)
        {
            VAR4->VAR10 |= VAR22;
        }
        if (VAR6->VAR20 == VAR23 || VAR6->VAR20 == VAR24)
        {
            VAR4->VAR11 = 32;
        }
        else
        {
            VAR4->VAR11 = 64;
        }
        VAR4->VAR12[VAR18].VAR13 = 12;
        VAR4->VAR12[VAR18].VAR14 = 0;
        VAR4->VAR12[VAR18].VAR15[0].VAR13 = 12;
        VAR4->VAR12[VAR18].VAR15[0].VAR16 = 0;
        VAR18++;
        if (VAR6->VAR20 == VAR23 || VAR6->VAR20 == VAR24)
        {
            VAR4->VAR12[VAR18].VAR13 = 16;
            VAR4->VAR12[VAR18].VAR14 = 0x110;
            VAR4->VAR12[VAR18].VAR15[0].VAR13 = 16;
            VAR4->VAR12[VAR18].VAR15[0].VAR16 = 1;
            VAR18++;
        }
        VAR4->VAR12[VAR18].VAR13 = 24;
        VAR4->VAR12[VAR18].VAR14 = VAR17;
        VAR4->VAR12[VAR18].VAR15[0].VAR13 = 24;
        VAR4->VAR12[VAR18].VAR15[0].VAR16 = 0;
    }
}