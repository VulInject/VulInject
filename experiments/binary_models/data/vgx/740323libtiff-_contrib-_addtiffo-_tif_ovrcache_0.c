unsigned char *FUN1( VAR1 *VAR2, int VAR3, int VAR4,
int VAR5 )

{
long	       VAR6;

if ( VAR4 > VAR2->VAR7 + 1 )
FUN2( VAR2 );

assert( VAR3 >= 0 && VAR3 < VAR2->VAR8 );
assert( VAR4 >= 0 && VAR4 < VAR2->VAR9 );
assert( VAR4 >= VAR2->VAR7
&& VAR4 < VAR2->VAR7+2 );
assert( VAR5 >= 0 && VAR5 < VAR2->VAR10 );

if (VAR2->VAR11 == VAR12)
VAR6 = ((((VAR13) VAR3 * VAR2->VAR10) + VAR5)
* VAR2->VAR14);
else
VAR6 = VAR3 * VAR2->VAR14 +
(VAR2->VAR15 + 7) / 8 * VAR5;

if ( VAR4 == VAR2->VAR7 )
return VAR2->VAR16 + VAR6;
else
return VAR2->VAR17 + VAR6;
}