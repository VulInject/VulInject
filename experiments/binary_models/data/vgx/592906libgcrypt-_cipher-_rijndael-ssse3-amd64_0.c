FUN1 (VAR1 *VAR2, unsigned char *VAR3,
unsigned char *VAR4, const unsigned char *VAR5,
size_t VAR6)
{
unsigned int VAR7 = VAR2->VAR8;
byte VAR9[VAR10];

FUN2 ();

asm volatile (""
: 
: [VAR3] "" (*VAR3)
: "" );

for ( ;VAR6; VAR6-- )
{
FUN3 (VAR2, VAR7);

asm volatile (""
""
""
: [VAR4] "" (*VAR4)
: [VAR5] "" (*VAR5)
: "" );

VAR4 += VAR11;
VAR5  += VAR11;
}

asm volatile (""
: [VAR3] "" (*VAR3)
:
: "" );

FUN4 ();
}