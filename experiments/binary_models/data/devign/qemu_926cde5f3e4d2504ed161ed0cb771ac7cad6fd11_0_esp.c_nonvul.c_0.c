static void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3, VAR4;
    if (VAR2->VAR5 && !VAR2->VAR6)
    {
        VAR2->VAR7 = VAR8;
        return;
    }
    VAR3 = VAR2->VAR9[VAR10];
    VAR3 |= VAR2->VAR9[VAR11] << 8;
    VAR3 |= VAR2->VAR9[VAR12] << 16;
    if (VAR3 == 0)
    {
        VAR3 = 0x10000;
    }
    VAR2->VAR13 = VAR3;
    if (VAR2->VAR14)
        VAR4 = (VAR3 < VAR15) ? VAR3 : VAR15;
    else if (VAR2->VAR16 < 0)
        VAR4 = (VAR3 < -VAR2->VAR16) ? VAR3 : -VAR2->VAR16;
    else
        VAR4 = (VAR3 < VAR2->VAR16) ? VAR3 : VAR2->VAR16;
    FUN2(VAR4);
    if (VAR2->VAR5)
    {
        VAR2->VAR17 = VAR4;
        VAR2->VAR9[VAR18] &= ~VAR19;
        FUN3(VAR2);
    }
    if (VAR2->VAR14)
    {
        FUN4(VAR2->VAR20);
        VAR2->VAR16 = 0;
        VAR2->VAR20 = 0;
        VAR2->VAR14 = 0;
        FUN5(VAR2, VAR2->VAR21);
    }
}