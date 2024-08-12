static int FUN1(VAR1 *VAR2)
{
    switch (VAR2->VAR3 >> 20)
    {
    case 128:
        return VAR4;
    case 256:
        return VAR5;
    case 512:
        return VAR6;
    case 1024:
        return VAR7;
    default:
        break;
    }
    FUN2("" VAR8 "", VAR2->VAR3);
    VAR2->VAR3 = 512 << 20;
    return VAR6;
}