void FUN1(VAR1 *VAR2, uint64_t VAR3)
{
    int VAR4;
    uint8_t VAR5;
    uint8_t VAR6;
    int VAR7;
    VAR8 *VAR9 = &VAR2->VAR9;
    if (FUN2(VAR3))
    {
        FUN3(VAR9, VAR10, 4);
        return;
    }
    VAR5 = FUN4(VAR3);
    VAR6 = FUN5(VAR3);
    FUN6("", VAR5, VAR6);
    VAR7 = FUN7(VAR5, VAR6);
    switch (VAR7)
    {
    case -VAR11:
        VAR4 = 3;
        break;
    case -VAR12:
        VAR4 = 2;
        break;
    case 0:
        VAR4 = 0;
        break;
    default:
        FUN3(VAR9, VAR10, 4);
        return;
    }
    FUN8(VAR2, VAR4);
}