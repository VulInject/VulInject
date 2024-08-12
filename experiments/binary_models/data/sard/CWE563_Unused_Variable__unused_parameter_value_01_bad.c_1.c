#VAR1 ""
void FUN1(int VAR2) 
{
    VAR2 = 0;
    FUN2(VAR2);
}
void FUN3() 
{
    FUN1(5);
}
int main(int argc, char * argv[]) 
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}