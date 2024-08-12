static int FUN1(int VAR1, int *VAR2, VAR3 *VAR4)
{
int VAR5 = VAR4->VAR6[(*VAR2)++].VAR7.VAR8;
int VAR9;
int VAR10;
int VAR11 = 2*sizeof(int);
int VAR12,VAR13;


if (FUN2(VAR1, VAR5)== -1) return -1 ;


VAR12 = FUN3(VAR1, 0, VAR14);
FUN3(VAR1, sizeof(int), VAR14);


for (VAR9 = 0; VAR9 < VAR5; VAR9++) {
VAR10 = FUN4(VAR1, VAR2, VAR4);
if (VAR10 == -1) return -1;

VAR11 += VAR10;
}
VAR13 = FUN3(VAR1, 0, VAR14);
if (VAR13 < 0) return -1;


FUN3(VAR1, VAR12, VAR15);
if (FUN2(VAR1, VAR13) == -1) return -1;


FUN3(VAR1, VAR13, VAR15);
return VAR11;
}