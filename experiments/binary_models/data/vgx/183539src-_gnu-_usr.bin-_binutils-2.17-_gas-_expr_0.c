FUN1 (VAR1 *VAR2)
{
int VAR3;

if (*VAR4 == '''
&& VAR4[1] != ''')
{
VAR2->VAR5 = VAR6;
VAR2->VAR7 = 0;
return;
}


for (VAR3 = VAR8 - 1; VAR3 >= 0; VAR3--)
{
int VAR9;

VAR10[VAR3] = 0;
for (VAR9 = 0; VAR9 < VAR11; VAR9++)
{
if (*VAR4 == ''')
{
if (VAR4[1] != ''')
break;
++VAR4;
}
VAR10[VAR3] <<= 8;
VAR10[VAR3] += *VAR4;
++VAR4;
}

if (VAR3 < VAR8 - 1)
{

for (; VAR9 < VAR11; VAR9++)
VAR10[VAR3] <<= 8;
}

if (*VAR4 == '''
&& VAR4[1] != ''')
break;
}

if (VAR3 < 0)
{
FUN2 (FUN3(""));
VAR3 = 0;
}

if (VAR3 > 0)
{
int VAR12;
int VAR9;

VAR12 = VAR8 - VAR3;
for (VAR9 = 0; VAR9 < VAR12; VAR9++)
VAR10[VAR9] = VAR10[VAR3 + VAR9];
VAR3 = VAR12;
}

FUN4 (VAR13 == 16);
if (VAR3 > 2)
{
VAR2->VAR5 = VAR14;
VAR2->VAR7 = VAR3;
}
else
{
VAR2->VAR5 = VAR6;
if (VAR3 < 2)
VAR2->VAR7 = VAR10[0] & VAR15;
else
VAR2->VAR7 =
(((VAR10[1] & VAR15)
<< VAR13)
| (VAR10[0] & VAR15));
}


++VAR4;
}