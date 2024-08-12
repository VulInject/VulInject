static void FUN1(VAR1 *VAR2, hwaddr VAR3)
{
    NvdimmFuncGetLabelSizeOut VAR4 = {
        .VAR5 = FUN2(sizeof(VAR4)),
    };
    uint32_t VAR6, VAR7;
    VAR6 = VAR2->VAR6;
    VAR7 = FUN3();
    FUN4("", VAR6, VAR7);
    VAR4.VAR8 = FUN2(VAR9);
    VAR4.VAR6 = FUN2(VAR6);
    VAR4.VAR10 = FUN2(VAR7);
    FUN5(VAR3, &VAR4, sizeof(VAR4));
}