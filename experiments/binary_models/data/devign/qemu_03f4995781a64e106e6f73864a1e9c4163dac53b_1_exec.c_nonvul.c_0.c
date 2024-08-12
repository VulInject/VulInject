static VAR1 FUN1(void)
{
    unsigned VAR2;
    uint16_t VAR3;
    VAR3 = VAR4.VAR5++;
    assert(VAR3 != VAR6);
    assert(VAR3 != VAR4.VAR7);
    for (VAR2 = 0; VAR2 < VAR8; ++VAR2)
    {
        VAR4.VAR9[VAR3][VAR2].VAR10 = 0;
        VAR4.VAR9[VAR3][VAR2].VAR11 = VAR6;
    }
    return VAR3;
}