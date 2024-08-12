VAR1 FUN1(struct socket *VAR2, const void *VAR3, size_t VAR4, int VAR5)
{
    if (VAR2->VAR6 == -1 && VAR2->VAR7)
    {
        FUN2(VAR2->VAR7, VAR3, VAR4);
        return VAR4;
    }
    return send(VAR2->VAR6, VAR3, VAR4, VAR5);
}