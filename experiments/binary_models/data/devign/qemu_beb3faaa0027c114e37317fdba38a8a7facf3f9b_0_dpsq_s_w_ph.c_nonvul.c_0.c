int main()
{
    int VAR1, VAR2;
    int VAR3 = 5, VAR4 = 5;
    int VAR5, VAR6;
    VAR1 = 0xBC0123AD;
    VAR2 = 0x01643721;
    VAR5 = 0x00000004;
    VAR6 = 0xF15F94A3;
    __asm(""
          ""
          ""
          ""
          ""
          : ""(VAR3), ""(VAR4)
          : ""(VAR1), ""(VAR2));
    assert(VAR3 == VAR5);
    assert(VAR4 == VAR6);
    VAR3 = 0x1424EF1F;
    VAR4 = 0x1035219A;
    VAR1 = 0x800083AD;
    VAR2 = 0x80003721;
    VAR5 = 0x1424EF1E;
    VAR6 = 0xC5C0D901;
    __asm(""
          ""
          ""
          ""
          ""
          : ""(VAR3), ""(VAR4)
          : ""(VAR1), ""(VAR2));
    assert(VAR3 == VAR5);
    assert(VAR4 == VAR6);
    return 0;
}