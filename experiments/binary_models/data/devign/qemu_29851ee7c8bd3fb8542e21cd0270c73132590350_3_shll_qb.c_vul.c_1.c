int main()
{
    int VAR1, VAR2, VAR3;
    int VAR4, VAR5;
    VAR2 = 0x12345678;
    VAR4 = 0xA000C000;
    VAR5 = 1;
    __asm(""
          ""
          : ""(VAR1), ""(VAR3)
          : ""(VAR2));
    VAR3 = (VAR3 >> 22) & 0x01;
    assert(VAR3 == VAR5);
    assert(VAR1 == VAR4);
    return 0;
}