static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    uint16_t VAR5;
    uint16_t VAR6, VAR7;
    uint32_t VAR8;
    int VAR9;
    FUN2("");
    VAR5 = FUN3(VAR4->VAR10) & VAR11;
    switch (VAR5)
    {
    case VAR12:
        FUN4(VAR2);
        return;
    case VAR13:
        FUN5(VAR2);
        return;
    }
    VAR8 = VAR2->VAR14[VAR15] & VAR16;
    VAR6 = (VAR2->VAR14[VAR17] >> 16) & 0x0f;
    VAR7 = VAR2->VAR14[VAR17] & 0x0f;
    VAR9 = (VAR8 & VAR6) == (VAR7 & VAR6);
    switch (VAR5)
    {
    case VAR18:
        if (VAR9)
            FUN5(VAR2);
        else
            FUN4(VAR2);
        return;
    case VAR19:
        if (!VAR9)
            FUN5(VAR2);
        else
            FUN4(VAR2);
        return;
    }
}