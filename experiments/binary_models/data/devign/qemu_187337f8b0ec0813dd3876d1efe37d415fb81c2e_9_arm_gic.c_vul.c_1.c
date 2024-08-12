VAR1 *FUN1(uint32_t VAR2, qemu_irq VAR3)
{
    VAR4 *VAR5;
    VAR1 *VAR6;
    int VAR7;
    VAR5 = (VAR4 *)FUN2(sizeof(VAR4));
    if (!VAR5)
        return NULL;
    VAR6 = FUN3(VAR8, VAR5, VAR9);
    VAR5->VAR3 = VAR3;
    if (VAR2 != 0xffffffff)
    {
        VAR7 = FUN4(0, VAR10, VAR11, VAR5);
        FUN5(VAR2, 0x00000fff, VAR7);
        VAR7 = FUN4(0, VAR12, VAR13, VAR5);
        FUN5(VAR2 + 0x1000, 0x00000fff, VAR7);
        VAR5->VAR2 = VAR2;
    }
    else
    {
        VAR5->VAR2 = 0;
    }
    FUN6(VAR5);
    return VAR6;
}