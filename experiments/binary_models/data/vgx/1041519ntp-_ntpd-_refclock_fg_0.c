static void
FUN1(
int VAR1,
struct VAR2 *VAR2
)
{
struct VAR3 *VAR4;

VAR4 = VAR2->VAR5;



if (write(VAR4->VAR6.VAR7, VAR8, VAR9) != VAR9)
FUN2(VAR2, VAR10);
else
VAR4->VAR11++;



FUN3(&VAR2->VAR12, VAR4->VAR13);

return;

}