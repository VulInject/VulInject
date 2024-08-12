static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR2->VAR4 = VAR5;
    if (!VAR3 && FUN2(VAR2))
    {
        VAR2->VAR4 |= VAR6;
        switch (VAR2->VAR7->VAR8->VAR9)
        {
        case VAR10:
            VAR2->VAR4 |= VAR11;
            break;
        case VAR12:
            VAR2->VAR4 |= VAR13;
            break;
        case VAR14:
            VAR2->VAR4 |= VAR15;
            break;
        case VAR16:
            VAR2->VAR4 |= VAR17;
            break;
        }
    }
    if (FUN3(VAR2->VAR18))
    {
        VAR2->VAR4 |= VAR19;
        XHCIEvent VAR20 = {VAR21, VAR22, VAR2->VAR23 << 24};
        FUN4(VAR2->VAR18, &VAR20, 0);
        FUN5("", VAR2->VAR23);
    }
}