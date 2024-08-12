FUN1 (void)
{
int VAR1 = 0;
int VAR2 = 0;

FUN2 (1, "");

do
{
VAR1 = getc (VAR3);
FUN3 (VAR1, VAR3);

VAR1 &= 0x7f;
}
while (FUN4 (VAR1) && VAR1 != VAR4);

FUN2 (-1, "");

VAR1 = getc (VAR3);
while (VAR1 != VAR5)
{
FUN5 ("", VAR1);
VAR2++;
if (VAR2 == 32)
{
FUN5 ("");
VAR2 = 0;
}
VAR1 = getc (VAR3);
}
}