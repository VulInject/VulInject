static void FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR3;

if (!VAR1)
return;
VAR3 = (struct VAR2 *)VAR1->VAR4;
if (!VAR3)
return;

VAR3->VAR5.VAR6 = VAR1->VAR6;


VAR3->VAR5.VAR7 = false;
FUN2(); 
FUN3(&VAR3->VAR5.VAR8);
}