static void *FUN1( VAR1, VAR2 )
void *VAR1;
yy_size_t VAR2;
{

return (void *) realloc( (char *) VAR1, VAR2 );
}

static void FUN2( void *VAR1 )
static void FUN2( VAR1 )
void *VAR1;
{
free( VAR1 );
}

int main()
{
FUN3();
return 0;
}


int FUN4(void) { return 1; }