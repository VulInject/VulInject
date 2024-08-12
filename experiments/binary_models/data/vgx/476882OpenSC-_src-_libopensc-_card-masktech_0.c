static int FUN1(VAR1 * VAR2)
{
unsigned long VAR3;
struct VAR4 *VAR5;

FUN2(VAR2->VAR6,  "");


if (!(VAR5 = (struct VAR4 *) malloc(sizeof(*VAR5))))
return VAR7;
VAR2->VAR8 = VAR5;


VAR3 = VAR9 | VAR10;
FUN3(VAR2, 1024, VAR3, 0);
FUN3(VAR2, 2048, VAR3, 0);
FUN3(VAR2, 3072, VAR3, 0);
VAR2->VAR11 |= VAR12;
return VAR13;
}