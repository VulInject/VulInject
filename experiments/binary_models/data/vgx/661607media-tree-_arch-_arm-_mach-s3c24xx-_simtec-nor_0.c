static void FUN1(struct VAR1 *VAR2, int VAR3)
{
unsigned int VAR4;

VAR4 = FUN2(VAR5);

FUN3(VAR6 "", VAR7, VAR3);

if (VAR3)
VAR4 |= VAR8;
else
VAR4 &= ~VAR8;

FUN4(VAR4, VAR5);
}