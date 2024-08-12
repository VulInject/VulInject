static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    switch (VAR2->VAR7)
    {
    case VAR8:
        VAR4->VAR9 = FUN2(VAR2->VAR10.VAR11.VAR12->VAR9);
        VAR4->VAR13 = FUN2(VAR2->VAR10.VAR11.VAR12->VAR14);
        if (VAR2->VAR10.VAR11.VAR12->VAR15)
        {
            VAR4->VAR16 = VAR17;
        }
        else
        {
            VAR4->VAR16 = VAR18;
        }
        break;
    case VAR19:
        VAR4->VAR9 = FUN2("");
        VAR4->VAR13 = FUN2(VAR2->VAR10.VAR20.VAR12->VAR21);
        VAR4->VAR16 = VAR22;
        break;
    default:
        FUN3(VAR6, "", VAR2->VAR7);
        break;
    }
    return;
}