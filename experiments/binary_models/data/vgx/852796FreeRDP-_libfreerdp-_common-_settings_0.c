void FUN1(VAR1* VAR2, UINT32 VAR3,
UINT32 VAR4)
{
UINT32 VAR5 = 0;

if (!VAR3 && !VAR4)
VAR5 = VAR6;
else if (VAR3 && !VAR4)
VAR5 = VAR7;
else if (VAR3 && VAR4)
VAR5 = VAR8;

FUN2(VAR2, VAR5);
}