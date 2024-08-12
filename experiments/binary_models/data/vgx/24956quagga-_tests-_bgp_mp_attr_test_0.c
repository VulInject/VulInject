FUN1 (struct VAR1 *VAR1, struct VAR2 *VAR3,
int VAR4, int VAR5)
{
int VAR6 = VAR7;

if (!VAR4)
{
safi_t VAR8 = VAR3->VAR8;

if (FUN2 (VAR3->VAR9, &VAR8) != VAR3->VAR10)
VAR7++;

FUN3 ("",
VAR3->VAR9, VAR3->VAR8, VAR8,
VAR1->VAR11[VAR3->VAR9][VAR8],
VAR1->VAR12[VAR3->VAR9][VAR8]);
}

FUN3 ("", VAR4 ? "" : "");
if (!VAR4)
FUN3 ("", VAR5 ? "" : "");
FUN3 ("", VAR3->VAR13 ? "" : "");

if ((VAR4 != 0 || VAR5 != 0) != (VAR3->VAR13 != 0))
VAR7++;


if (VAR14)
FUN3 ("", (VAR7 > VAR6) ? VAR15 "" VAR16 
: VAR17 "" VAR16);
else
FUN3 ("", (VAR7 > VAR6) ? "" : "" );

if (VAR7)
FUN3 ("", VAR7);

FUN3 ("");
}