static inline int FUN1(unsigned long VAR1)
{
int VAR2;

if (VAR3 > 0 && FUN2(VAR1, &VAR4[VAR3]))
return 1;

for (VAR2 = 0; VAR2 < VAR5; VAR2++) {
struct VAR6 *VAR7 = &VAR4[VAR2];

if (FUN2(VAR1, VAR7))
continue;
VAR3 = VAR2;
return 1;
}
return 0;
}