static struct VAR1 *FUN1(struct VAR2 *VAR3, int VAR4)
{
    int VAR5;
    struct VAR1 *VAR6;
    VAR6 = (struct VAR1 *)FUN2(sizeof(struct VAR1) * 2);
    memset(VAR6, 0, sizeof(struct VAR1) * VAR4);
    VAR6[0].VAR7 = 0x10800000;
    VAR6[1].VAR7 = 0x08800040;
    VAR6[0].VAR8 = 0x02;
    VAR6[1].VAR8 = 0x02;
    VAR5 = FUN3(0, VAR9, VAR10, &VAR6[0]);
    FUN4(VAR6[0].VAR7, 0xfff, VAR5);
    FUN5("", 0, 0, VAR11, VAR12, &VAR6[0]);
    if (VAR4 < 2)
        return VAR6;
    VAR5 = FUN3(0, VAR9, VAR10, &VAR6[1]);
    FUN4(VAR6[1].VAR7, 0xfff, VAR5);
    FUN5("", 1, 0, VAR11, VAR12, &VAR6[1]);
    return VAR6;
}