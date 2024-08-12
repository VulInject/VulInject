VAR1 *FUN1(M_sort_compar_t VAR2, void (*VAR3)(void *))
{
struct M_llist_callbacks VAR4 = {
VAR2, 
NULL,    
NULL,    
VAR3  
};
VAR1 *VAR5 = FUN2(sizeof(*VAR5));

VAR5->VAR6      = FUN3((VAR2 || VAR3)?&VAR4:NULL, (VAR2)?VAR7:VAR8);
VAR5->VAR9      = FUN4(16, 75, VAR10, VAR11, VAR12, NULL);
return VAR5;
}