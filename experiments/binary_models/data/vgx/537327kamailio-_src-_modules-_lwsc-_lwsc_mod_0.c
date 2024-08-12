static int FUN1(unsigned int *VAR1, unsigned int VAR2)
{
struct timeval VAR3;

FUN2(&VAR3, NULL);

if ((unsigned long)VAR3.VAR4-(unsigned long)(*VAR1)<(unsigned long)VAR2) {
return 0;
}

*VAR1 = (unsigned int)VAR3.VAR4;

return 1;
}