FUN1 (int VAR1, const void *VAR2, int VAR3, int VAR4)
{
int VAR5, VAR6, VAR7 = 0;

char *VAR8 = VAR2;



if (VAR4)
return recv (VAR1, VAR2, FUN2 (0x7FFF, VAR3), VAR4);

do
{

VAR6 = FUN2( VAR3, (int)( 0x10000 - ( 0xFFFF & (long)VAR8 )));


if( VAR6 > 0x7FFF )
VAR6 = 0x7FFF;

VAR5 = recv (VAR1, VAR8, VAR6, 0);
if (VAR5 <= 0)
{
if ((VAR7 > 0)
&& (VAR5 == 0 || (VAR9 == VAR10 )))
return VAR7;
if (VAR9 == VAR11)
continue;

return VAR5;
}
if (VAR5 < VAR6)
return VAR7 + VAR5;

VAR8 += VAR5;
VAR7 += VAR5;
VAR3 -= VAR5;
} while (VAR3 > 0);

return VAR7;
}