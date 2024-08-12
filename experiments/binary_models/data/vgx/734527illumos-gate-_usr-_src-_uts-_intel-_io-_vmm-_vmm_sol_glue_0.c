void *
FUN1(void)
{
void *VAR1;
struct VAR2 *VAR3;

VAR1 = FUN2(VAR4, VAR5);
VAR3 = FUN3(sizeof (struct VAR2), VAR5);
VAR3->VAR6 = VAR1;

FUN4(&VAR7);
FUN5(FUN6(VAR8,
(VAR9)FUN7(FUN8(VAR1)), (VAR10)VAR3) == 0);
FUN9(&VAR7);

return (VAR1);
}