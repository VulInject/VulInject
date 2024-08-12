int main (void)
{
extern void FUN1 (void);

FUN2 ();
if (VAR1.VAR2.VAR3 != 1
|| VAR1.VAR2.VAR4 != 2
|| VAR1.VAR2.VAR5 != 3
|| VAR1.VAR2.VAR6 != 4)
FUN1 ();
return 0;
}