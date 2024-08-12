#VAR1 ""
void FUN1()
{
    if(5==5)
    {
        {
            char * VAR2 = NULL;
            VAR2 = (char *)malloc(sizeof(VAR2));
            if (VAR2 == NULL) {FUN2(-1);}
            VAR3 = '';
            FUN3(VAR3);
            free(VAR2);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}