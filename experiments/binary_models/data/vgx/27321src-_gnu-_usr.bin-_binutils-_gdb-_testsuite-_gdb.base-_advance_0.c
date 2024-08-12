main ()
{
int VAR1;
int VAR2, VAR3;
VAR3 = 5;
VAR2 = 3;    

FUN1 (VAR3); 
FUN2 (); 
FUN3 (); 
VAR1 = FUN4 (VAR2 + FUN5 (VAR3));
return 0; 
}