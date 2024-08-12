static int FUN1(uint32_t VAR1, qemu_irq VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8;
    VAR8 = (VAR7 *)FUN2(sizeof(VAR7));
    VAR8->VAR2 = VAR2;
    VAR8->VAR4 = VAR4;
    VAR8->VAR9 = VAR6[0] | (VAR6[1] << 8) | (VAR6[2] << 16);
    VAR8->VAR10 = VAR6[3] | (VAR6[4] << 8) | (VAR6[5] << 16);
    FUN3(&VAR8->VAR11, NULL, &VAR12, VAR8, "", 0x00001000);
    FUN4(FUN5(), VAR1, &VAR8->VAR11);
    FUN6(VAR8);
    FUN7(NULL, -1, &VAR13, VAR8);
    return 0;
}