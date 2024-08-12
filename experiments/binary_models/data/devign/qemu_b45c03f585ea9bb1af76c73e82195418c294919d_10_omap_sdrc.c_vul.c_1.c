struct VAR1 *FUN1(VAR2 *VAR3, hwaddr VAR4)
{
    struct VAR1 *VAR5 = (struct VAR1 *)FUN2(sizeof(struct VAR1));
    FUN3(VAR5);
    FUN4(&VAR5->VAR6, NULL, &VAR7, VAR5, "", 0x1000);
    FUN5(VAR3, VAR4, &VAR5->VAR6);
    return VAR5;
}