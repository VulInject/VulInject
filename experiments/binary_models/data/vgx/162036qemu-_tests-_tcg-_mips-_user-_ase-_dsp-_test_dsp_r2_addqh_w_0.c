int main()
{
int VAR1, VAR2, VAR3;
int VAR4;

VAR2     = 0x00000010;
VAR3     = 0x00000001;
VAR4 = 0x00000008;

__asm
(""
: ""(VAR1)
: ""(VAR2), ""(VAR3)
);

assert(VAR1 == VAR4);

VAR2     = 0xFFFFFFFE;
VAR3     = 0x00000001;
VAR4 = 0xFFFFFFFF;

__asm
(""
: ""(VAR1)
: ""(VAR2), ""(VAR3)
);

assert(VAR1 == VAR4);

return 0;
}