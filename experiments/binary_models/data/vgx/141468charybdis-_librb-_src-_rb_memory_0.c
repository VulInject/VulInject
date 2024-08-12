void
FUN1(void)
{
static int VAR1 = 0;

if(VAR1)
FUN2();

VAR1 = 1;

FUN3("");
FUN4("");
}