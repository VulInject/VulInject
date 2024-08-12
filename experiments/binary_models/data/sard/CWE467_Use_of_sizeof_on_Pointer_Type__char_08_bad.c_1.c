#VAR1 ""
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    if(FUN1())
    {
        {
            char * VAR2 = NULL;
            VAR2 = (char *)malloc(sizeof(VAR2));
            if (VAR2 == NULL) {FUN4(-1);}
            VAR3 = '';
            FUN5(VAR3);
            free(VAR2);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}