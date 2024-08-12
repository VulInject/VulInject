static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    memset(VAR4->VAR5, 0, sizeof(VAR4->VAR5));
    FUN3(&VAR4->VAR6);
    FUN3(&VAR4->VAR6);
    VAR4->VAR5[VAR7] |= VAR8;
    VAR4->VAR5[VAR9] = 0xFF;
    VAR4->VAR5[VAR10] = 1;
    VAR4->VAR5[VAR11] = 1;
    VAR4->VAR5[VAR12] = 0x01090106;
    VAR4->VAR5[VAR13] = VAR14;
    VAR4->VAR15 = 1;
    VAR4->VAR16 = 1;
    VAR4->VAR17 = 0;
    VAR4->VAR18 = VAR19;
    VAR4->VAR20 = 0;
    VAR4->VAR21 = false;
    FUN4(VAR4);
    FUN5(VAR4);
}