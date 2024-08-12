static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5[0]->VAR6;
    uint8_t VAR7[5] = {0x00, 0x40, 0x00, 0x00, 0x00};
    if (VAR4->VAR8 < 4)
    {
        FUN2(VAR2, VAR9, "");
        return VAR10;
    }
    switch (VAR4->VAR6->VAR11)
    {
    case VAR12:
        VAR7[2] = 0x00;
        VAR7[3] = FUN3(VAR4->VAR13 + 0);
        VAR7[4] = 2;
        break;
    case VAR14:
        VAR7[2] = 0x01;
        VAR7[3] = FUN3(VAR4->VAR13 + 0);
        VAR7[4] = 3;
        break;
    default:
        return VAR10;
    }
    FUN4(VAR2->VAR15, VAR7, 2);
    return 0;
}