static VAR1 FUN1(void *VAR2, hwaddr VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR2;
    uint8_t VAR7[8];
    unsigned VAR8;
    for (VAR8 = 0; VAR8 < VAR4; ++VAR8)
    {
        VAR7[VAR8] = FUN2(VAR6);
    }
    switch (VAR4)
    {
    case 1:
        return VAR7[0];
    case 2:
        return FUN3(VAR7);
    case 4:
        return (VAR9)FUN4(VAR7);
    case 8:
        return FUN5(VAR7);
    }
    FUN6();
}