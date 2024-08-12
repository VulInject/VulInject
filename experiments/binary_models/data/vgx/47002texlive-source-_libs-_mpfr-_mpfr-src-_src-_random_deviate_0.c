FUN1 (mpfr_random_deviate_ptr VAR1, mpfr_random_size_t VAR2,
gmp_randstate_t VAR3, mpz_t VAR4)
{



FUN2 (VAR5 > 0 && VAR5 <= sizeof (unsigned long) * VAR6);


FUN2 (sizeof (VAR7) * VAR6 >= 32 &&
sizeof (VAR7) >=
sizeof (VAR8));


FUN3 (VAR2 <= (VAR7)(-((int) VAR5 + 1)));


if (VAR1->VAR9 >= VAR2)
return;

if (VAR1->VAR9 == 0)
{
VAR1->VAR10 = FUN4 (VAR3, VAR5); 
VAR1->VAR9 = VAR5;
if (VAR1->VAR9 >= VAR2)
return;    
}

if (VAR4)
{

VAR2 = ((VAR2 + (VAR5-1)) / VAR5) * VAR5;  
VAR2 -= VAR1->VAR9;                  
FUN5 (VAR1->VAR9 == VAR5 ? VAR1->VAR11 : VAR4, VAR3, VAR2); 
if (VAR1->VAR9 > VAR5)
{
FUN6 (VAR1->VAR11, VAR1->VAR11, VAR2);
FUN7 (VAR1->VAR11, VAR1->VAR11, VAR4);
}
VAR1->VAR9 += VAR2;
}
else
{

while (VAR1->VAR9 < VAR2)
{
unsigned long VAR12 = FUN4 (VAR3, VAR5);
if (VAR1->VAR9 == VAR5)
FUN8 (VAR1->VAR11, VAR12);
else
{
FUN6 (VAR1->VAR11, VAR1->VAR11, VAR5);
FUN9 (VAR1->VAR11, VAR1->VAR11, VAR12);
}
VAR1->VAR9 += VAR5;
}
}
}