FUN1 (const float *VAR1, VAR2 *VAR3, int VAR4, int VAR5)
{	float VAR6, VAR7 ;

VAR6 = VAR5 ? (8.0 * 0x100000) : 1.0 ;

for (int VAR8 = 0 ; VAR8 < VAR4 ; VAR8++)
{	VAR7 = VAR1 [VAR8] * VAR6 ;
if (VAR7 >= (1.0 * 0x7FFFFF))
{	VAR3 [VAR8] = 0x7FFFFF ;
continue ;
} ;

if (VAR7 <= (-8.0 * 0x100000))
{	VAR3 [VAR8] = -0x800000 ;
continue ;
}
VAR3 [VAR8] = FUN2 (VAR7) ;
} ;

return ;
}