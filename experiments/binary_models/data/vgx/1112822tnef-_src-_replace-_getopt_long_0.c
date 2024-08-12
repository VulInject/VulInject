FUN1 (char **argv)
{
int VAR1 = VAR2;
int VAR3 = VAR4;
int VAR5 = VAR6;
char *VAR7;




if (VAR8 > 0 && VAR5 >= VAR9)
{

char *VAR10 = malloc (VAR5 + 1);
if (VAR10 == NULL)
VAR8 = VAR9 = 0;
else
{
memset (FUN2 (VAR10, VAR11,
VAR9),
'', VAR5 + 1 - VAR9);
VAR9 = VAR5 + 1;
VAR11 = VAR10;
}
}

while (VAR5 > VAR3 && VAR3 > VAR1)
{
if (VAR5 - VAR3 > VAR3 - VAR1)
{

int VAR12 = VAR3 - VAR1;
register int VAR13;


for (VAR13 = 0; VAR13 < VAR12; VAR13++)
{
VAR7 = argv[VAR1 + VAR13];
argv[VAR1 + VAR13] = argv[VAR5 - (VAR3 - VAR1) + VAR13];
argv[VAR5 - (VAR3 - VAR1) + VAR13] = VAR7;
FUN3 (VAR1 + VAR13, VAR5 - (VAR3 - VAR1) + VAR13);
}

VAR5 -= VAR12;
}
else
{

int VAR12 = VAR5 - VAR3;
register int VAR13;


for (VAR13 = 0; VAR13 < VAR12; VAR13++)
{
VAR7 = argv[VAR1 + VAR13];
argv[VAR1 + VAR13] = argv[VAR3 + VAR13];
argv[VAR3 + VAR13] = VAR7;
FUN3 (VAR1 + VAR13, VAR3 + VAR13);
}

VAR1 += VAR12;
}
}



VAR2 += (VAR6 - VAR4);
VAR4 = VAR6;
}