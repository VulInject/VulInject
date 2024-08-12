static void FUN1(int *VAR1, const int *VAR2, const int *VAR3, int VAR4)
{
int VAR5;
int64_t VAR6;

VAR3 += VAR4-1;
for (VAR5=0; VAR5<VAR4; VAR5++) {
VAR6 = (VAR7)VAR2[VAR5] * VAR3[-VAR5];
VAR1[VAR5] = (int)((VAR6+0x40000000) >> 31);
}
}