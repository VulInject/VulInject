void FUN1(double *VAR1, double VAR2)
{
int VAR3 = VAR1[5]*2+0.5;
double VAR4 = VAR2/VAR3; 
double VAR5 = VAR4, VAR6 = VAR1[4];
int VAR7;
FUN2(0,0);

for ( VAR7 = 0; VAR7 < VAR3; VAR7++, VAR6 = -VAR6 ) {
FUN3(VAR5-VAR4/2.,VAR6); FUN3(VAR5,0);
VAR5 += VAR4;
}
VAR8;
}