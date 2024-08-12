FUN1 (const int *VAR1, VAR2 *VAR3, int VAR4)
{	int VAR5 ;

for (int VAR6 = 0 ; VAR6 < VAR4 ; VAR6++)
{	VAR5 = VAR1 [VAR6] >> 8 ;
VAR3 [VAR6].VAR7 [2] = VAR5 ;
VAR3 [VAR6].VAR7 [1] = VAR5 >> 8 ;
VAR3 [VAR6].VAR7 [0] = VAR5 >> 16 ;
} ;
}