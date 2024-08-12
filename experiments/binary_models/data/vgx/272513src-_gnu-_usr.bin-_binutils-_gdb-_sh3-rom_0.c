FUN1 (char *VAR1, int VAR2, char *VAR3, int VAR4)
{
int VAR5;
int VAR6;

VAR5 = 1;
VAR6 = -1;

if (VAR2 == 2)
{
switch (VAR1[0])
{
case '':
if (VAR1[1] == '')
VAR6 = VAR7;
break;
case '':
if (VAR1[1] == '')
VAR6 = VAR8;
else if (VAR1[1] == '')
VAR6 = VAR9;
break;
}
}
else if (VAR2 == 3)
{
switch (VAR1[0])
{
case '':
case '':
if (VAR1[1] == '' && VAR1[2] == '')
{
if (VAR1[0] == '')
VAR6 = VAR10;
else
VAR6 = VAR11;
}
break;
case '':
if (VAR1[1] == '' && VAR1[2] == '')
VAR6 = VAR12;
else if (VAR1[1] == '' && VAR1[2] == '')
VAR6 = VAR13;
break;
}
}
else if (VAR2 == 4)
{
switch (VAR1[0])
{
case '':
if (VAR1[1] == '' && VAR1[2] == '')
{
if (VAR1[3] == '')
VAR6 = VAR14;
else if (VAR1[3] == '')
VAR6 = VAR15;
}
break;
case '':
if (VAR1[1] == '' && VAR1[2] == '' && VAR1[3] == '')
{
VAR6 = VAR16;
VAR5 = 8;
}
}
}
else if (VAR2 == 5)
{
if (VAR1[1] == '' && VAR1[2] == '' && VAR1[3] == ''
&& VAR1[4] == '')
{
VAR6 = VAR16 + 8;
VAR5 = 8;
}
}
else if (VAR2 == 17)
{
}

if (VAR6 >= 0)
while (VAR5-- > 0)
VAR3 = FUN2 (VAR6++, VAR3);
}