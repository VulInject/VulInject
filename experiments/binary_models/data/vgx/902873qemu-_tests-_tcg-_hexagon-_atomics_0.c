static inline long long FUN1(volatile long long *VAR1)
{
long long VAR2, VAR3;
VAR4 FUN2(
""
""
""
""
""
: ""(VAR2), ""(VAR3)
: ""(VAR1)
: "", "");
return VAR2;
}


volatile int VAR5 = 1;

volatile long long VAR6 = 1;
int VAR7;

void *FUN3(void *VAR8)
{
int VAR9;

for (VAR9 = 0; VAR9 < VAR10; VAR9++) {
FUN4(&VAR5);
FUN1(&VAR6);
}
return NULL;
}