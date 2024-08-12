#VAR1 ""
char *FUN1()
{
    char VAR2[] = "";
    char *VAR3;
    VAR3 = &VAR2[1];
    return VAR3; 
}
void FUN2() 
{
    FUN3(FUN1());
}
int main(int argc, char * argv[]) 
{
    srand( (unsigned)FUN4(NULL) );
    FUN2();
    return 0;
}