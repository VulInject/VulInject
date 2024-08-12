static void FUN1(const VAR1 *VAR2, uint8_t VAR3, uint8_t VAR4, uint8_t VAR5, uint8_t VAR6)
{
    VAR7 *VAR8;
    switch (VAR3)
    {
    case VAR9:
    {
        int VAR10, VAR11;
        VAR11 = -1;
        for (VAR10 = 0; VAR10 < VAR12; VAR10++)
        {
            if (VAR2[VAR10])
            {
                VAR11 = VAR10 * 32 + FUN2(VAR2[VAR10]);
                break;
            }
        }
        if (VAR11 >= 0)
        {
            VAR8 = VAR13[VAR11];
            if (VAR8)
            {
                FUN3(VAR8, VAR4, VAR6);
            }
        }
    }
        return;
    case VAR14:
        break;
    case VAR15:
        FUN4(VAR8, VAR2, FUN5(VAR8->VAR16, VAR17));
        return;
    case VAR18:
        FUN4(VAR8, VAR2, FUN5(VAR8->VAR16, VAR19));
        return;
    case VAR20:
        FUN4(VAR8, VAR2, FUN5(VAR8->VAR16, VAR21));
        return;
    case VAR22:
        break;
    default:
        return;
    }
    FUN4(VAR8, VAR2, FUN3(VAR8, VAR4, VAR6));
}