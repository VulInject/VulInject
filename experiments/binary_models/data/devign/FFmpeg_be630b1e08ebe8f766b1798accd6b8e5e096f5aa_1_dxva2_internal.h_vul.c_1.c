unsigned FUN1(const VAR1 *VAR2, const VAR3 *VAR4, const VAR5 *VAR6)
{
    void *VAR7 = FUN2(VAR6);
    unsigned VAR8;
    for (VAR8 = 0; VAR8 < FUN3(VAR2, VAR4); VAR8++)
        if (FUN4(VAR2, VAR4, VAR8) == VAR7)
            return VAR8;
    assert(0);
    return 0;
}