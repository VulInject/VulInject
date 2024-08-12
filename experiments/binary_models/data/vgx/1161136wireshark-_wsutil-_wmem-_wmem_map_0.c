static guint32 VAR1; 


static guint32 VAR2;
static guint32 VAR3;

void
FUN1(void)
{
VAR1 = FUN2();
if (FUN3(VAR1 == 0))
VAR1 = 1;

VAR2  = FUN2();
VAR3 = FUN2();
}