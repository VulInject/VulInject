static void FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    int VAR4 = !!(VAR2->VAR5 & VAR6);
    VAR7 *VAR8 = &VAR2->VAR9[VAR4][VAR2->VAR5 & VAR10];
    FUN2("", VAR3);
    if (VAR2->VAR5 & VAR11 && VAR2->VAR12 < VAR8->VAR13)
    {
        VAR8->VAR14[VAR2->VAR12++] = VAR3;
        if (VAR2->VAR12 == VAR8->VAR13)
        {
            VAR8->FUN3(VAR8->VAR15, VAR8->VAR14);
            VAR2->VAR12 = 0;
        }
    }
}