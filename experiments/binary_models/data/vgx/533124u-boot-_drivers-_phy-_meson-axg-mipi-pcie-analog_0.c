static int FUN1(struct VAR1 *VAR1, void *VAR2)
{
struct VAR3 *VAR4 = VAR1->VAR4;
struct VAR5 *VAR6 = FUN2(VAR4);
struct VAR7 *VAR8 = VAR2;
int VAR9;

VAR9 = FUN3(VAR8);
if (VAR9)
return VAR9;

memcpy(&VAR6->VAR8, VAR8, sizeof(VAR6->VAR8));

VAR6->VAR10 = true;


if (VAR6->VAR11) {

if (VAR6->VAR12)
FUN4(VAR6);

FUN5(100);

FUN6(VAR6);
}

return 0;
}