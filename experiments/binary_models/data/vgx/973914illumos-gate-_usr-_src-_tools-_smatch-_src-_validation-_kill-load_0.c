int FUN1(int *VAR1, int VAR2)		{ return *VAR1 && 0; }
void FUN2(volatile int *VAR1,int VAR2)	{ int VAR3 = VAR2++; if (VAR2 && 0) VAR1[VAR3]; }