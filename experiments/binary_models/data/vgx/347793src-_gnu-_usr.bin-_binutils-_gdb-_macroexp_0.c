FUN1 (struct VAR1 *VAR2,
struct VAR1 *VAR3)
{
int VAR4 = VAR2->VAR5;
struct macro_buffer VAR6, VAR7;

FUN2 (VAR3->VAR8 != -1);
FUN2 (VAR2->VAR8 != -1);


FUN3 (VAR2, VAR3->VAR9, VAR3->VAR5);


if (VAR2->VAR8 == VAR4)
{
VAR2->VAR8 = VAR4 + VAR3->VAR8;
return;
}


FUN4 (&VAR6,
VAR2->VAR9 + VAR2->VAR8,
VAR2->VAR5 - VAR2->VAR8);


if (FUN5 (&VAR7, &VAR6)
&& (VAR7.VAR9 + VAR7.VAR5
== VAR2->VAR9 + VAR4))
{

VAR2->VAR8 = VAR4 + VAR3->VAR8;
return;
}


VAR2->VAR5 = VAR4;
FUN6 (VAR2, '');
FUN3 (VAR2, VAR3->VAR9, VAR3->VAR5);

FUN4 (&VAR6,
VAR2->VAR9 + VAR2->VAR8,
VAR2->VAR5 - VAR2->VAR8);


if (FUN5 (&VAR7, &VAR6)
&& (VAR7.VAR9 + VAR7.VAR5
== VAR2->VAR9 + VAR4))
{

VAR2->VAR8 = VAR4 + 1 + VAR3->VAR8;
return;
}


FUN7 (VAR10, VAR11,
"");
}







struct VAR12 {
const char *VAR13;
struct VAR12 *VAR14;
};