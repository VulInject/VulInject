#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    VAR3 = NULL; 
    if(FUN2())
    {
        VAR3 = FUN3("","",stdin);
        fclose(VAR3);
    }
    if(FUN2())
    {
        fclose(VAR3);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}