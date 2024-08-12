static void FUN1(void)
{
int *VAR1 = &(int){ 1 };		
int *VAR2 = &(int){ *VAR3 };		
static int *VAR4 = &(int){ 1 };	
}