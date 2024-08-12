static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    uint8_t VAR7[8];
    unsigned VAR8;
    switch (VAR4)
    {
    case 1:
        VAR7[0] = VAR3;
        break;
    case 2:
        FUN2(VAR7, VAR3);
        break;
    case 4:
        FUN3(VAR7, VAR3);
        break;
    case 8:
        FUN4(VAR7, VAR3);
        break;
    default:
        FUN5();
    }
    for (VAR8 = 0; VAR8 < VAR4; ++VAR8)
    {
        FUN6(VAR6, VAR7[VAR8]);
    }
}