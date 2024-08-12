static int FUN1(void *VAR1)
{
struct VAR2 *const VAR2 = VAR1;

while (!FUN2()) {
struct VAR3 *VAR3 = NULL;
bool VAR4 = false;

FUN3(
VAR2->VAR5,
FUN2() ||
(VAR2->VAR6 &&
(VAR3 = FUN4(VAR2->VAR7, VAR2->VAR8,
&VAR9))));
if (!VAR3)
continue;

if (VAR2->VAR6)
VAR4 = FUN5(VAR2, VAR3);
else
memset(VAR3->VAR10, 0, VAR3->VAR11);

FUN6(VAR3);
if (VAR4)
FUN7(VAR2->VAR12);
}
return 0;
}