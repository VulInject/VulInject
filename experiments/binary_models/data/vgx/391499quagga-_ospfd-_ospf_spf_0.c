FUN1 (struct VAR1 *VAR1, ospf_spf_reason_t VAR2)
{
unsigned long VAR3, VAR4, VAR5;
struct timeval VAR6;

if (VAR7)
FUN2 ("");


if (VAR1 == NULL)
return;

FUN3 (VAR2);


if (VAR1->VAR8)
{
if (VAR7)
FUN2 ("",
(void *)VAR1->VAR8);
return;
}


VAR6 = FUN4 (FUN5 (), VAR1->VAR9);

VAR4 = (VAR6.VAR10 * 1000) + (VAR6.VAR11 / 1000);
VAR5 = VAR1->VAR12 * VAR1->VAR13;

if (VAR5 > VAR1->VAR14)
VAR5 = VAR1->VAR14;


if (VAR4 < VAR5)
{

if (VAR5 < VAR1->VAR14)
VAR1->VAR13++;


if ( (VAR5 - VAR4) < VAR1->VAR15)
VAR3 = VAR1->VAR15;
else
VAR3 = VAR5 - VAR4;
}
else
{

VAR3 = VAR1->VAR15;
VAR1->VAR13 = 1;
}

if (VAR7)
FUN2 ("", VAR3);

FUN6 ("", VAR3);

VAR1->VAR8 =
FUN7 (VAR16, VAR17, VAR1, VAR3);
}