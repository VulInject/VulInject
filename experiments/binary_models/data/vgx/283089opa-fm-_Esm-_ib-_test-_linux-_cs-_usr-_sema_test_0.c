extern void FUN1 (void);
extern void FUN2 (void);

unsigned int VAR1;

int main (void)
{
VAR1 = 0;
FUN3 ();
FUN4 ();
FUN1 ();
FUN2 ();
return 0;
}