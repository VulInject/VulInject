static void FUN1(void *VAR1, unsigned int VAR2)
{
const unsigned long VAR3 = VAR4.VAR5;
void *VAR6 = (void *)((unsigned long)VAR1 & ~(VAR3 - 1));
void *VAR7 = VAR1 + VAR2;

if (VAR6 >= VAR7)
return;

for (; VAR6 < VAR7; VAR6 += VAR3)
FUN2(VAR6);
}