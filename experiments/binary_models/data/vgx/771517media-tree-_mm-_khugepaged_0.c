static int FUN1(void)
{
static int VAR1 = VAR2;
int VAR3, VAR4 = 0, VAR5 = 0;


for (VAR3 = 0; VAR3 < VAR6; VAR3++)
if (VAR7[VAR3] > VAR5) {
VAR5 = VAR7[VAR3];
VAR4 = VAR3;
}


if (VAR4 <= VAR1)
for (VAR3 = VAR1 + 1; VAR3 < VAR6;
VAR3++)
if (VAR5 == VAR7[VAR3]) {
VAR4 = VAR3;
break;
}

VAR1 = VAR4;
return VAR4;
}