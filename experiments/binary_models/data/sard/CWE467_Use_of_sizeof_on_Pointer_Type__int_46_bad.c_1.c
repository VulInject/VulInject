#VAR1 ""
void FUN1()
{
    if(FUN2())
    {
        {
            int * VAR2 = NULL;
            VAR2 = (int *)malloc(sizeof(VAR2));
            if (VAR2 == NULL) {FUN3(-1);}
            VAR3 = 5;
            FUN4(VAR3);
            free(VAR2);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}