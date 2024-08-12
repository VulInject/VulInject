FUN1(VAR1, VAR2, VAR3, 0644);
FUN2(VAR1, "");


static int VAR4;
static unsigned int VAR5 = VAR6;

static int FUN3(const char *VAR7, const struct VAR8 *VAR9)
{
unsigned long long VAR10;
int VAR11;

VAR10 = FUN4(VAR7, NULL);
VAR11 = FUN5(VAR10);
if (VAR11 >= VAR12)
return -VAR13;
VAR4 = VAR11;
VAR5 = VAR6 << VAR11;
return 0;
}