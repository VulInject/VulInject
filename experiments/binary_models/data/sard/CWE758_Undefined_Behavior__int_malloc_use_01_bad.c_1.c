#VAR1 ""
void FUN1()
{
    {
        int * VAR2 = (int *)malloc(sizeof(int));
        if (VAR2 == NULL) {FUN2(-1);}
        int VAR3 = *VAR2; 
        free(VAR2);
        FUN3(VAR3);
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}