#VAR1 ""
void FUN1()
{
    if(1)
    {
        {
            char * VAR2 = (char *)malloc(sizeof(char));
            if (VAR2 == NULL) {FUN2(-1);}
            char VAR3 = *VAR2; 
            free(VAR2);
            FUN3(VAR3);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}