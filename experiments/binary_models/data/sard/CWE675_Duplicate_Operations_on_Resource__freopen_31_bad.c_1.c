#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    VAR3 = NULL; 
    VAR3 = FUN2("","",stdin);
    fclose(VAR3);
    {
        VAR2 * VAR4 = VAR3;
        VAR2 * VAR3 = VAR4;
        fclose(VAR3);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}