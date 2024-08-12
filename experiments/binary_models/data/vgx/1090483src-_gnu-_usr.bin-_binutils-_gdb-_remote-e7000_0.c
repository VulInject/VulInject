FUN1 (CORE_ADDR VAR1, unsigned char *VAR2, int VAR3)
{
int VAR4;
int VAR5;

FUN2 ("");
FUN3 (VAR6);
FUN4 (VAR7);
FUN3 ("");

for (VAR4 = 0; VAR4 < VAR3; VAR4 += VAR5)
{
char VAR8[VAR9 * 2 + 50];
int VAR10 = VAR4 + VAR1;
int VAR11;
int VAR12;
int VAR13 = 0;
int VAR14;

VAR5 = VAR3 - VAR4;
if (VAR5 > VAR9)
VAR5 = VAR9;

VAR8[VAR13++] = '';
VAR12 = 0;
if (VAR10 >= 0xffffff)
VAR14 = 4;
else if (VAR10 >= 0xffff)
VAR14 = 3;
else
VAR14 = 2;

VAR8[VAR13++] = VAR14 - 1 + '';

VAR12 += FUN5 (VAR8 + VAR13, VAR14 + VAR5 + 1);
VAR13 += 2;
while (VAR14 > 0)
{
VAR14--;
VAR12 += FUN5 (VAR8 + VAR13, VAR10 >> (8 * (VAR14)));
VAR13 += 2;
}

for (VAR11 = 0; VAR11 < VAR5; VAR11++)
{
VAR12 += FUN5 (VAR8 + VAR13, VAR2[VAR4 + VAR11]);
VAR13 += 2;
}
FUN5 (VAR8 + VAR13, ~VAR12);
VAR13 += 2;
VAR8[VAR13++] = '';
VAR8[VAR13++] = '';
VAR8[VAR13++] = 0;

FUN6 (VAR15, VAR8, VAR13);
VAR11 = FUN7 (0);
if (VAR11 == -1)
{

}
else if (VAR11 == VAR16)
{

FUN3 ("");
FUN8 ("");
}
else
{
FUN9 ("", VAR11);
while ((VAR11 = FUN7 (0)) > 0)
{
FUN9 ("", VAR11);
}
}
}


FUN10 ("");
FUN4 (VAR17);
FUN3 (VAR6);
FUN4 (VAR7);
FUN3 ("");

return VAR3;
}