void *VAR1 = &VAR1;
__asm("");

extern void *VAR2;

void FUN1()
{
VAR2 = VAR1;
if (VAR1 != &VAR1)
FUN2(1, "");
}