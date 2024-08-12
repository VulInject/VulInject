int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    if (VAR2->VAR5->VAR6 == NULL)
    {
        return -VAR7;
    }
    memset(VAR4, 0, sizeof(*VAR4));
    VAR4->VAR8 = VAR2->VAR5->FUN1(VAR2);
    return VAR4->VAR8 < 0 ? VAR4->VAR8 : 0;
}