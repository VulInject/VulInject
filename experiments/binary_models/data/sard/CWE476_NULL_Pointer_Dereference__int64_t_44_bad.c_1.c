#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1(VAR4 * VAR5)
{
    FUN2(*VAR5);
}
void FUN3()
{
    VAR4 * VAR5;
    void (*VAR6) (VAR4 *) = VAR7;
    VAR5 = NULL;
    FUN4(VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}