static int FUN1(const char *VAR1)
{
    struct VAR2 *VAR3;
    bdaddr_t VAR4;
    if (VAR5 >= VAR6)
    {
        FUN2("", VAR6);
        return -1;
    }
    VAR3 = FUN3(VAR1);
    if (!VAR3)
        return -1;
    VAR4.VAR7[0] = 0x52;
    VAR4.VAR7[1] = 0x54;
    VAR4.VAR7[2] = 0x00;
    VAR4.VAR7[3] = 0x12;
    VAR4.VAR7[4] = 0x34;
    VAR4.VAR7[5] = 0x56 + VAR5;
    VAR3->FUN4(VAR3, VAR4.VAR7);
    VAR8[VAR5++] = VAR3;
    return 0;
}