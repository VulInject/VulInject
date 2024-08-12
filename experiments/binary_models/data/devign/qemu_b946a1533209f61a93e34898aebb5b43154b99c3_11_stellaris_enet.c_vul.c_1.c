void FUN1(VAR1 *VAR2, uint32_t VAR3, qemu_irq VAR4)
{
    VAR5 *VAR6;
    int VAR7;
    FUN2(VAR2, "");
    VAR6 = (VAR5 *)FUN3(sizeof(VAR5));
    VAR7 = FUN4(0, VAR8, VAR9, VAR6);
    FUN5(VAR3, 0x00001000, VAR7);
    VAR6->VAR4 = VAR4;
    memcpy(VAR6->VAR10, VAR2->VAR10, 6);
    if (VAR2->VAR11)
    {
        VAR6->VAR12 = FUN6(VAR2->VAR11, VAR2->VAR13, VAR2->VAR14, VAR15, VAR16, VAR6);
        FUN7(VAR6->VAR12, VAR6->VAR10);
    }
    FUN8(VAR6);
    FUN9("", -1, 1, VAR17, VAR18, VAR6);
}