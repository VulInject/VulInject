static int
FUN1(bsearch_file_handle VAR1, size_t VAR2, size_t VAR3,
char **VAR4)
{
size_t VAR5 = 0;
size_t VAR6;

VAR6 = VAR1->VAR6 << 1; 

*VAR4 = NULL;


if (VAR2)
VAR5 = (1 << VAR2) - 1 + VAR3;
if (((VAR5 + 1) * VAR6 * 2) > VAR1->VAR7)
return 0;

*VAR4 = &VAR1->VAR8[VAR5 * VAR6 * 2];
if (VAR1->VAR8[VAR5 * VAR6 * 2] == '')
return 0; 
return 1;
}