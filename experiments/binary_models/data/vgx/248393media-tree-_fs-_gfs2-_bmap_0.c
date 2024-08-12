static inline unsigned int FUN1(void *VAR1, unsigned int VAR2, VAR3 *VAR4, size_t VAR5, int *VAR6)
{
const VAR3 *VAR7 = (VAR1 + VAR2);
const VAR3 *VAR8 = VAR4;
u64 VAR9 = FUN2(*VAR4);

*VAR6 = 0;
do {
VAR4++;
if (VAR4 >= VAR7)
break;
if (VAR5 && --VAR5 == 0)
break;
if (VAR9)
VAR9++;
} while(FUN2(*VAR4) == VAR9);
if (VAR4 >= VAR7)
*VAR6 = 1;
return (VAR4 - VAR8);
}