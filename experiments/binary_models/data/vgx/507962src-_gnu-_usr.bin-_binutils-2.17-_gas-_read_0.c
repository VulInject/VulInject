FUN1 (
register int VAR1	)
{
register char *VAR2;
int VAR3;			
register char *VAR4;		
char VAR5[VAR6];

if (FUN2 ())
{
FUN3 ();
return;
}

FUN4 ();

do
{

FUN5 ();


if (VAR7[0] == ''
&& FUN6 (VAR7[1]))
VAR7 += 2;


if (VAR7[0] == '')
{
++VAR7;
VAR3 = FUN7 (VAR1, VAR5);
if (VAR3 < 0)
{
FUN8 ();
return;
}
}
else
{
VAR4 = FUN9 (VAR1, VAR5, &VAR3);
FUN10 (VAR3 <= VAR6);
FUN10 (VAR3 > 0);
if (VAR4)
{
FUN11 (FUN12(""), VAR4);
FUN8 ();
return;
}
}

if (!VAR8)
{
int VAR9;

VAR9 = 1;

if (*VAR7 == '')
{
expressionS VAR10;

++VAR7;
FUN13 (&VAR10);

if (VAR10.VAR11 != VAR12
|| VAR10.VAR13 <= 0)
FUN14 (FUN12(""));
else
VAR9 = VAR10.VAR13;
}

while (--VAR9 >= 0)
{
VAR2 = FUN15 (VAR3);
memcpy (VAR2, VAR5, (unsigned int) VAR3);
}
}
FUN5 ();
}
while (*VAR7++ == '');


--VAR7;
FUN3 ();
}