VAR1 *FUN1(void)
{
    VAR1 *VAR2;
    FUN2();
    VAR2 = FUN3(sizeof(VAR1));
    if (!VAR2)
        return NULL;
    FUN4(VAR2, 0);
    VAR2->VAR3[VAR4] = 0x00080100;
    FUN5(VAR2, 1);
    VAR5 = 1;
    VAR6 = 1;
    VAR7 = 1;
    VAR8 = 1;
    FUN6(VAR2, 0x00080000);
    VAR2->VAR9 = 0xFFFFFFFC;
    VAR10 = VAR2;
    return VAR2;
}