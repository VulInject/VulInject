static void FUN1(struct VAR1 *VAR2)
{
int VAR3;
unsigned int VAR4[4] = {1980, 198, 383, 970};

for (VAR3 = 0; VAR3 < 4; VAR3++)
VAR2->VAR5[VAR3] = VAR4[VAR3] * VAR2->VAR6 / 3300;
}