struct VAR1 *FUN1(void)
{
struct VAR2 *VAR3;

VAR3 = FUN2();
if (!VAR3)
return NULL;

if (!VAR3->VAR4) {
VAR5 = FUN3(VAR6, 0,
&VAR3->VAR4);
if (VAR5)
VAR5 = FUN4(VAR6,
&VAR3->VAR4);
if (VAR5)
VAR3->VAR4 = NULL;
}
return VAR3->VAR4;
}