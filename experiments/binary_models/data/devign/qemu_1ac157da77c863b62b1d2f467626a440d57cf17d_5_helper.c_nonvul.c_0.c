void FUN1(int VAR1)
{
    switch (VAR1)
    {
    case 0:
        FUN2(VAR2, VAR3);
        break;
    case 3:
        FUN3(VAR2, VAR3);
        break;
    case 4:
        FUN4(VAR2, VAR3);
        break;
    default:
        VAR2->VAR4[VAR1] = VAR3;
        break;
    }
}