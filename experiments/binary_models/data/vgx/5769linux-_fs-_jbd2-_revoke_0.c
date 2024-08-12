static struct VAR1 *FUN1(VAR2 *VAR3,
unsigned long long VAR4)
{
struct VAR5 *VAR6;
struct VAR1 *VAR7;

VAR6 = &VAR3->VAR8->VAR9[FUN2(VAR3, VAR4)];

FUN3(&VAR3->VAR10);
VAR7 = (struct VAR1 *) VAR6->VAR11;
while (&(VAR7->VAR12) != VAR6) {
if (VAR7->VAR4 == VAR4) {
FUN4(&VAR3->VAR10);
return VAR7;
}
VAR7 = (struct VAR1 *) VAR7->VAR12.VAR11;
}
FUN4(&VAR3->VAR10);
return NULL;
}