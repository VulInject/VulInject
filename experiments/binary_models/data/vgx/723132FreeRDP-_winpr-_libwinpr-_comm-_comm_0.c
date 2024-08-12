VAR1 FUN1( LPCTSTR VAR2, LPCTSTR VAR3)
{
int VAR4 = 0;
LPTSTR VAR5 = NULL;
LPTSTR VAR6 = NULL;

if (!FUN2())
return VAR7;

EnterCriticalSection(&VAR8);

if (VAR9 == NULL)
{
FUN3(VAR10);
goto VAR11;
}

VAR5 = FUN4(VAR2);

if (VAR5 == NULL)
{
FUN3(VAR12);
goto VAR11;
}

VAR6 = FUN4(VAR3);

if (VAR6 == NULL)
{
FUN3(VAR12);
goto VAR11;
}

for (VAR4 = 0; VAR4 < VAR13; VAR4++)
{
if (VAR9[VAR4] != NULL)
{
if (FUN5(VAR9[VAR4]->VAR14, VAR5) == 0)
{

free(VAR9[VAR4]->VAR14);
free(VAR9[VAR4]->VAR15);
VAR9[VAR4]->VAR14 = VAR5;
VAR9[VAR4]->VAR15 = VAR6;
break;
}
}
else
{

VAR9[VAR4] = (VAR16*)calloc(1, sizeof(VAR16));

if (VAR9[VAR4] == NULL)
{
FUN3(VAR12);
goto VAR11;
}

VAR9[VAR4]->VAR14 = VAR5;
VAR9[VAR4]->VAR15 = VAR6;
break;
}
}

if (VAR4 == VAR13)
{
FUN3(VAR12);
goto VAR11;
}

LeaveCriticalSection(&VAR8);
return VAR17;
VAR11:
free(VAR5);
free(VAR6);
LeaveCriticalSection(&VAR8);
return VAR7;
}