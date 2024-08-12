static unsigned int FUN1(VAR1 *VAR2)
{
unsigned int VAR3 = 0;
int VAR4;

if (!VAR2)
return 0;


for (VAR4 = 0; VAR4 < VAR5; VAR4++)
VAR3 += FUN2(VAR2[VAR4]);

return VAR3;
}