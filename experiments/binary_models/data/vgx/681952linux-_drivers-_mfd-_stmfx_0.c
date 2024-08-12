static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR3 = FUN2(VAR2);
int VAR4;

VAR4 = FUN3(VAR3->VAR5, VAR6,
&VAR3->VAR7, sizeof(VAR3->VAR7));
if (VAR4)
return VAR4;

VAR4 = FUN3(VAR3->VAR5, VAR8,
&VAR3->VAR9,
sizeof(VAR3->VAR9));
if (VAR4)
return VAR4;

FUN4(VAR3->VAR10);

if (VAR3->VAR11)
return FUN5(VAR3->VAR11);

return 0;
}