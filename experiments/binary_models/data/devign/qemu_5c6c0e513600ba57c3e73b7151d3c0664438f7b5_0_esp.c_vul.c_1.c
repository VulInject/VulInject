static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint8_t VAR5)
{
    int32_t VAR6;
    int VAR7;
    FUN2("", VAR5);
    VAR7 = VAR5 & 7;
    VAR6 = VAR2->VAR8->VAR9->FUN3(VAR2->VAR8, 0, VAR4, VAR7);
    VAR2->VAR10 = VAR6;
    if (VAR6 != 0)
    {
        VAR2->VAR11[VAR12] = VAR13;
        VAR2->VAR14 = 0;
        VAR2->VAR15 = 0;
        if (VAR6 > 0)
        {
            VAR2->VAR11[VAR12] |= VAR16;
            VAR2->VAR8->VAR9->FUN4(VAR2->VAR8, 0);
        }
        else
        {
            VAR2->VAR11[VAR12] |= VAR17;
            VAR2->VAR8->VAR9->FUN5(VAR2->VAR8, 0);
        }
    }
    VAR2->VAR11[VAR18] = VAR19 | VAR20;
    VAR2->VAR11[VAR21] = VAR22;
    FUN6(VAR2);
}