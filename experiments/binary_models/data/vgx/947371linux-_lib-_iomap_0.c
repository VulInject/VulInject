FUN1(VAR1);
FUN1(VAR2);
FUN1(VAR3);

static void FUN2(u64 VAR4, unsigned long VAR5)
{
FUN3(VAR4, VAR5);
FUN3(VAR4 >> 32, VAR5 + sizeof(VAR6));
}