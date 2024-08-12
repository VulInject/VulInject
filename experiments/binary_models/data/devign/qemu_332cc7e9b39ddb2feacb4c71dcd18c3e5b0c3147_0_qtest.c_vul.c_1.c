static void FUN1(void *VAR1, int VAR2, int VAR3)
{
    qemu_irq VAR4 = *(VAR5 *)VAR1;
    FUN2(VAR4, VAR3);
    if (VAR6[VAR2] != VAR3)
    {
        VAR7 *VAR8 = VAR9;
        VAR6[VAR2] = VAR3;
        FUN3(VAR8);
        FUN4(VAR8, "", VAR3 ? "" : "", VAR2);
    }
}