#VAR1 ""
void FUN1(VAR2 * VAR3)
{
    fclose(VAR3);
}
void FUN2()
{
    VAR2 * VAR3;
    void (*VAR4) (VAR2 *) = VAR5;
    VAR3 = NULL; 
    VAR3 = FUN3("","",stdin);
    fclose(VAR3);
    FUN4(VAR3);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN2();
    return 0;
}