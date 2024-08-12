FUN1 (VAR1*   VAR2,
int         VAR3,
int         VAR4,
int         VAR5)
{
JoiningClass  VAR6;

while (1)
{
if (VAR3 == 0 && VAR5 < 0)
return VAR7;

VAR3 += VAR5;

if (VAR3 >= VAR4)
return VAR7;

if (VAR2[VAR3] < 0x0700 ||
VAR2[VAR3] >= 0x074F)
{
if (VAR2[VAR3] == 0x200C)
return VAR8;
else
return VAR7;
}
else
VAR6 =  VAR9[VAR2[VAR3] - 0x0700];

if (!VAR5 || VAR6 != VAR10)
return VAR6;
}
}