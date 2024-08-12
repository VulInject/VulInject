extern void FUN1(void);
extern void FUN2(void);












struct VAR1 *VAR2;
struct VAR3 *VAR4;



static inline int FUN3(void *VAR5, int VAR6)
{
unsigned long VAR7 = (unsigned long)VAR5;

VAR7 &= 3;
if (VAR6 & (1 << VAR7))
return 0;
return 1;
}