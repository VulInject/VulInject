int
FUN1(unsigned char *VAR1)
{
unsigned char VAR2[32];

if (FUN2(VAR2,32) < 0)
return -1;

FUN3(VAR1, VAR2);

FUN4(VAR2, 0, 32);

return 0;
}