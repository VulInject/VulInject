void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR2;
    VAR5 *VAR6 = FUN2(FUN3(), FUN4(VAR4->VAR7));
    uint16_t VAR8;
    if (!VAR6)
    {
        FUN5("");
        VAR8 = VAR9;
        goto VAR10;
    }
    switch (VAR6->VAR11)
    {
    case VAR12:
        VAR8 = VAR13;
        break;
    case VAR14:
        VAR8 = VAR15;
        break;
    default:
        if (VAR6->VAR16)
        {
            FUN6(VAR6);
        }
        if (VAR6->VAR17->VAR18)
        {
            FUN7(VAR6->VAR17);
        }
        VAR6->VAR11 = VAR14;
        VAR8 = VAR19;
        if (VAR6->VAR20)
        {
            FUN8(FUN9(VAR6->VAR21), NULL);
        }
    }
VAR10:
    VAR4->VAR22.VAR23 = FUN10(VAR8);
}