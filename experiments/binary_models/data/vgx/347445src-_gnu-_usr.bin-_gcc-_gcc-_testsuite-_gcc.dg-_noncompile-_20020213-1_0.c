int fputs (const char *, VAR1 *);
void FUN1 (void *, VAR2);
int FUN2 (const void *, const void *, VAR2);

char VAR3[32];
VAR1 *VAR4;

int main ()
{
fputs ("");		
fputs ("", "", "");	
fputs (21, 43);
FUN1 (VAR3);			
FUN1 (21);			
FUN2 (VAR3, VAR3 + 16);		
FUN2 (21);			
fputs ("", VAR4);
FUN1 (VAR3, 32);
FUN2 (VAR3, VAR3 + 16, 16);
return 0;
}