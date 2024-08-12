#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    if(VAR4)
    {
        {
            VAR6 * VAR7 = (VAR6 *)malloc(100*sizeof(VAR6));
            if (VAR7 == NULL) {FUN2(-1);}
            VAR7[0] = 5LL;
            FUN3(VAR7[0]);
            VAR7 = (VAR6 *)realloc(VAR7, (130000)*sizeof(VAR6));
            if (VAR7 != NULL)
            {
                VAR7[0] = 10LL;
                FUN3(VAR7[0]);
                free(VAR7);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}