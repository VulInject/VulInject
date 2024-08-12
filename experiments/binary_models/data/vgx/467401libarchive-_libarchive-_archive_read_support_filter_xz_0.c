static int
FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
const unsigned char *VAR5;
ssize_t VAR6;
uint32_t VAR7;
uint64_t VAR8;
int VAR9;

(void)VAR2; 

VAR5 = FUN2(VAR4, 14, &VAR6);
if (VAR5 == NULL)
return (0);



VAR9 = 0;
if (VAR5[0] > (4 * 5 + 4) * 9 + 8)
return (0);

if (VAR5[0] == 0x5d || VAR5[0] == 0x5e)
VAR9 += 8;


VAR8 = FUN3(VAR5+5);
if (VAR8 == (VAR10)FUN4(-1))
VAR9 += 64;


VAR7 = FUN5(VAR5+1);
switch (VAR7) {
case 0x00001000:
case 0x00002000:
case 0x00004000:
case 0x00008000:
case 0x00010000:
case 0x00020000:
case 0x00040000:
case 0x00080000:
case 0x00100000:
case 0x00200000:
case 0x00400000:
case 0x00800000:
case 0x01000000:
case 0x02000000:
case 0x04000000:
case 0x08000000:
VAR9 += 32;
break;
default:

if (VAR7 <= 0x03F00000 && VAR7 >= 0x00300000 &&
(VAR7 & ((1 << 20)-1)) == 0 &&
VAR9 == 8 + 64) {
VAR9 += 32;
break;
}

return (0);
}



return (VAR9);
}