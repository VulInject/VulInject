void FUN1(UInt32 VAR1, VAR2 *VAR3, VAR2 *VAR4, VAR2 *VAR5, VAR2 *VAR6)
{


UInt32 VAR7, VAR8, VAR9, VAR10;
__asm xor VAR11, VAR11;
__asm xor VAR12, VAR12;
__asm xor VAR13, VAR13;
__asm mov VAR14, VAR1;
__asm VAR15;
__asm mov VAR7, VAR14;
__asm mov VAR8, VAR11;
__asm mov VAR9, VAR12;
__asm mov VAR10, VAR13;

*VAR3 = VAR7;
*VAR4 = VAR8;
*VAR5 = VAR9;
*VAR6 = VAR10;


__asm__ FUN2 (
""
""
""
: "" (*VAR3) ,
"" (*VAR4) ,
""
""
""
: "" (*VAR3) ,
"" (*VAR4) ,
""
: "" (*VAR3) ,
"" (*VAR4) ,
"" (*VAR5) ,
"" (*VAR6)
: "" (VAR1), ""(0) ) ;



int VAR16[4];

FUN3(VAR16, (int)VAR1, 0);

*VAR3 = (VAR2)VAR16[0];
*VAR4 = (VAR2)VAR16[1];
*VAR5 = (VAR2)VAR16[2];
*VAR6 = (VAR2)VAR16[3];

}