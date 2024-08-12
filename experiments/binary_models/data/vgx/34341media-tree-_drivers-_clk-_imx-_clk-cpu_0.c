static int FUN1(struct VAR1 *VAR2, unsigned long VAR3,
unsigned long VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
int VAR7;


VAR7 = FUN3(VAR6->VAR8, VAR6->VAR9);
if (VAR7)
return VAR7;


VAR7 = FUN4(VAR6->VAR10, VAR3);
if (VAR7) {
FUN3(VAR6->VAR8, VAR6->VAR10);
return VAR7;
}

FUN3(VAR6->VAR8, VAR6->VAR10);


FUN4(VAR6->VAR11, VAR3);

return 0;
}