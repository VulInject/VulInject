int FUN1(unsigned char ** VAR1, unsigned char VAR2[3])
{
unsigned char ** VAR3;
unsigned char * VAR4;
short VAR5;

if (VAR1 == NULL) return (0);



VAR3 = (unsigned char **) VAR1[VAR2[2]];



if (VAR3 == NULL)
{


VAR3 = (unsigned char **) malloc(256 * sizeof(unsigned char *));

if (VAR3 == NULL) return (1);



for (VAR5 = 0; VAR5 < 256; VAR5++) VAR3[VAR5] = NULL;



VAR1[VAR2[2]] = (unsigned char *) VAR3;
}



VAR4 = (unsigned char *) VAR3[VAR2[1]];



if (VAR4 == NULL)
{


VAR4 = (unsigned char *) malloc(32 * sizeof(unsigned char));

if (VAR4 == NULL) return (1);



for (VAR5 = 0; VAR5 < 32; VAR5++) VAR4[VAR5] = 0;



VAR3[VAR2[1]] = VAR4;
}



VAR4[FUN2(VAR2[0])] |= FUN3(VAR2[0]);

return (0);
}