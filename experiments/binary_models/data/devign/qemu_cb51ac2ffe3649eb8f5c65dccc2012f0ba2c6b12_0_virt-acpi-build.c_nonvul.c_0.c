static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, unsigned VAR7)
{
    VAR8 *VAR9 = FUN2(VAR2, sizeof(*VAR9));
    unsigned VAR10 = (char *)&VAR9->VAR11 - VAR2->VAR12;
    uint16_t VAR13;
    switch (VAR6->VAR14)
    {
    case VAR15:
        VAR13 = 0;
        break;
    case VAR16:
        VAR13 = VAR17 | VAR18;
        break;
    case VAR19:
        VAR13 = VAR17;
        break;
    default:
        FUN3();
    }
    VAR9->VAR20 = FUN4(1 << VAR21);
    VAR9->VAR22 = FUN5(VAR13);
    VAR9->VAR23 = 0x1;
    FUN6(VAR4, VAR24, VAR10, sizeof(VAR9->VAR11), VAR24, VAR7);
    FUN7(VAR4, VAR2, (void *)VAR9, "", sizeof(*VAR9), 5, NULL, NULL);
}