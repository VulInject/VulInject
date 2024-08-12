#VAR1 ""
static const int VAR2 = 1; 
static const int VAR3 = 0; 
void FUN1()
{
    if(VAR2)
    {
        {
            char * VAR4 = NULL;
            VAR4 = (char *)malloc(sizeof(VAR4));
            if (VAR4 == NULL) {FUN2(-1);}
            VAR5 = '';
            FUN3(VAR5);
            free(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}