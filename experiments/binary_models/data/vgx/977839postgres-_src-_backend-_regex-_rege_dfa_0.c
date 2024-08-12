static unsigned
FUN1(unsigned *VAR1,
int VAR2)
{
int			VAR3;
unsigned	VAR4;

VAR4 = 0;
for (VAR3 = 0; VAR3 < VAR2; VAR3++)
VAR4 ^= VAR1[VAR3];
return VAR4;
}