int main()
{
int VAR1, VAR2, VAR3;
int VAR4;
int VAR5;

VAR2         = 0x11777066;
VAR3         = 0x55AA70FF;
VAR5     = 0x0F;
__asm
(""
""
: ""(VAR1), ""(VAR4)
: ""(VAR2), ""(VAR3)
);
VAR4 = (VAR4 >> 24) & 0x0F;
assert(VAR1  == VAR5);
assert(VAR4 == VAR5);

VAR2     = 0x11777066;
VAR3     = 0x11707066;
VAR5 = 0x0B;
__asm
(""
""
: ""(VAR1), ""(VAR4)
: ""(VAR2), ""(VAR3)
);
VAR4 = (VAR4 >> 24) & 0x0F;
assert(VAR1  == VAR5);
assert(VAR4 == VAR5);

return 0;
}