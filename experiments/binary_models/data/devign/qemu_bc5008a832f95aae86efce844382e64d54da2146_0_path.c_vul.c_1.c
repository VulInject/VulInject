static struct VAR1 *FUN1(const char *VAR2, struct VAR1 *VAR3, const char *VAR4)
{
    struct VAR1 *new = malloc(sizeof(*new));
    new->VAR4 = strdup(VAR4);
    new->VAR5 = FUN2("", VAR2, VAR4);
    new->VAR6 = 0;
    return new;
}