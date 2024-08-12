FUN1 (void)
{

unsigned int VAR1, VAR2, VAR3, VAR4;


asm volatile (""
""
: "" (VAR1), "" (VAR2)
: "" (0x00200000));

if (((VAR1 ^ VAR2) & 0x00200000) == 0)
return;


asm volatile (""
: "" (VAR1), "" (VAR2), "" (VAR3), "" (VAR4)
: "" (0));

if (VAR1 == 0)
return;

asm volatile (""
: "" (VAR1), "" (VAR2), "" (VAR3), "" (VAR4)
: "" (1));

if (VAR4 & VAR5)
{
unsigned int VAR6 = FUN2 ();

VAR6 |= VAR7;

if (VAR4 & VAR8)
{

struct
{
unsigned short int VAR9;
unsigned short int VAR10;
unsigned short int VAR11;
unsigned short int VAR12;
long int VAR13;
long int VAR14;
long int VAR15;
long int VAR16;
long int VAR6;
long int VAR17;
long int VAR18[32];
long int VAR19[32];
long int VAR20[56];
} FUN3 ((FUN4 (16))) VAR21;

FUN5 (&VAR21, 0, sizeof (VAR21));

asm volatile ("" : "" (VAR21) : "" (VAR21));

if (VAR21.VAR17 & VAR22)
VAR6 |= VAR22;
}

FUN6 (VAR6);
}
unsigned int VAR6 = FUN2 ();
VAR6 |= VAR22 | VAR7;
FUN6 (VAR6);
}