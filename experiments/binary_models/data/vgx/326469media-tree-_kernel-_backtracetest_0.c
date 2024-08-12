static void FUN1(void)
{
struct stack_trace VAR1;
unsigned long VAR2[8];

FUN2("");
FUN2("");

VAR1.VAR3 = 0;
VAR1.VAR4 = FUN3(VAR2);
VAR1.VAR2 = VAR2;
VAR1.VAR5 = 0;

FUN4(&VAR1);
FUN5(&VAR1, 0);
}