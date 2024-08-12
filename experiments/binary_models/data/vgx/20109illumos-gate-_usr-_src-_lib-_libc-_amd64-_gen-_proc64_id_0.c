static void
FUN1(void)
{
uint_t VAR1 = VAR2;
uint_t VAR3 = VAR4;
uint_t VAR5 = 0;
uint_t VAR6 = 0;
struct cpuid_values VAR7;
uint_t VAR8;
int VAR9;

VAR7.VAR10 = 0;
FUN2(0x80000000, (VAR11 *)&VAR7, -1);
VAR8 = VAR7.VAR10;

if (VAR8 >= 0x80000005) {	
FUN2(0x80000005, (VAR11 *)&VAR7, -1);
VAR1 = ((VAR7.VAR12 >> 24) & 0xff) * 1024;
}

if (VAR8 >= 0x80000006) {	
FUN2(0x80000006, (VAR11 *)&VAR7, -1);
VAR3 = ((VAR7.VAR12 >> 16) & 0xffff) * 1024;
VAR5 = ((VAR7.VAR13 >> 18) & 0x3fff) * 512 * 1024;
}


if (VAR8 >= 0x80000008 && VAR5 != 0) {
VAR6 = VAR5;


FUN2(0x80000008, (VAR11 *)&VAR7, -1);
VAR9 = (VAR7.VAR12 & 0xff) + 1;
if (VAR9 > 1)
VAR6 /= VAR9;


VAR6 += VAR3;
} else {
VAR6 = VAR3;
}

FUN3(VAR1, VAR3,
VAR6);
}