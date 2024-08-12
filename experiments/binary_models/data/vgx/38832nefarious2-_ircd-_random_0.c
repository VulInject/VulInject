unsigned int FUN1(void)
{
struct timeval VAR1;
char VAR2[3];


FUN2(&VAR1, 0);
VAR2[0] = VAR1.VAR3;
VAR2[1] = VAR1.VAR3 >> 8;
VAR2[2] = VAR1.VAR3 >> 16;
FUN3(VAR2, 3);


VAR4.VAR5[0] = 0x67452301;
VAR4.VAR5[1] = 0xefcdab89;
VAR4.VAR5[2] = 0x98badcfe;
VAR4.VAR5[3] = 0x10325476;
FUN4(VAR4.VAR5, (VAR6*)VAR4.VAR7);


FUN3((char*)VAR4.VAR5, 12);


return VAR4.VAR5[3];
}