void FUN1(VAR1 *VAR2, int VAR3, const unsigned char *VAR4)
{
CAST_LONG VAR5[16];
CAST_LONG VAR6[16];
CAST_LONG VAR7[32];
CAST_LONG VAR8[4],VAR9[4];
CAST_LONG VAR10,*VAR11;
int VAR12;

for (VAR12=0; VAR12<16; VAR12++) VAR5[VAR12]=0;
if (VAR3 > 16) VAR3=16;
for (VAR12=0; VAR12<VAR3; VAR12++)
VAR5[VAR12]=VAR4[VAR12];
if(VAR3 <= 10)
VAR2->VAR13=1;
else
VAR2->VAR13=0;

VAR11= &VAR7[0];
VAR8[0]=((VAR5[ 0]<<24)|(VAR5[ 1]<<16)|(VAR5[ 2]<<8)|VAR5[ 3])&0xffffffffL;
VAR8[1]=((VAR5[ 4]<<24)|(VAR5[ 5]<<16)|(VAR5[ 6]<<8)|VAR5[ 7])&0xffffffffL;
VAR8[2]=((VAR5[ 8]<<24)|(VAR5[ 9]<<16)|(VAR5[10]<<8)|VAR5[11])&0xffffffffL;
VAR8[3]=((VAR5[12]<<24)|(VAR5[13]<<16)|(VAR5[14]<<8)|VAR5[15])&0xffffffffL;

for (;;)
{
VAR10=VAR8[0]^VAR14[VAR5[13]]^VAR15[VAR5[15]]^VAR16[VAR5[12]]^VAR17[VAR5[14]]^VAR16[VAR5[ 8]];
FUN2(VAR10,VAR9,VAR6, 0);
VAR10=VAR8[2]^VAR14[VAR6[ 0]]^VAR15[VAR6[ 2]]^VAR16[VAR6[ 1]]^VAR17[VAR6[ 3]]^VAR17[VAR5[10]];
FUN2(VAR10,VAR9,VAR6, 4);
VAR10=VAR8[3]^VAR14[VAR6[ 7]]^VAR15[VAR6[ 6]]^VAR16[VAR6[ 5]]^VAR17[VAR6[ 4]]^VAR14[VAR5[ 9]];
FUN2(VAR10,VAR9,VAR6, 8);
VAR10=VAR8[1]^VAR14[VAR6[10]]^VAR15[VAR6[ 9]]^VAR16[VAR6[11]]^VAR17[VAR6[ 8]]^VAR15[VAR5[11]];
FUN2(VAR10,VAR9,VAR6,12);

VAR11[ 0]= VAR14[VAR6[ 8]]^VAR15[VAR6[ 9]]^VAR16[VAR6[ 7]]^VAR17[VAR6[ 6]]^VAR14[VAR6[ 2]];