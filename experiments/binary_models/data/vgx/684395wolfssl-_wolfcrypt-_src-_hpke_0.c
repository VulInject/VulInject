static int FUN1(int VAR1, int VAR2, VAR3* VAR4)
{
int VAR5;

if (VAR2 <= 0 || VAR2 > 32) {
return VAR6;
}



if ((VAR2 < 4 && VAR1 > ((1 << (VAR2 * 8)) - 1)) || (VAR2 >= 4 && VAR1 > 0x7fffffff)) {
return VAR6;
}


FUN2( VAR4, 0, VAR2 );

for (VAR5 = 0; VAR5 < VAR2 && VAR1 > 0; VAR5++) {
VAR4[VAR2-(VAR5 + 1)] = (VAR3)VAR1;
VAR1 >>= 8;
}

return 0;
}