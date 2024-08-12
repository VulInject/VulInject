FUN1 (const unsigned char *VAR1, unsigned long VAR2,
int VAR3)
{
struct VAR4 *VAR5;
struct VAR6 *VAR7;
int VAR8, read;

VAR5 = (struct VAR4 *) FUN2 (sizeof *VAR5);
VAR5->VAR9 = VAR10;

VAR7 = (struct VAR6 *) FUN2 (sizeof *VAR7);
VAR5->VAR11.VAR6 = VAR7;

if (VAR2 < 2)
FUN3 (FUN4(""));

VAR8 = FUN5 (VAR3, VAR1);

if (VAR8 == 0)
{
if (VAR2 < 4)
FUN3 (FUN4(""));
VAR7->VAR12 = 0;
VAR7->VAR13 = FUN6 (VAR1 + 4, VAR2 - 4, VAR3,
&read);
}
else if (VAR8 == 1)
{
unsigned int VAR14;

if (VAR2 < 8)
FUN3 (FUN4(""));
VAR7->VAR12 = FUN7 (VAR3, VAR1 + 4);
VAR14 = FUN5 (VAR3, VAR1 + 2);
if (VAR14 + 4 >= VAR2)
FUN3 (FUN4(""));
VAR7->VAR13 = FUN8 (VAR1 + 4 + VAR14,
VAR2 - (4 + VAR14),
VAR3,
&read);
}
else
FUN9 (FUN4(""), VAR8);

return VAR5;
}