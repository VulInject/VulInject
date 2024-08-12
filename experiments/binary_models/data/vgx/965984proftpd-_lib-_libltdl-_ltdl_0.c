FUN1 (lt_dlhandle VAR1, char *VAR2)
{
char	*VAR3, *VAR4 = 0;
int   VAR5 = 0;
int	VAR6;
char	**VAR7 = 0;
int	VAR8 = 0;

VAR1->VAR5 = 0;

if (!VAR2)
{
return VAR8;
}
++VAR8;

if (VAR9)
{
VAR4 = FUN2 (VAR9);
if (!VAR4)
goto VAR10;
}


VAR3 = VAR2;
while (*VAR3)
{
if (!FUN3 ((unsigned char) *VAR3))
{
char *VAR11 = VAR3+1;
while (*VAR11 && !FUN3((unsigned char) *VAR11))
{
++VAR11;
}

if (FUN4(VAR3, "", 2) == 0 || FUN4(VAR3, "", 2) == 0)
{
char VAR12 = *VAR11;
*VAR11 = 0; 
if (FUN5(VAR3+2))
{
goto VAR10;
}
*VAR11 = VAR12;
}
else
{
++VAR5;
}

VAR3 = VAR11;
}
else
{
++VAR3;
}
}


if (!VAR5)
{
VAR8 = 0;
goto VAR10;
}

VAR7 = FUN6 (char *, VAR5);
if (!VAR7)
goto VAR10;


VAR5 = 0;
VAR3 = VAR2;
while (*VAR3)
{
if (FUN3 ((unsigned char) *VAR3))
{
++VAR3;
}
else
{
char *VAR11 = VAR3+1;
while (*VAR11 && !FUN3 ((unsigned char) *VAR11))
{
++VAR11;
}

if (FUN4(VAR3, "", 2) != 0 && FUN4(VAR3, "", 2) != 0)
{
char *VAR13;
char VAR12 = *VAR11;
*VAR11 = 0; 
if (FUN4(VAR3, "", 2) == 0)
{
size_t VAR14 = 3+  FUN7 (VAR3 + 2);
VAR13 = FUN6 (char, 1+ VAR14);
if (VAR13)
sprintf (VAR13, "", VAR3+2);
}
else
VAR13 = FUN2(VAR3);

if (!VAR13)
goto VAR15;

VAR7[VAR5++] = VAR13;
*VAR11 = VAR12;
}
VAR3 = VAR11;
}
}


if (VAR5)
{
lt_dlhandle VAR16 = VAR1;
int	VAR17 = 0;

VAR16->VAR2 = FUN6 (VAR18, VAR5);
if (!VAR16->VAR2)
goto VAR15;

for (VAR6 = 0; VAR6 < VAR5; ++VAR6)
{
VAR16->VAR2[VAR17] = FUN8(VAR7[VAR5-1-VAR6]);
if (VAR16->VAR2[VAR17])
{
++VAR17;
}
}

VAR16->VAR5	= VAR17;	
VAR8		= 0;
}

VAR15:
for (VAR6 = 0; VAR6 < VAR5; ++VAR6)
{
FUN9 (VAR7[VAR6]);
}

VAR10:
FUN9 (VAR7);

if (VAR4) {
FUN10 (VAR9, VAR4);
}

return VAR8;
}