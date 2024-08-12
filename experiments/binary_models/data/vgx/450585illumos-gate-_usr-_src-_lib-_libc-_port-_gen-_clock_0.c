VAR1
FUN1(void)
{
struct tms VAR2;
static int VAR3 = 0;
static clock_t VAR4;
extern int FUN2(void);		

if (FUN3(&VAR2) == (VAR1)-1)
return ((VAR1)-1);
if (VAR3 == 0) {
if ((VAR3 = FUN2()) == 0)
VAR3 = VAR5;
VAR4 = FUN4(VAR2);
}

return ((FUN4(VAR2) - VAR4) * (VAR6/VAR3));
}