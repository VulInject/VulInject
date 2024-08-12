static struct VAR1 *FUN1(struct VAR1 *VAR2, const char *VAR3, unsigned VAR4)
{
    struct VAR1 **VAR5;
    VAR2->VAR6++;
    VAR2 = realloc(VAR2, sizeof(*VAR2) + sizeof(VAR2->VAR7[0]) * VAR2->VAR6);
    VAR5 = &VAR2->VAR7[VAR2->VAR6 - 1];
    *VAR5 = FUN2(VAR2->VAR8, VAR2, VAR3);
    if (FUN3(VAR4))
    {
        *VAR5 = FUN4(*VAR5);
    }
    return VAR2;
}