void *FUN1(void)
{
    struct VAR1 *VAR2;
    VAR2 = FUN2(sizeof(*VAR2));
    VAR2->VAR3 = FUN3(0, 0);
    if (VAR2->VAR3 == -1)
        goto VAR4;
    FUN4(VAR2->VAR3, VAR5, VAR6);
    if (FUN5(VAR7, &VAR2->VAR8) != 0)
        goto VAR9;
    FUN6(VAR2->VAR3, VAR10, NULL, VAR11, VAR12, VAR2);
    return VAR2;
VAR9:
    close(VAR2->VAR3);
VAR4:
    FUN7(VAR2);
    return NULL;
}