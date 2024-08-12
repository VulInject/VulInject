static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    enum AVColorTransferCharacteristic VAR7 = VAR2->VAR8;
    Float32 VAR9;
    *VAR6 = NULL;
    switch (VAR7)
    {
    case VAR10:
        *VAR4 = NULL;
        break;
    case VAR11:
        *VAR4 = VAR12;
        break;
    case VAR13:
        *VAR4 = VAR14;
        break;
    case VAR15:
        VAR9 = 2.2;
        *VAR4 = VAR16;
        *VAR6 = FUN2(NULL, VAR17, &VAR9);
        break;
    case VAR18:
        VAR9 = 2.8;
        *VAR4 = VAR16;
        *VAR6 = FUN2(NULL, VAR17, &VAR9);
        break;
    case VAR19:
    case VAR20:
        *VAR4 = VAR21.VAR22;
        break;
    default:
        FUN3(VAR2, VAR23, "", FUN4(VAR7));
        return -1;
    }
    return 0;
}