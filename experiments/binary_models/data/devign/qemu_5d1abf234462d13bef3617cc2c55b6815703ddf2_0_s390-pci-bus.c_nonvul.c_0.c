void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR2;
    VAR5 *VAR6 = FUN2(FUN3(VAR4->VAR7));
    uint16_t VAR8;
    if (FUN4(VAR2->VAR9.VAR10) < 16)
    {
        VAR8 = VAR11;
        goto VAR12;
    }
    if (!VAR6)
    {
        FUN5("");
        VAR8 = VAR13;
        goto VAR12;
    }
    switch (VAR6->VAR14)
    {
    case VAR15:
        VAR8 = VAR16;
        break;
    case VAR17:
        VAR6->VAR14 = VAR18;
        VAR8 = VAR19;
        break;
    default:
        VAR8 = VAR20;
    }
VAR12:
    VAR4->VAR21.VAR22 = FUN6(VAR8);
}