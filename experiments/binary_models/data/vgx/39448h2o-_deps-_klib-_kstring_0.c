int FUN1(char *VAR1, int VAR2, int *VAR3, int **VAR4)
{
int VAR5, VAR6, VAR7, VAR8, VAR9, *VAR10, VAR11;
VAR6 = 0; VAR7 = *VAR3; VAR10 = *VAR4;
VAR11 = strlen(VAR1);

if (VAR4) {						\
VAR1[VAR5] = 0;					\
if (VAR6 == VAR7) {					\
int *VAR12;				\
VAR7 = VAR7? VAR7<<1 : 2;			\
if ((VAR12 = (int*)realloc(VAR10, sizeof(int) * VAR7))) {  \
VAR10 = VAR12;			\
} else	{				\
free(VAR10);			\
*VAR4 = NULL;		\
return 0;			\
}					\
}						\
VAR10[VAR6++] = VAR9;			\
} else ++VAR6;						\
} while (0)

for (VAR5 = 0, VAR8 = VAR9 = 0; VAR5 <= VAR11; ++VAR5) {
if (VAR2 == 0) {
if (FUN2(VAR1[VAR5]) || VAR1[VAR5] == 0) {
if (FUN3(VAR8)) VAR13; 
} else {
if (FUN2(VAR8) || VAR8 == 0) VAR9 = VAR5;
}
} else {
if (VAR1[VAR5] == VAR2 || VAR1[VAR5] == 0) {
if (VAR8 != 0 && VAR8 != VAR2) VAR13; 
} else {
if (VAR8 == VAR2 || VAR8 == 0) VAR9 = VAR5;
}
}
VAR8 = VAR1[VAR5];
}
*VAR3 = VAR7; *VAR4 = VAR10;
return VAR6;
}