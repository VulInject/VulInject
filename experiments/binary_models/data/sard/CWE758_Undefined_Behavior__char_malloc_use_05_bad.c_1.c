#VAR1 ""
int VAR2 = 1; 
int VAR3 = 0; 
void FUN1()
{
    if(VAR2)
    {
        {
            char * VAR4 = (char *)malloc(sizeof(char));
            if (VAR4 == NULL) {FUN2(-1);}
            char VAR5 = *VAR4; 
            free(VAR4);
            FUN3(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}