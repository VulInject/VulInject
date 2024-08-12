int FUN1(VAR1 *VAR2)
{
    if (!VAR2->VAR3->VAR4)
    {
        FUN2(VAR5, VAR2->VAR3->VAR6);
        return -1;
    }
    assert(VAR2->VAR7->VAR8 != NULL);
    VAR9 = true;
    return VAR2->VAR7->FUN3(VAR2);
}