void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, int VAR5)
{
    VAR2->VAR4 = (struct VAR3 *)FUN2(sizeof(struct VAR3) * VAR5);
    if (!VAR4 || VAR5 < 0x80)
    {
        fprintf(VAR6, "", VAR7);
        FUN3(-1);
    }
    VAR2->VAR4 = VAR4;
    FUN4((VAR8 *)VAR9, VAR2);
}