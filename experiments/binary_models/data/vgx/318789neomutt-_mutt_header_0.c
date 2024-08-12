static void FUN1(struct VAR1 *VAR2, char *VAR3)
{
uintptr_t VAR4;

struct VAR5 *VAR6 = FUN2(VAR2->VAR7, VAR3);
if (!VAR6)
{
VAR4 = 1;
FUN3(VAR2->VAR7, VAR3, (void *) VAR4);
return;
}

VAR4 = (VAR8) VAR6->VAR9;
VAR4++;
VAR6->VAR9 = (void *) VAR4;
}