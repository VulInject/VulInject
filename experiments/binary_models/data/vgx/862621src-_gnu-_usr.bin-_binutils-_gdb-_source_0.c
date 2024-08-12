FUN1 (char *VAR1, int VAR2)
{
int VAR3;
int VAR4;
VAR5 *VAR6;
int VAR7;
char *VAR8;

VAR7 = VAR9 + 1;

VAR8 = (char *) FUN2 (VAR1);
if (VAR8)
FUN3 ("", VAR8);

if (VAR10 == 0)
FUN4 (0);

VAR4 = FUN5 (VAR10);
if (VAR4 < 0)
FUN6 (VAR10->VAR11);

if (VAR10->VAR12 == 0)
FUN7 (VAR10, VAR4);

if (VAR7 < 1 || VAR7 > VAR10->VAR13)
{
close (VAR4);
FUN3 ("");
}

if (FUN8 (VAR4, VAR10->VAR12[VAR7 - 1], 0) < 0)
{
close (VAR4);
FUN6 (VAR10->VAR11);
}

VAR6 = FUN9 (VAR4, VAR14);
FUN10 (VAR6);
while (1)
{
static char *VAR15 = NULL;
char *VAR16;
int VAR17, VAR18;

VAR17 = 256;
VAR15 = xmalloc (VAR17);
VAR16 = VAR15;

VAR3 = getc (VAR6);
if (VAR3 == VAR19)
break;
do
{
*VAR16++ = VAR3;
if (VAR16 - VAR15 == VAR17)
{
VAR18 = VAR17 + VAR17 / 2;
VAR15 = xrealloc (VAR15, VAR18);
VAR16 = VAR15 + VAR17;
VAR17 = VAR18;
}
}
while (VAR3 != '' && (VAR3 = getc (VAR6)) >= 0);


if (VAR16 - VAR15 > 1 && VAR16[-2] == '')
{
VAR16--;
VAR16[-1] = '';
}


*VAR16 = 0;
if (FUN11 (VAR15) > 0)
{

fclose (VAR6);
FUN12 (VAR10, VAR7, VAR7 + 1, 0);
FUN13 (FUN14 (""),
FUN15 (VAR20,
(VAR21) VAR7));
VAR22 = FUN16 (VAR7 - VAR23 / 2, 1);
return;
}
VAR7++;
}

FUN17 ("");
fclose (VAR6);
}