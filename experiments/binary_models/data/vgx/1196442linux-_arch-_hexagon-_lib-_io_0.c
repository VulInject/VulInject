}
FUN1(VAR1);


void FUN2(void VAR2 *VAR3, const void *VAR4, int VAR5)
{
const short int *VAR6 = (short int *)VAR4;
volatile short int *VAR7 = (short int *)VAR3;

if ((VAR8)VAR4 & 0x1)
FUN3("");

while (VAR5-- > 0)
*VAR7 = *VAR6++;


}