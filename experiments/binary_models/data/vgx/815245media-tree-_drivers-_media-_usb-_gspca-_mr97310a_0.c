static void FUN1(struct VAR1 *VAR1,
VAR2 *VAR3,		
int VAR4)		
{
struct VAR5 *VAR5 = (struct VAR5 *) VAR1;
unsigned char *VAR6;

VAR6 = FUN2(VAR1, &VAR5->VAR7, VAR3, VAR4);
if (VAR6) {
int VAR8;


VAR8 = VAR6 - VAR3;
if (VAR8 > sizeof VAR9)
VAR8 -= sizeof VAR9;
else
VAR8 = 0;
FUN3(VAR1, VAR10,
VAR3, VAR8);

FUN3(VAR1, VAR11,
VAR9, sizeof VAR9);
VAR4 -= VAR6 - VAR3;
VAR3 = VAR6;
}
FUN3(VAR1, VAR12, VAR3, VAR4);
}