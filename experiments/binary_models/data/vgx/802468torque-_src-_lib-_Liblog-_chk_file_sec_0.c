int FUN1 (LPWSTR VAR1, char *VAR2, int VAR3)
{
VAR4 *VAR5;
DWORD VAR6 = 0;
DWORD VAR7 = 0;
DWORD VAR8 = 0;
DWORD VAR9;

char VAR10[1024];
int VAR11=-1,VAR12=-1,VAR13;

do
{
DWORD VAR14;
VAR9 = FUN2 (VAR1, 2, (void *) &VAR5, 1024, &VAR6, &VAR7, &VAR8);

switch (VAR9)
{
case VAR15: 
return;
case VAR16:
case VAR17:
break;
default: 
return;
}

for (VAR14 = 0; VAR14 < VAR6; VAR14++)
{

int VAR18 = VAR5[VAR14].VAR19;

if (VAR18==512)
{
VAR13 = FUN3 (VAR1, VAR5[VAR14].VAR20,VAR2);
if (VAR13>VAR12)
VAR12=VAR13;
}
if (VAR18==513)
{
VAR13 = FUN3 (VAR1, VAR5[VAR14].VAR20, VAR2);
if (VAR13>VAR11)
VAR11=VAR13;
}
}
FUN4 (VAR5);
}
while (VAR9 == VAR16);


if (VAR3==0) 
return (VAR12==1)?1:0;

return (VAR12==0 && VAR11==1)?1:0;
}